/*Q1. Print series 0,3,8,15,24,35,48,63,80,99 given n = 10*/
#include<stdio.h>
int main()
{
    int i=3,n=10,count;
    int num=0;
    while(count<=n)
    {
        printf("%d  ",num);
        num+=i;
        i+=2;
        count++;
    }
}