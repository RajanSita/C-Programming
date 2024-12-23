#include <stdio.h>

int main() {
	printf("Rajan \t BCA 1A\n");
	printf("***************\n");
    int intVar;
    float floatVar;
    printf("Enter an integer value: ");
    scanf("%d", &intVar);
    printf("Enter a float value: ");
    scanf("%f", &floatVar);
    printf("You entered integer: %d\n", intVar);
    printf("You entered float: %.2f\n", floatVar);
}
