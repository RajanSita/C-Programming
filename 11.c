#include <stdio.h>

int main() {
	printf("Rajan \t BCA 1A\n");
	printf("***************\n");
    int hours, minutes, convertedSeconds, convertedMinutes;
    printf("Enter time in hours: ");
    scanf("%d", &hours);
    convertedSeconds = hours * 3600;
    printf("%d hours is equal to %d seconds.\n", hours, convertedSeconds);
    convertedMinutes = hours * 60; 
    printf("%d hours is equal to %d minutes.\n", hours, convertedMinutes);
    printf("Enter time in minutes: ");
    scanf("%d", &minutes);
    convertedSeconds = minutes * 60; 
    printf("%d minutes is equal to %d seconds.\n", minutes, convertedSeconds);
}
