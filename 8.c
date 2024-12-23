#include <stdio.h>

int main() {
	printf("Rajan \t BCA 1A\n");
	printf("***************\n");
    float celsius, fahrenheit, convertedToFahrenheit, convertedToCelsius;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    convertedToFahrenheit = (celsius * 9 / 5) + 32;
    printf("%.2f Celsius is equal to %.2f Fahrenheit\n", celsius, convertedToFahrenheit);
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    convertedToCelsius = (fahrenheit - 32) * 5 / 9;
    printf("%.2f Fahrenheit is equal to %.2f Celsius\n", fahrenheit, convertedToCelsius);
}
