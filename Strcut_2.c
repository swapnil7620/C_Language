#include <stdio.h>

int main()
{
    
    typedef struct Employee
    {
        int Id;
        char Name[25];
        int Salary;

    } Employee;

    int n;
    printf("Enter the Numbers of Employee You Want to add \n");
    scanf("%d", &n);
    Employee E[n]; // Swapnil,Nishant,Niraj,Suyog,Tanmay;
    // printf("Enter the Employees Details\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter the Employees Details\n");

        printf("\nEnter the details of %d Employee \n", i + 1);
        printf("Enter the Employee ID \n: ");
        scanf("%d", &E[i].Id);
        printf("\nEnter the Employee Name \n: ");
        scanf("%s", &E[i].Name);
        printf("\nEnter the Employee Salary\n : ");
        scanf("%d", &E[i].Salary);
    }
    // printf("------------Details of an all Employee---------\n");

    // for (int i = 0; i < n; i++)
    // {
    //     // printf("Details of Employee %d:\n", i+ 1);

    //     printf("-----Details of Employee %d:------\n", i + 1);
    //     printf("Employee ID : %d\n", E[i].Id);
    //     printf("Employee Name : %s\n", E[i].Name);
    //     printf("Employee Price : %d\n", E[i].Salary);
    // }
    int Max = E[0].Salary;
    int Min = E[0].Salary;
    int MaxEmployee = 0;
    int MinEmployee = 0;
    for (int i = 0; i < n; i++)
    {
        if (E[i].Salary > Max)
        {
            Max = E[i].Salary;
            MaxEmployee= i;
        }
        if (E[i].Salary < Min)
        {
            Min = E[i].Salary;
            MinEmployee = i;
        }
    }
    printf("\n-----------Details of highest salary Employee--------\n\n");
    printf("Employee ID : %d\n", E[MaxEmployee].Id);
    printf("Employee Name : %s\n", E[MaxEmployee].Name);
    printf("Employee salary : %d\n", E[MaxEmployee].Salary);

    printf("\n-------Details of Lowest salary Employee------\n\n");
    printf("Employee ID : %d\n", E[MinEmployee].Id);
    printf("Employee Name : %s\n", E[MinEmployee].Name);
    printf("Employee salary : %d\n", E[MinEmployee].Salary);

    return 0;
}