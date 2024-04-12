//Fib Series

#include <stdio.h>

// int main()
// {
//     int i=0,v1=0,v2=1,Fb=0,n;

//     printf("\nEnter the nth Number: ");
//     scanf("%d",&n);
//     printf("\nFib Series of %dth Number is\n",n);
//     // printf("%d ",v2);
//     while(i<n)
//     {
//         printf("%d ",v1);
//         Fb = v1+v2;
//         v1 = v2;
//         v2 = Fb;
//         i++;
//     }

//     printf("\n\n");
//     return 0;
// }

//using recursion
void fib(int n,int a,int b)
{
    if(n>0)
    {
        printf("%d\t",a);
        fib(n-1,b,a+b);
    }

}
int main()
{
    int n;
    printf("enter range:");
    scanf("%d",&n);
    printf("\n");
    fib(n,0,1);
    return 0;

}