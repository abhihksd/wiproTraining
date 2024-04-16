#include<stdio.h>
int main()
{
    int a,b,c=5;
    do
    {
        printf("\nenter choice \n1.Addition \n2. Substraction \n3. Divide \n4. Multiply \n5. Exit");
        scanf("%d",&c);
        printf("enter 2 operands");
        scanf("%d %d",&a,&b);
        switch (c)
        {
        case 1:
            printf("the sum is: %d",a+b);
            break;
        case 2:
            printf("the sum is: %d",a-b);
            break;
        case 3:
            printf("the sum is: %d",a/b);
            break;
        case 4:
            printf("the sum is: %d",a*b);
            break;
        
        default:
            break;
        }
    }while( c!=5 );

}