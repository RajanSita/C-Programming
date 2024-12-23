#include <stdio.h>

int main() {
	printf("Rajan \t BCA 1A\n");
	printf("***************\n");
    float num1, num2, sum, difference, product, average;
    printf("Enter the first floating-point number: ");
    scanf("%f", &num1);

    printf("Enter the second floating-point number: ");
    scanf("%f", &num2);
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    average = (num1 + num2) / 2;
    printf("Sum: %.2f\n", sum);
    printf("Difference: %.2f\n", difference);
    printf("Product: %.2f\n", product);
    printf("Average: %.2f\n", average);

}
