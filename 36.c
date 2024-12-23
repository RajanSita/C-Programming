#include <stdio.h>

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i; 
    }
    return fact;  
}

int main() {
	printf("Rajan \t BCA 1A\n");
	printf("***************\n");
    int num, result;

    printf("Enter a number to find its factorial: ");
    scanf("%d", &num);
    
    if (num < 0) {
        printf("Factorial of a negative number is not defined.\n");
        return 1; 
    }

    result = factorial(num);
    printf("Factorial of %d is %d\n", num, result);

    return 0;
}

