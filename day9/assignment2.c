#include <stdio.h>
#include <stdlib.h>

// Define a structure for an employee
struct Employee {
    int empid;
    char name[50];
    float sal;
    char gender;
};

int main() {
    FILE *file;
    struct Employee emp;
    char filename[50];

    printf("Enter the filename: ");
    scanf("%s", filename);

    // Open the file in read mode
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        exit(1);
    }

    printf("\nEmployee Details:\n");

    // Read employee details from the file and print them
    while (fscanf(file, "%d %s %f %c", &emp.empid, emp.name, &emp.sal, &emp.gender) != EOF) {
        printf("Employee ID: %d\n", emp.empid);
        printf("Name: %s\n", emp.name);
        printf("Salary: %.2f\n", emp.sal);
        printf("Gender: %c\n\n", emp.gender);
    }

    // Close the file
    fclose(file);

    return 0;
}
