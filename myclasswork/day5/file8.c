// Find out the sum of series   3+33+333+3333+33333+333333

#include<stdio.h>
int main()
{
    int sum=0;
    int num=1;
    for(int i=1;i<=6;i++)
    {
       // sum=sum+(num*3);
        printf("Num is:%d and the sum is:%d\n ",num*3,sum);
        sum+=num*3;
        num=num*10;
        num=num+1;
        
    }
    printf("final sum: ",sum);

}