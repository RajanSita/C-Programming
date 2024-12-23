#include <stdio.h>

int main() {
	printf("Rajan \t BCA 1A\n");
	printf("***************\n");
    int num1, num2, max;
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);
    max = (num1 > num2) ? num1 : num2;
    printf("The maximum of %d and %d is: %d\n", num1, num2, max);
}
