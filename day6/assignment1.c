/*Q1. rotate array every kth element


i/p
1 2 3 4 5 6 7 8 9
k= 3
o/p
3 2 1 6 5 4 9 8 7

i/p
1 2 3 4 5 6 7 8 9
k= 4
o/p
4 3 2 1 8 7 6 5 9 */

#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int k=4;
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i=i+k)
    {
       int start=i;
       int end;
       if(i+k-1<size-1)
       {
         end=i+k-1;
       }
       else end=size-1;

       while(start<end)
       {
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
       }
    }
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
}