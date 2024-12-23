#include <stdio.h>

int main() {
	printf("Rajan \t BCA 1A\n");
	printf("***************\n");
    int x, n;
    int result = 1; 
    int i = 1; 

    printf("Enter the base (x): ");
    scanf("%d", &x);

    printf("Enter the exponent (n): ");
    scanf("%d", &n);

    while (i <= n) {
        result *= x;
        i++;
    }
    printf("%d raised to the power %d is: %d\n", x, n, result);
}

