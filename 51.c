#include <stdio.h>

void copyString(char source[], char destination[]) {
    int i = 0;

    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0';
}

int main() {
	printf("Rajan \t BCA 1A\n");
	printf("***************\n");
    char source[100], destination[100];
    printf("Enter a string to copy: ");
    fgets(source, sizeof(source), stdin);

    for (int i = 0; source[i] != '\0'; i++) {
        if (source[i] == '\n') {
            source[i] = '\0';
        }
    }

    copyString(source, destination);

    printf("Original string: %s\n", source);
    printf("Copied string: %s\n", destination);

    return 0;
}

