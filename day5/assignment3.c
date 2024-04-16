// Q3. print Sum of Even and  sum of odd values between 1 to 50

#include<stdio.h>
int main()
{
    int even=0,odd=0;
    for(int i=0;i<=50;i++)
    {
        if(i%2==0)
        even+=i;
        else
        odd+=i;
    }
    printf("sum of even numbers: %d and odd numbers is: %d ",even, odd);
}