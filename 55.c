#include <stdio.h>

int main() {
	printf("Rajan \t BCA 1A\n");
	printf("***************\n");
    int n, i, sum = 0;
    int arr[100];   
    int *ptr;    

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    ptr = arr;   
    for (i = 0; i < n; i++) {
        sum += *ptr;  
        ptr++;    
    }

    printf("The sum of array elements is: %d\n", sum);

    return 0;
}

