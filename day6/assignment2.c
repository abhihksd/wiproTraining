/*
Q2.
Problem Statement:
Given an unsorted array a of size N of non-negative integers,
find a continuous sub-array which adds to a given number sum.

Input Format:
The first line contains an integer, denoting the size of the array.
The second line contains integers denoting the elements
of the array.
The last line contains an integer, denoting the sum.

Constraints
1<= n<=100
1<=arr<= 1000, where arr is the ith element of the array.
1<= n<=100000

Output Format:
The output line contains integers denoting the indexes.

TESTCASE 1:
Input:
7
[1, 4, 0, 0, 3, 10, 5]

sum = 7
Output:
Sum found between indexes 1 and 4
*/

// TESTCASE 2:
// Input:
// 2
// [1, 4]
// sum = 0
// Output:
// No subarray found

#include<stdio.h>
int main()
{

    int arr[]={1, 4, 0, 0, 3, 10, 5};
    int size=sizeof(arr)/sizeof(arr[0]);
    //have to write the code to enter array and the target

    int i=0,j=0,target=7; //i=start and j=end indexes
    int sum=arr[0];
    int flag=0;
    for(j=1;j<size;j++)
    {
        while(i<j-1 && sum>target) //to remove the previous element from the sum
        {
            sum-=arr[i];
            i++;
        }
        
        if(sum==target)  //checks if the sum is equal to the target
        {
            printf("sub array found between %d and %d",i,j-1);
            flag=1;
            break;
        }
        if(j<size)  // this adds the element to the sum
        sum+=arr[j];
    }
    if(!flag)
    printf("no sub array found");


    
}
