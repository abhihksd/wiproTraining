/*
Check whether a given number can be expressed as the sum of two prime number
i/p
Enter a positive integer: 34
Output
34 = 3 + 31

34 = 5 + 29
34 = 11 + 23
34 = 17 + 17
NoofWays = 4

NoofWays=-1*/
#include <stdio.h>
int isPrime(int num)
{
    if (num <= 1)
        return 0;
    int flag = 1;
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            flag = 0;
            break;
        }
    }
    if (flag)
        return 1;
    else
        return 0;
}
int main()
{
    int num, count = 0;
    printf("Enter a postive integer:\n");
    scanf("%d", &num);
    for (int i = 2; i <= num / 2; i++)
    {
        if (isPrime(i) && isPrime(num - i))
        {
            printf("%d = %d +%d\n", num, i, num - i);
            count++;
        }
    }

    if (count == 0)
    {
        printf("No of ways -1\n");
    }
    else
    {
        printf("No of ways= %d\n", count);
    }

    return 0;
}