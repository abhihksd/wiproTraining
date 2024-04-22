/*Q5
 alternativel merge two strings
i/p
Bhima
ABCDEOLM
o/p
BAhBiCmDaEOLM
*/
#include <stdio.h>
#include <string.h>

void alternateMerge(char *str1, char *str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    int len = len1 + len2;
    char result[len + 1]; // +1 for null terminator

    int i = 0, j = 0, k = 0;
    while (i < len1 && j < len2) {
        result[k++] = str1[i++];
        result[k++] = str2[j++];
    }

    // If one string is longer than the other, append the remaining characters
    while (i < len1) {
        result[k++] = str1[i++];
    }
    while (j < len2) {
        result[k++] = str2[j++];
    }

    result[k] = '\0'; // Null terminate the result string

    printf("Merged string: %s\n", result);
}

int main() {
    char str1[100], str2[100];
    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);

    alternateMerge(str1, str2);

    return 0;
}
