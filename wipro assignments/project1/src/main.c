// main.c

#include <stdio.h>
#include <stdlib.h>
#include <dlfcn.h>
#include <string.h>

#define MAX_FILENAME_LENGTH 256
#define MAX_PLUGINS 10

// Define function pointer type for archive handlers
typedef void (*ListContentsFunction)(const char*);

// Define plugin structure
typedef struct {
    char name[MAX_FILENAME_LENGTH];
    void* handle;
    ListContentsFunction listContents;
} Plugin;

// Global array to store loaded plugins
Plugin loadedPlugins[MAX_PLUGINS];
int numLoadedPlugins = 0;

// Function to load a plugin
void loadPlugin(const char* pluginName) {
    if (numLoadedPlugins >= MAX_PLUGINS) {
        fprintf(stderr, "Cannot load plugin. Maximum number of plugins reached.\n");
        return;
    }

    void* handle = dlopen(pluginName, RTLD_LAZY);
    if (!handle) {
        fprintf(stderr, "Error loading plugin %s: %s\n", pluginName, dlerror());
        return;
    }

    // Get function pointer for listContents function
    ListContentsFunction listContents = (ListContentsFunction)dlsym(handle, "listContents");
    if (!listContents) {
        fprintf(stderr, "Error getting symbol for listContents in plugin %s: %s\n", pluginName, dlerror());
        dlclose(handle);
        return;
    }

    // Store the loaded plugin in the array
    strcpy(loadedPlugins[numLoadedPlugins].name, pluginName);
    loadedPlugins[numLoadedPlugins].handle = handle;
    loadedPlugins[numLoadedPlugins].listContents = listContents;
    numLoadedPlugins++;
}

// Function to list contents of an archive using loaded plugins
void listArchiveContents(const char* filename) {
    // Get file extension
    const char* extension = strrchr(filename, '.');
    if (!extension) {
        fprintf(stderr, "Invalid filename: %s\n", filename);
        return;
    }
    
    // Iterate through loaded plugins to find one that matches the file extension
    for (int i = 0; i < numLoadedPlugins; i++) {
        if (strcmp(loadedPlugins[i].name, extension) == 0) {
            // Call listContents function of the matched plugin
            loadedPlugins[i].listContents(filename);
            return;
        }
    }

    // If no matching plugin found
    fprintf(stderr, "No plugin found to handle %s\n", extension);
}

int main(int argc, char* argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <archive_file>\n", argv[0]);
        return 1;
    }

    // Load plugins (assuming they are passed as command-line arguments)
    for (int i = 2; i < argc; i++) {
        loadPlugin(argv[i]);
    }

    // List contents of the archive
    listArchiveContents(argv[1]);

    // Unload loaded plugins
    for (int i = 0; i < numLoadedPlugins; i++) {
        dlclose(loadedPlugins[i].handle);
    }

    return 0;
}
