#include <stdio.h>

int stringLength(char *str) {
    int length = 0;

    
    while (*str != '\0') {
        length++;  
        str++;
    }

    return length;
}

int main() {
	printf("Rajan \t BCA 1A\n");
	printf("***************\n");
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int len = stringLength(str);
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    printf("The length of the string is: %d\n", len);

    return 0;
}

