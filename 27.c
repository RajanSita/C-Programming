#include <stdio.h>

int main() {
	printf("Rajan \t BCA 1A\n");
	printf("***************\n");
    int n, i = 1, j;

    printf("Enter the value of n (for generating tables up to n): ");
    scanf("%d", &n);
    
    do {
        j = 1;
      
        do {
            printf("%d x %d = %d\n", i, j, i * j);
            j++;
        } while (j <= 10); 
        
        printf("\n"); 
        i++;
    } while (i <= n); 

}

