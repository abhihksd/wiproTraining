/*
Q.3
Given an array A of N positive numbers. The task is to find the position
where equilibrium first occurs in the array. Equilibrium position in an array is a position such that the sum of elements before it is equal to the sum of   elements after it.

Input Format:
The first line contains an integer, denoting the size of the array.
The second line contains integers denoting the elements
of the array.
Constraints
1<= n<=100
1<=arr<= 1000, where arr is the ith element of the array.

Output Format:
The output line contains integer denoting an equilibrium
index (if any) or -1 (if no equilibrium indexes exist).

TESTCASE 1:
Input:
7
[-7, 1, 5, 2, -4, 3, 1]
3
[-7, 0, 0, 0, -4, 4, 0]
0
[0 0 0 0 -1]
4
Output:
3
*/
#include<stdio.h>
int find_equilibrium(int arr[],int n)
{
     int totalSum = 0;
    int leftSum = 0;

    for (int i = 0; i < n; i++)
        totalSum += arr[i];

    for (int i = 0; i < n; i++) {
        totalSum -= arr[i]; 
        if (leftSum == totalSum)
            return i; 
        leftSum += arr[i]; 
    }

    return -1; 
}

int main()
{
    int arr[]={-7,1,5,2,-4,3,1};
    //need to enter code to accept array and size of array
    int size=7;
    printf("equilibrium found at: %d",find_equilibrium(arr,size));
}
