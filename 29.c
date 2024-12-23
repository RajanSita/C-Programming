#include <stdio.h>

int main() {
	printf("Rajan \t BCA 1A\n");
	printf("***************\n");
    int n, temp, digit, sum = 0, reverse = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    temp = n;

    while (temp != 0) {
        digit = temp % 10;  
        sum += digit;      
        temp /= 10;     
    }
    printf("Sum of the digits of %d is: %d\n", n, sum);

    temp = n;
    do {
        digit = temp % 10;      
        reverse = reverse * 10 + digit; 
        temp /= 10;             
    } while (temp != 0);      

    printf("Reverse of the number %d is: %d\n", n, reverse);

}

