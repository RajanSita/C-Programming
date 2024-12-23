#include <stdio.h>

int main() {
	printf("Rajan \t BCA 1A\n");
	printf("***************\n");
    char str[100]; 
    int length = 0; 
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 

    while (str[length] != '\0') {
        length++;
    }
    
    if (str[length - 1] == '\n') {
        str[length - 1] = '\0';
        length--; // Adjust length
    }

    // Reverse the string
    char reversed[100]; // Array to store the reversed string
    for (i = 0; i < length; i++) {
        reversed[i] = str[length - 1 - i]; // Assign characters in reverse order
    }
    reversed[length] = '\0'; // Null terminate the reversed string

    // Print the reversed string
    printf("Reversed string: %s\n", reversed);

    return 0;
}

