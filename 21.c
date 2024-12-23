#include <stdio.h>

int main() {
	printf("Rajan \t BCA 1A\n");
	printf("***************\n");
    int marks;
    printf("Enter the average marks: ");
    scanf("%d", &marks);
    if (marks >= 80 && marks <= 100) {
        printf("Grade: Honours\n");
    } else if (marks >= 60 && marks <= 79) {
        printf("Grade: First Division\n");
    } else if (marks >= 50 && marks <= 59) {
        printf("Grade: Second Division\n");
    } else if (marks >= 40 && marks <= 49) {
        printf("Grade: Third Division\n");
    } else if (marks >= 0 && marks <= 39) {
        printf("Grade: Fail\n");
    } else {
        printf("Invalid marks entered!\n");
    }

}

