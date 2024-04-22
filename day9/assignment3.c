#include<stdio.h>

void cpInReverse()
{
    FILE *file;
    FILE *file2;

    file=fopen("f1.txt","r");
    file2=fopen("f2.txt","w");
    if(file==NULL)
    {
        printf("File not found\n");
        return ;
    }
    fseek(file,0,SEEK_END);
    int fileSize=ftell(file);

    for(int i=fileSize-1;i>=0;i--)
    {
        fseek(file,i,SEEK_SET);
        fprintf(file2,"%c",fgetc(file));
    }
}
int main()
{
    cpInReverse();
    return 0;
}
