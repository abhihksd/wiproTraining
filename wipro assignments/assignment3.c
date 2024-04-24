#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PLUGINS 10
#define MAX_PLUGIN_NAME_LENGTH 100

typedef void (*FileOperationFunction)(const char *);

typedef struct
{
    char name[MAX_PLUGIN_NAME_LENGTH];
    FileOperationFunction listContents;

} Plugin;

Plugin loadedPlugins[MAX_PLUGINS];
int numLoadedPlugins = 0;

void loadPlugin(const char *pluginName, FileOperationFunction listContents)
{
    if (numLoadedPlugins >= MAX_PLUGINS)
    {
        fprintf(stderr, "Cannot load plugin. Maximum number of plugins reached.\n");
        return;
    }

    Plugin plugin;
    strncpy(plugin.name, pluginName, MAX_PLUGIN_NAME_LENGTH - 1);
    plugin.name[MAX_PLUGIN_NAME_LENGTH - 1] = '\0';
    plugin.listContents = listContents;
    loadedPlugins[numLoadedPlugins++] = plugin;

    printf("Plugin '%s' loaded successfully.\n", pluginName);
}

Plugin *findPluginByName(const char *pluginName)
{
    for (int i = 0; i < numLoadedPlugins; i++)
    {
        if (strcmp(loadedPlugins[i].name, pluginName) == 0)
        {
            return &loadedPlugins[i];
        }
    }
    return NULL;
}

void listContentsUsingPlugin(const char *pluginName, const char *filename)
{
    Plugin *plugin = findPluginByName(pluginName);
    if (plugin)
    {
        plugin->listContents(filename);
    }
    else
    {
        fprintf(stderr, "Plugin '%s' not found.\n", pluginName);
    }
}

int main()
{

    loadPlugin("tar_handler", listContentsForTar);

    listContentsUsingPlugin("tar_handler", "example.tar");

    return 0;
}
