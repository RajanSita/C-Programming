#include <stdio.h>

int main() {
    printf("Rajan \t BCA 1A\n");
	printf("***************\n");
    int n, sum = 0;

    printf("Enter the number of odd natural numbers to sum: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1; 
    }

    for (int i = 0; i < n; i++) {
        sum += (2 * i + 1); 
    }

  printf("Sum of the first %d odd natural numbers is: %d\n", n, sum);

}

