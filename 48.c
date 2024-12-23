#include <stdio.h>

int main() {
	printf("Rajan \t BCA 1A\n");
	printf("***************\n");
    char str[100];  // Array to store the string
    int i = 0, vowels = 0;

    printf("Enter a string (Press Enter to stop):\n");

    // Read characters using getchar() in do-while loop
    do {
        str[i] = getchar();  // Read character
    } while (str[i++] != '\n');  // Stop when Enter (newline) is pressed
    
    str[i - 1] = '\0';
    
    for (int j = 0; str[j] != '\0'; j++) {
       
        if (str[j] == 'a' || str[j] == 'e' || str[j] == 'i' || str[j] == 'o' || str[j] == 'u' ||
            str[j] == 'A' || str[j] == 'E' || str[j] == 'I' || str[j] == 'O' || str[j] == 'U') {
            vowels++;
        }
    }

   
    printf("You entered: %s\n", str);
    printf("Length of the string: %d\n", i - 1); 
    printf("Number of vowels: %d\n", vowels);

    return 0;
}

