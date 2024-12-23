#include <stdio.h>

int main() {
	printf("Rajan \t BCA 1A\n");
	printf("***************\n");
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    num1 = num1 + num2; 
    num2 = num1 - num2; 
    num1 = num1 - num2; 
    
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);
}
