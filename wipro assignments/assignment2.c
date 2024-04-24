#include <stdio.h>
#include <string.h>

void handleTextFile(const char *filename);
void handleImageFile(const char *filename);
void handleUnknownFile(const char *filename);

int main(int argc, char *argv[])
{

    if (argc < 2)
    {
        printf("Usage: %s <file_name>\n", argv[0]);
        return 1;
    }

    const char *filename = argv[1];

    const char *extension = strrchr(filename, '.');
    if (extension)
    {

        extension++;

        if (strcmp(extension, "txt") == 0)
        {
            handleTextFile(filename);
        }
        else if (strcmp(extension, "jpg") == 0 || strcmp(extension, "png") == 0)
        {
            handleImageFile(filename);
        }
        else
        {
            handleUnknownFile(filename);
        }
    }
    else
    {
        printf("File extension not found. Unable to determine file type.\n");
    }

    return 0;
}

void handleTextFile(const char *filename)
{
    printf("Handling text file: %s\n", filename);
}

void handleImageFile(const char *filename)
{
    printf("Handling image file: %s\n", filename);
}

void handleUnknownFile(const char *filename)
{
    printf("Unknown file type: %s\n", filename);
}
