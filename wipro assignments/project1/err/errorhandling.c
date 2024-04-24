
void loadPlugin(const char* pluginName) {
    
    if (!handle) {
        fprintf(stderr, "Error loading plugin %s: %s\n", pluginName, dlerror());
        return;
    }
}


void listArchiveContents(const char* filename) {
    
    if (!extension) {
        fprintf(stderr, "Invalid filename: %s\n", filename);
        return;
    }
}
