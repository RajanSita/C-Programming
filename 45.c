#include <stdio.h>

int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i; 
        }
    }
    return -1; 
}

int main() {
	printf("Rajan \t BCA 1A\n");
	printf("***************\n");
    int arr[] = {12, 34, 54, 2, 3};  
    int size = sizeof(arr) / sizeof(arr[0]);  
    int key = 54;  

    int result = linearSearch(arr, size, key);

    if (result != -1) {
        printf("Element %d found at index %d\n", key, result);
    } else {
        printf("Element %d not found in the array\n", key);
    }

    return 0;
}

