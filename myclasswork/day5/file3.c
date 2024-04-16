#include<stdio.h>
int main()
{
    int age;
    printf("enter your age:");
    scanf("%d",&age);
    if(age<18)
    {
        printf("Category: Minor\nNot eligible to vote");
    }
    else{
        if(age>=18 && age<=65)
            printf("Category: Adult\n");
        else
            printf("Category: Senior\n");
        printf("Eligible to vote\n");
    }
}