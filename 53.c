#include <stdio.h>
#include <string.h> 

int main() {
	printf("Rajan \t BCA 1A\n");
	printf("***************\n");
    char str[100], reversed[100];
    int length, i, isPalindrome = 1; 
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; 

    length = strlen(str); 
    for (i = 0; i < length; i++) {
        reversed[i] = str[length - 1 - i]; 
    }
    reversed[length] = '\0';
    for (i = 0; i < length; i++) {
        if (str[i] != reversed[i]) {
            isPalindrome = 0; 
            break;
        }
    }

    if (isPalindrome) {
        printf("The string \"%s\" is a palindrome.\n", str);
    } else {
        printf("The string \"%s\" is not a palindrome.\n", str);
    }

    return 0;
}

