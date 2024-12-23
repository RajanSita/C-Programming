#include <stdio.h>

#define MAX 100

struct Employee {
    int id;
    char name[100];
    float salary;
};

int main() {
	printf("Rajan \t BCA 1A\n");
	printf("***************\n");
    struct Employee employees[MAX];
    int n, i;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details of employee %d:\n", i + 1);

        printf("ID: ");
        scanf("%d", &employees[i].id);

        printf("Name: ");
        getchar();  
        fgets(employees[i].name, sizeof(employees[i].name), stdin);

        printf("Salary: ");
        scanf("%f", &employees[i].salary);
    }

    printf("\n--- Employee Salary Records ---\n");
    for (i = 0; i < n; i++) {
        printf("\nEmployee %d\n", i + 1);
        printf("ID: %d\n", employees[i].id);
        printf("Name: %s", employees[i].name); 
        printf("Salary: %.2f\n", employees[i].salary);
    }

    return 0;
}

