#include<stdio.h>
int main()
{
    char name[20];
    fgets(name,sizeof(name)-1,stdin);
    puts(name);
    return 0;
}