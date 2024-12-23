#include <stdio.h>

int main() {
	printf("Rajan \t BCA 1A\n");
	printf("***************\n");
    int num = 25;
    char letter = 'X';
    float decimal = 9.75;

    int *ptrInt = &num;
    char *ptrChar = &letter;
    float *ptrFloat = &decimal;

    printf("Value of int variable: %d\n", *ptrInt);
    printf("Value of char variable: %c\n", *ptrChar);
    printf("Value of float variable: %.2f\n", *ptrFloat);

    printf("Address of int variable: %p\n", (void*)ptrInt);
    printf("Address of char variable: %p\n", (void*)ptrChar);
    printf("Address of float variable: %p\n", (void*)ptrFloat);

    return 0;
}

