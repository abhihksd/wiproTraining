#include<stdio.h>
int main()
{
    int a,b;
    char ch;
    char name[20];
    printf("enter 2 numbers and a name");
    scanf("%d%d%s",&a,&b,&name[0]);
    printf("\nch: %d=%c",ch,ch);
    getchar();
    scanf("%c",&ch);
    printf("\nValues Scanned\n");
    printf("\n%d\n%d\n%s\n%c",a,b,name,ch);
}