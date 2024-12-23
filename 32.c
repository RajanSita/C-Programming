#include <stdio.h>

int main() {
	printf("Rajan \t BCA 1A\n");
	printf("***************\n");
    int n;
    double sum = 0.0;

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        sum += 1.0 / i; 
    }
    printf("The sum of the series 1 + 1/2 + ... + 1/%d is: %.6f\n", n, sum);

}

