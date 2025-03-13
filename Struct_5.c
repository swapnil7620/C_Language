#include <stdio.h>

typedef struct Employee {
    int id;
    char Empname[20];
    int Department_Id;
} Employee;

void enterEmployeeDetails(Employee *E, int n);
void displayEmployeeDetails(Employee *E, int n);

int main() {
    int n;
    
    printf("\nEnter the number of employees: ");
    scanf("%d", &n);

    Employee E[n];

    enterEmployeeDetails(E, n);
    displayEmployeeDetails(E, n);

    return 0;
}

void enterEmployeeDetails(Employee *E, int n) {
    for (int i = 0; i < n; i++) {
        printf("\nInformation of Employee No: %d\n", i + 1);

        printf("Enter Employee id: ");
        scanf("%d", &(E + i)->id);

        printf("Enter Employee name: ");
        scanf("%s", &(E + i)->Empname);

        printf("Enter Employee department id: ");
        scanf("%d", &(E + i)->Department_Id);
    }
}

void displayEmployeeDetails(Employee *E, int n) {
    printf("\n----Employee Details----\n");
    for (int i = 0; i < n; i++) {
        printf("\nEmployee: %d\n", i + 1);
        printf("ID: %d\n", (E + i)->id);
        printf("Name: %s\n", (E + i)->Empname);
        printf("Department ID: %d\n", (E + i)->Department_Id);
    }
}
