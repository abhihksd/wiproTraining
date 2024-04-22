/*
4. C Program to Remove all Characters in Second String which are present in First String
i/p
Bhima shankar is a C programmeC
o/p
Bhima snkr is a C programme*/

#include <stdio.h>
#include <string.h>

void removeChars(char *str1, char *str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    int hash[256] = {0}; // Assuming ASCII characters

    // Populate hash with characters from str1
    for (int i = 0; i < len1; i++) {
        hash[(int)str1[i]] = 1;
    }

    // Iterate through str2 and remove characters present in str1
    int j = 0;
    for (int i = 0; i < len2; i++) {
        if (hash[(int)str2[i]] == 0) {
            str2[j++] = str2[i];
        }
    }
    str2[j] = '\0'; // Null terminate the modified string
}

int main() {
    char str1[100], str2[100];
    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);

    removeChars(str1, str2);

    printf("Modified string: %s\n", str2);

    return 0;
}
