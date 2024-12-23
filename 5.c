#include <stdio.h>

int main() {
	printf("Rajan \t BCA 1A\n");
	printf("***************\n");
    float subject1, subject2, subject3, subject4, subject5, sum, average;
    
    printf("Enter marks for Subject 1: ");
    scanf("%f", &subject1);

    printf("Enter marks for Subject 2: ");
    scanf("%f", &subject2);

    printf("Enter marks for Subject 3: ");
    scanf("%f", &subject3);

    printf("Enter marks for Subject 4: ");
    scanf("%f", &subject4);

    printf("Enter marks for Subject 5: ");
    scanf("%f", &subject5);

    sum = subject1 + subject2 + subject3 + subject4 + subject5;

    average = sum / 5;

    printf("The sum of the marks is: %.2f\n", sum);
    printf("The average of the marks is: %.2f\n", average);

}
