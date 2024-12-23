#include <stdio.h>


void findMaxMin(int array[], int size, int *max, int *min);

int main() {
	printf("Rajan \t BCA 1A\n");
	printf("***************\n");
    int n; 
    int max, min;
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
    }

    findMaxMin(array, n, &max, &min);
    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d\n", min);

    return 0;
}
void findMaxMin(int array[], int size, int *max, int *min) {
    *max = array[0]; 
    *min = array[0];

    for (int i = 1; i < size; i++) {
        if (array[i] > *max) {
            *max = array[i];
        }
        if (array[i] < *min) {
            *min = array[i];
        }
    }
}

