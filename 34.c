#include <stdio.h>

float calculateSimpleInterest(float principal, float rate, float time) {
    float interest;
    interest = (principal * rate * time) / 100; 
    return interest;
}

int main() {
	printf("Rajan \t BCA 1A\n");
	printf("***************\n");
    float principal, rate, time, interest;

    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the rate of interest: ");
    scanf("%f", &rate);

    printf("Enter the time period (in years): ");
    scanf("%f", &time);

    interest = calculateSimpleInterest(principal, rate, time);

    printf("Simple Interest = %.2f\n", interest);

    return 0;
}

