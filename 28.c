#include <stdio.h>

int main() {
	printf("Rajan \t BCA 1A\n");
	printf("***************\n");
    int i, j, rows;
    printf("Enter the number of rows for the patterns: ");
    scanf("%d", &rows);

    //Triangle of '*'
    printf("\nTriangle of '*':\n");
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n"); 
    }

    //Triangle of digits
    printf("\nTriangle of digits:\n");
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

}

