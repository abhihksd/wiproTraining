#include<string.h>

#include<stdio.h>
int main()
{
    FILE *fptr=NULL;
    fptr=fopen("f1.txt","a+");
    if(fptr==NULL)
    {
        printf("FILE NOT FOUND");
        return 0;
    }
    printf("FILE FOUND");
    fprintf(fptr,"We have over written to the file\n");
    return 0;

}