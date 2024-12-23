#include <stdio.h>

int main() {
	printf("Rajan \t BCA 1A\n");
	printf("***************\n");
    int n; 
    float sum = 0.0, average; 
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Please enter a valid positive integer for the number of elements.\n");
        return 1;
    }

    int array[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
        sum += array[i];
    }
    average = sum / n;
    printf("Sum of the elements: %.2f\n", sum);
    printf("Average of the elements: %.2f\n", average);

    return 0;
}

