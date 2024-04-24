#include<stdio.h>
int main()
{
    static int x=5;
    printf("%d\n",x++);
    return 0;
}