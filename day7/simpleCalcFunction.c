#include <stdio.h>

// Function declarations
void displayIntResult(int result);
void displayFloatResult(float result);

void add(int *num1, int *num2);
void subtract(int *num1, int *num2);
void multiply(int *num1, int *num2);
void divide(int *num1, int *num2);

// function definitions
void add(int *num1, int *num2)
{
    int result = *num1 + *num2;
    displayIntResult(result);
}

void subtract(int *num1, int *num2)
{
    int result = *num1 - *num2;
    displayIntResult(result);
}

void multiply(int *num1, int *num2)
{
    int result = *num1 * *num2;
    displayIntResult(result);
}

void divide(int *num1, int *num2)
{
    if (*num2 != 0)
    {
        float result = (float)*num1 / *num2;
        displayFloatResult(result);
    }
    else
    {
        printf("cant divide by zero\n");
    }
}

void displayIntResult(int result)
{
    printf("Answer: %d\n", result);
}

void displayFloatResult(float result)
{
    printf("Answer: %.2f\n", result);
    system("cls");
}

// main method
int main()
{
    int num1, num2, choice = 0;
    int exit = 0;
    while (!exit)
    {

        printf("===========================\n");
        printf("         Calculator\n");
        printf("===========================\n");
        printf("===========================\n");
        printf("     Enter two numbers:\n");
        printf("===========================\n");
        scanf("%d %d", &num1, &num2);
        printf("===========================\n");
        printf("Select operation:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("===========================\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            add(&num1, &num2);
            break;
        case 2:
            subtract(&num1, &num2);
            break;
        case 3:
            multiply(&num1, &num2);
            break;
        case 4:
            divide(&num1, &num2);
            break;
        case 5:
            exit = 1; // used to exit the loop
            break;
        default:
            printf("Invalid choice\n");
        }
    }

    printf("Exiting.\n");

    return 0;
}
