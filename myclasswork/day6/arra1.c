#include<stdio.h>

#define size 20
int main()
{
    
    int arr[20],ind;
    for(int i=0,count=0,count2=sizeof(arr)/sizeof(arr[0])/2;i<size;i++)
    {
        if(i%2!=0)
        {
            arr[count]=i;
            count++;
        }
        else{
            
            arr[count2]=i;
            count2++;
        }
    }
    for(int i=0;i<20;i++)
    printf("%d ",arr[i]);
    return 0;
}