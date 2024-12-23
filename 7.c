#include <stdio.h>
#define RATE_OF_INTEREST 5.0

int main() {
	printf("Rajan \t BCA 1A\n");
	printf("***************\n");
    float principal, time, simpleInterest;
    printf("Enter the principal amount: ");
    scanf("%f", &principal);
    printf("Enter the time (in years): ");
    scanf("%f", &time);
    simpleInterest = (principal * RATE_OF_INTEREST * time) / 100;
    printf("Principal amount: %.2f\n", principal);
    printf("Time period: %.2f years\n", time);
    printf("Rate of interest: %.2f%%\n", RATE_OF_INTEREST);
    printf("Simple Interest: %.2f\n", simpleInterest);
}
