#include <stdio.h>
#include <string.h> 

int main() {
	printf("Rajan \t BCA 1A\n");
	printf("***************\n");
    char str1[100], str2[100], str3[100];
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; 

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0'; 

    strcpy(str3, str1);
    printf("Copied string (str3): %s\n", str3);

    strcat(str3, str2);
    printf("Concatenated string (str3): %s\n", str3);

    int comparison = strcmp(str1, str2);
    if (comparison == 0) {
        printf("The strings are equal.\n");
    } else if (comparison < 0) {
        printf("str1 is less than str2.\n");
    } else {
        printf("str1 is greater than str2.\n");
    }

    printf("Length of first string (str1): %lu\n", strlen(str1));
    printf("Length of second string (str2): %lu\n", strlen(str2));

    return 0;
}

