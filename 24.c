#include <stdio.h>
#include <math.h>  

int main() {
	printf("Rajan \t BCA 1A\n");
	printf("***************\n");
    float a, b, c, discriminant, root1, root2, realPart, imaginaryPart;

    printf("Enter the coefficient a (for x^2): ");
    scanf("%f", &a);
    printf("Enter the coefficient b (for x): ");
    scanf("%f", &b);
    printf("Enter the constant c: ");
    scanf("%f", &c);
    discriminant = b * b - 4 * a * c;
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("The roots are real and distinct.\n");
        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);
    } else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("The roots are real and equal.\n");
        printf("Root 1 = Root 2 = %.2f\n", root1);
    } else {
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("The roots are complex and imaginary.\n");
        printf("Root 1 = %.2f + %.2fi\n", realPart, imaginaryPart);
        printf("Root 2 = %.2f - %.2fi\n", realPart, imaginaryPart);
    }

    return 0;
}

