#include <stdio.h>

int main() {
	printf("Rajan \t BCA 1A\n");
	printf("***************\n");
    int units;
    float charges;

    printf("Enter the number of units consumed: ");
    scanf("%d", &units);
    if (units >= 0 && units <= 200) {
        charges = units * 0.50;
    } else if (units >= 201 && units <= 400) {
        charges = 100 + (units - 200) * 0.65;
    } else if (units >= 401 && units <= 600) {
        charges = 230 + (units - 400) * 0.80;
    } else if (units >= 601) {
        charges = 390 + (units - 600) * 1.00;
    } else {
        printf("Invalid unit consumption entered!\n");
      
    }

    printf("Total electricity charges: Rs. %.2f\n", charges);
}

