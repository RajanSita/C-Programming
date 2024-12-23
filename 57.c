#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Rajan \t BCA 1A\n");
    printf("***************\n");

    int n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));  
    if (arr == NULL) {  
        printf("Memory allocation failed\n");
        return 1;
    }
    for (i = 0; i < n; i++) {
        printf("Enter value for element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\nThe values entered are:\n");
    for (i = 0; i < n; i++) {
        printf("Element %d: %d\n", i + 1, arr[i]);
    }
    free(arr);

    return 0;
}

