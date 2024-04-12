//bSort.c
#include <stdio.h>
#define n 5

void dispList(int [], int);

int main()
{
    int a[n] = {7,4,4,2,6};
    int i,j,t;

    printf("\nBefore Sorting List of Elements\n");
    dispList(a,n);
    //logic
    i = 1;

    while(i < n) // outer loop i iteration
    {
        j = 0;
        while(j<(n-i)) //inner loop, j iteration
        {
            if (a[j] > a[j+1])
            {
                //swap
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
            printf("\nFor i=%d and j=%d\n",i,j);
            dispList(a,n);
            getchar();
            j=j+1;
        } //end of j iter
        i = i+1;
    } // end of i loop

    printf("\nAfter Sorting List of Elements\n");
    dispList(a,n);


    return 0;
}

void dispList(int a[], int Cap)
{
    int i;
    printf("\nList is\n");
    printf("\n=======================\n");
    for(i=0;i<Cap;i++)
        printf("%d\t",a[i]);
    printf("\n=======================\n");
}