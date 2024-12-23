#include <stdio.h>

int main() {
	printf("Rajan \t BCA 1A\n");
	printf("***************\n");
    int num1, num2, num3;
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("Enter the third number: ");
    scanf("%d", &num3);
    if (num1 > num2 && num1 > num3) {
        printf("The maximum of %d, %d, and %d is: %d\n", num1, num2, num3, num1);
    } else if (num2 > num1 && num2 > num3) {
        printf("The maximum of %d, %d, and %d is: %d\n", num1, num2, num3, num2);
    } else {
        printf("The maximum of %d, %d, and %d is: %d\n", num1, num2, num3, num3);
    }

}

