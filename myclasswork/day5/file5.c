/*Q1. Print series 0,3,8,15,24,35,48,63,80,99 given n = 10*/
#include<stdio.h>
int main()
{
    int i=3,n=10,count=1;
    int num=10;
    // printf("enter number");
    // scanf("%d",&n);
    // while(count<=n)
    // {
    //     if(count==n)
    //         printf("%d ",num);
    //     else
    //     printf("%d, ",num);

    //     num+=i;
    //     i+=2;
    //     count++;
    // }
    i=1;
    while(count<=n)
    {
        if(count==n)
        printf("%d ", (i*i)-1);
        else
        printf("%d, ", (i*i)-1);
        i++;
        count++;
    }
}