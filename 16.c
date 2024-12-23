#include <stdio.h>
int main(){
printf("Rajan \t BCA 1A\n");
printf("***************\n");
int item_no, quantity;
float price;
printf("Enter the item number: ");
scanf("%d", &item_no);
printf("Enter the quantity: ");
scanf("%d", &quantity);
printf("Enter the price (in rupees): ");
scanf("%f", &price);
float total_bill = quantity * price;
printf("\nTotal Bill is %.2f\n", total_bill);
float discount = ((total_bill)/100)*10;
float net_bill = total_bill - discount;
printf("Net Bill is %.2f", net_bill);
return 0;
}
