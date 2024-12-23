#include <stdio.h>

void staticDemo() {
    static int count = 0; 
    count++; 
    printf("Static count = %d\n", count);  
}

int main() {
	printf("Rajan \t BCA 1A\n");
	printf("***************\n");
    for (int i = 0; i < 5; i++) {
        staticDemo();
    }

    return 0;
}

