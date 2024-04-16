// Sample Output:
// 1*2*3*4*5
// 6*7*8*9*10
// 11*12*13*14*15
// 16*17*18*19*20
// 21*22*23*24*25

#include<stdio.h>
int main()
{
    int n;
    printf("enter number");
    scanf("%d",&n);
    for(int i=1;i<=n*n;i++)
    {
        if(i%n==0)
        printf("%d\n",i);
        else 
        printf("%d*",i);
    }
}