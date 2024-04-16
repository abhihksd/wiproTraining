/*Write a c program to print alphabet triangle.
Input: 5
Output:

         A
        ABA
       ABCBA
      ABCDCBA
     ABCDEDCBA*/
#include<stdio.h>

int main()
{
    int n=5;

    for(int i=0;i<n;i++)
    {
        for(int j=n-i;j>0;j--)
        {
            printf("_");
        }
        for(int k=0;k<=i;k++)
        {
            printf("%c",65+k);
        }
        for(int l=i;l>0;l--)
        {
            printf("%c",64+l);
        }

        printf("\n");
    }
}     