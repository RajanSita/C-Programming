#include <stdio.h>

int isPalindrome(int num) {
    int reversedNum = 0, originalNum = num, remainder;

    while (num != 0) {
        remainder = num % 10;                
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;                          
    }

    return originalNum == reversedNum;
}

int main() {
	printf("Rajan \t BCA 1A\n");
	printf("***************\n");
    int num;

    printf("Enter a 5-digit number: ");
    scanf("%d", &num);

    if (num < 10000 || num > 99999) {
        printf("Please enter a valid 5-digit number.\n");
        return 1;
    }

    if (isPalindrome(num)) {
        printf("%d is a palindrome.\n", num);
    } else {
        printf("%d is not a palindrome.\n", num);
    }

    return 0;
}

