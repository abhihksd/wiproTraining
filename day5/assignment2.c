/*Q2. Print series 1, 2, 4, 8, 16, 32, 64. given n = 8*/
#include<stdio.h>
#include<math.h>
int main()
{
    int n=8;
    for(int i=0;i<n;i++)
    {
        int power=pow(2,i);
        printf("%d ", power);
    }
}