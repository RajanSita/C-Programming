#include <stdio.h>

int main() {
	printf("Rajan \t BCA 1A\n");
	printf("***************\n");
    int intVar = 10;
    float floatVar = 5.75;
    const int INT_CONSTANT = 100;
    const float FLOAT_CONSTANT = 3.1415;
    printf("Value of int variable: %d\n", intVar);
    printf("Value of float variable: %.2f\n", floatVar);
    printf("Value of int constant: %d\n", INT_CONSTANT);
    printf("Value of float constant: %.4f\n", FLOAT_CONSTANT);
    intVar = 20;
    floatVar = 9.99;
    printf("Updated value of int variable: %d\n", intVar);
    printf("Updated value of float variable: %.2f\n", floatVar);
}
