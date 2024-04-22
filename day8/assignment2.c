/*
A2.Program to find nth number made of given four digits 1, 4,6 and 9 as the only digits..

Input Format:

The First Line Of Input Contains T no of test cases
The Second Line Of Input Contains N as input taken.

Output Format:
Print the number of digits in the nth number .

Constraints:

1<=T<=100
1<=N<=100

Examples:

Input : 6
Output : 14

1,4 6, 9.11,14

Input : 21
Output : 111
*/

#include <stdio.h> 
// Function to find the length of the nth number
int findLength(int n) {
    if (n <= 4) return 1;  
    n -= 4; 
    int digits = 2;
    int count = 4; 
    while (n > count + 4 * digits) {
        count += 4 * digits; 
        digits++; 
    }
    return digits; 
}

// Function to find the nth number
int findNthNumber(int n) {
    if (n <= 4) return n; 
    n -= 4; 
    int length = findLength(n); 
    int start = 1; 
    for (int i = 2; i < length; i++) {
        start *= 10; 
    }
    start += (n - 1) / length; 
    int position = (n - 1) % length; 
    int digits[] = {1, 4, 6, 9}; 
    return start * 10 + digits[position]; 
}

int main() {
        int N;
        printf("Enter the value of N: ");
        scanf("%d", &N);
        int nthNumber = findNthNumber(N);
        printf("The %dth number made of digits 1, 4, 6, and 9 is: %d\n", N, nthNumber);

    return 0;
}
