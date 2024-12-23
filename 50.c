#include <stdio.h>
int compareStrings(char str1[], char str2[]) {
    int i = 0;

    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return 0; 
        }
        i++;
    }
    return (str1[i] == str2[i]) ? 1 : 0;
}

void concatenateStrings(char str1[], char str2[], char result[]) {
    int i = 0, j = 0;

    while (str1[i] != '\0') {
        result[j++] = str1[i++];
    }
    while (str2[i] != '\0') {
        result[j++] = str2[i++];
    }
    result[j] = '\0'; 
}

int main() {
	printf("Rajan \t BCA 1A\n");
	printf("***************\n");
    char str1[100], str2[100], result[200];

    // Input for first string
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    // Input for second string
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove newline characters if present
    for (int i = 0; str1[i] != '\0'; i++) {
        if (str1[i] == '\n') {
            str1[i] = '\0';
        }
    }
    for (int i = 0; str2[i] != '\0'; i++) {
        if (str2[i] == '\n') {
            str2[i] = '\0';
        }
    }

    // Compare the strings
    if (compareStrings(str1, str2)) {
        printf("The strings are equal.\n");
    } else {
        printf("The strings are not equal.\n");
    }

    // Concatenate the strings
    concatenateStrings(str1, str2, result);
    printf("Concatenated string: %s\n", result);

    return 0;
}

