#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    int i;
    for( i=0;i<5;i++)
    {
        if(arr[i]==6)
        break;
    }
    if(i>=5)
    printf("element not found");
    else
    printf("element found at: %d",i);
    return 0;
}