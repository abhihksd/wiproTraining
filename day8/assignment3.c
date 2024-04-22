/*
 Write a program to find the  n-th number made of prime digits

Input Format:
First Line Of Input Contains T Number Of Test Cases
Second Line Of Input Contains an input Number N.

Output Format:
Print the Nth number of sequence and it should be only prime.

Constraints:
1<=T<=100
1<=N<=10000

Examples :
Input  :
1
10
Output :
 33*/

 #include <stdio.h>

int isPrime(int num) {
    if (num <= 1) return 0;
    if (num <= 3) return 1;
    if (num % 2 == 0 || num % 3 == 0) return 0;
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0)
            return 0;
    }
    return 1;
}

int findNthPrime(int n) {
    int count = 0, num = 2;
    while (count < n) {
        if (isPrime(num)) {
            count++;
            if (count == n) {
                return num;
            }
        }
        num++;
    }
    return -1;
}

int main() {
 
        int N;
        printf("Enter the value of N: ");
        scanf("%d", &N);

        int nthPrime = findNthPrime(N);
        printf("The %dth number made of prime digits is: %d\n", N, nthPrime);
    return 0;
}
