#include <stdio.h>

int main() {
	printf("Rajan \t BCA 1A\n");
	printf("***************\n");
    char char1, char2;
    int ascii1, ascii2;

    printf("Enter the first character: ");
    scanf(" %c", &char1);

    printf("Enter the second character: ");
    scanf(" %c", &char2);

    ascii1 = (int)char1;
    ascii2 = (int)char2;

    printf("ASCII value of '%c' is: %d\n", char1, ascii1);
    printf("ASCII value of '%c' is: %d\n", char2, ascii2);

    printf("Sum of ASCII values: %d\n", ascii1 + ascii2);
    printf("Difference of ASCII values: %d\n", ascii1 - ascii2);
    printf("Product of ASCII values: %d\n", ascii1 * ascii2);
    printf("Division of ASCII values (quotient): %d\n", ascii1 / ascii2);
}
