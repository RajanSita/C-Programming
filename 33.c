#include <stdio.h>

void printline(int n, char ch) {
	
    for (int i = 0; i < n; i++) {
        printf("%c", ch); 
    }
    printf("\n");  
}

int main() {
	printf("Rajan \t BCA 1A\n");
	printf("***************\n");
    int n;
    char ch;

    printf("Enter the number of times to print the character: ");
    scanf("%d", &n);

    printf("Enter the character to print: ");
    scanf(" %c", &ch);  
    printline(n, ch);

}

