#include <stdio.h>

int main() {
	printf("Rajan \t BCA 1A\n");
	printf("***************\n");
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);
    if (num1 > num2) {
        printf("The maximum of %d and %d is: %d\n", num1, num2, num1);
    } else if (num1 < num2) {
        printf("The maximum of %d and %d is: %d\n", num1, num2, num2);
    } else {
        printf("Both numbers are equal: %d\n", num1);
    }

}
