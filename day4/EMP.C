#include <stdio.h>

struct Employee_t {
    int id;
    char name[255];
    float salary;
    char department[50];
};

typedef struct Employee_t Employee;

void readEmployees(Employee emp[], int n);
void displayEmployees(Employee emp[], int n);
Employee findHighestSalary(Employee emp[], int n);

int main() {
    int employeeCount;
    printf("Enter the number of employees: ");
    scanf("%d", &employeeCount);

    Employee employees[1000]; // Array to hold employee records
    readEmployees(employees, employeeCount);
    displayEmployees(employees, employeeCount);
    
    Employee highestSalariedEmployee = findHighestSalary(employees, employeeCount);
    printf("Employee with the highest salary:\n");
    printf("ID: %d\n", highestSalariedEmployee.id);
    printf("Name: %s\n", highestSalariedEmployee.name);
    printf("Salary: %.2f\n", highestSalariedEmployee.salary);
    printf("Department: %s\n", highestSalariedEmployee.department);

    return 0;
}

void readEmployees(Employee emp[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter details for employee %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &emp[i].id);
        printf("Name: ");
        scanf(" %[^\n]", emp[i].name); // Read string with spaces
        printf("Salary: ");
        scanf("%f", &emp[i].salary);
        printf("Department: ");
        scanf(" %[^\n]", emp[i].department); // Read string with spaces
    }
}

void displayEmployees(Employee emp[], int n) {
    printf("\nEmployee Details:\n");
    for (int i = 0; i < n; i++) {
        printf("ID: %d\n", emp[i].id);
        printf("Name: %s\n", emp[i].name);
        printf("Salary: %.2f\n", emp[i].salary);
        printf("Department: %s\n", emp[i].department);
        printf("\n");
    }
}

Employee findHighestSalary(Employee emp[], int n) {
    Employee highest = emp[0]; 
    
    for (int i = 1; i < n; i++) {
        if (emp[i].salary > highest.salary) {
            highest = emp[i]; 
        }
    }
    return highest;
}
