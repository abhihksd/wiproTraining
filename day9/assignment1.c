#include<stdio.h>
struct Employee{
    int empid;
    char name[50];
    float sal;
    char gender;
};
void emp_details(struct Employee *emp)
{
    printf("Enter empid: ");
    scanf("%d",&emp->empid);
    printf("Enter Name: ");
    scanf("%s",emp->name);
    printf("Enter salary: ");
    scanf("%f",&emp->sal);
    getchar();
    printf("Enter gender: ");
    scanf("%c",&emp->gender);
}

void writeEmpDetails(struct Employee *emp)
{
    FILE *file=fopen("employee.txt","a");

    if(file!=NULL)
    {
        fprintf(file,"%d\t%s\t%.2f\t%c\n",emp->empid,emp->name,emp->sal,emp->gender);

        fclose(file);
    }
    printf("Employee added\n");
}
int main()
{
    struct Employee emp;
    int count=0;
    //accepting employee details
    while(count<2)
    {
    emp_details(&emp);
    writeEmpDetails(&emp);
    count++;
    }

}