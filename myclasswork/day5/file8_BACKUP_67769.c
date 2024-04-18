// Find out the sum of series   3+33+333+3333+33333+333333

#include<stdio.h>
int main()
{
    int sum=0;
    int num=3;
<<<<<<< HEAD
    // int threes=0;
    // printf("enter size of the 3's");
    // scanf("%d",&threes);
=======
>>>>>>> ed3dd9a99aad8831ada039e8a429465f7d87acbe
    for(int i=1;i<=6;i++)
    {
       // sum=sum+(num*3);
        printf("Num is:%d and the sum is:%d\n ",num,sum);
        sum+=num;
        num=num*10+3;
        
    }
<<<<<<< HEAD
    printf("final sum:%d\n",sum);
=======
    printf("final sum: %d ",sum);
>>>>>>> ed3dd9a99aad8831ada039e8a429465f7d87acbe

}