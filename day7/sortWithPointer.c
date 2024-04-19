/*Sorting using pointer
I am using bubble sort*/
#include <stdio.h>
int main()
{
    int arr[] = {5, 1, 3, 8, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Unsorted array\n");
    for (int i = 0; i < size; i++)
        printf("%d ", *(arr + i));

    printf("\n");

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (*(arr + j) > *(arr + j + 1))
            {
                // swapping
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
    printf("Sorted array\n");
    for (int i = 0; i < size; i++)
        printf("%d ", *(arr + i));
}