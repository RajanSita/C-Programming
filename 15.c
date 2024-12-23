#include <stdio.h>

int main() {
    char char1, resultChar;
    int offset;
    printf("Enter a character: ");
    scanf(" %c", &char1);

    printf("Enter an integer offset: ");
    scanf("%d", &offset);
    resultChar = char1 + offset;
    printf("Original character: %c\n", char1);
    printf("Character after applying offset %d: %c\n", offset, resultChar);
}
