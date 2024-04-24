#include <stdio.h>

int main(int argc, char *argv[]) {
   
    if (argc < 2) {
        printf("Usage: %s <file_name>\n", argv[0]);
        return 1; 
    }

    printf("You provided the file name: %s\n", argv[1]);

    return 0; 
}
