#include <stdio.h>
#include <math.h>

int isArmstrong(int num) {
    int originalNum, remainder, result = 0;

    originalNum = num;

    while (originalNum != 0) {
        remainder = originalNum % 10; 
        result += pow(remainder, 3);  
        originalNum /= 10;    
    }

    return (result == num);
}

int main() {
	printf("Rajan \t BCA 1A\n");
	printf("***************\n");
    printf("3-digit Armstrong numbers are:\n");

    for (int i = 100; i <= 999; i++) {
        if (isArmstrong(i)) {
            printf("%d ", i); 
        }
    }

    printf("\n");
    return 0;
}

