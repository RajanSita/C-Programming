#include <stdio.h>

int main() {
	printf("Rajan \t BCA 1A\n");
	printf("***************\n");
    int n, m, i;
    printf("Enter the value of n (for natural numbers): ");
    scanf("%d", &n);

    printf("Enter the value of m (for reverse counting): ");
    scanf("%d", &m);
    printf("Natural numbers from 1 to %d:\n", n);
    i = 1;
    while (i <= n) {
        printf("%d ", i);
        i++;
    }
    printf("\n");
    printf("Reverse counting from %d to 1:\n", m);
    while (m >= 1) {
        printf("%d ", m);
        m--;
    }
    printf("\n");
}

