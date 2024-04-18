#include<stdio.h>

int main()
{
    int num;
    printf("enter number for the table to be printed");
    scanf("%d",&num);
    for(int i=1;i<=10;i++)
    printf("%d x %d = %d\n", num, i, num * i);
}