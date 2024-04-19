#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//use defined 
#include<utility.h>

//defining the methods here
char* encoding(const char* s) {
    if (s == NULL || *s == '\0') {
        return NULL;
    }

    int length = strlen(s);
    char* compressed_string = (char*)malloc((2 * length + 1) * sizeof(char));
    int index = 0;
    int count = 1;
    char current_char = s[0];

    for (int i = 1; i <= length; i++) {
        if (s[i] == current_char) {
            count++;
        } else {
            if (count > 1) {
                compressed_string[index++] = current_char;
                compressed_string[index++] = count + '0';
            } else {
                compressed_string[index++] = current_char;
            }
            current_char = s[i];
            count = 1;
        }
    }

    compressed_string[index] = '\0';
    return compressed_string;
}
void display(char * string)
{
    printf("The encoded string is: %s",string);
}
