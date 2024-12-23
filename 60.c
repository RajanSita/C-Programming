#include <stdio.h>
#include <string.h>

struct Product {
    int id;
    char name[50];
    float price;
};

struct Product update(struct Product p) {
    printf("\nUpdating product details:\n");

    printf("Enter new ID: ");
    scanf("%d", &p.id);

    printf("Enter new name: ");
    getchar();  //
    fgets(p.name, sizeof(p.name), stdin);
    p.name[strcspn(p.name, "\n")] = 0; 

    printf("Enter new price: ");
    scanf("%f", &p.price);

    return p; 
}

int main() {
	printf("Rajan \t BCA 1A\n");
	printf("***************\n");
    struct Product product;

    printf("Enter product details:\n");
    printf("ID: ");
    scanf("%d", &product.id);

    printf("Name: ");
    getchar(); 
    fgets(product.name, sizeof(product.name), stdin);
    product.name[strcspn(product.name, "\n")] = 0;

    printf("Price: ");
    scanf("%f", &product.price);

    printf("\nInitial Product Details:\n");
    printf("ID: %d\n", product.id);
    printf("Name: %s\n", product.name);
    printf("Price: %.2f\n", product.price);

    product = update(product);

    printf("\nUpdated Product Details:\n");
    printf("ID: %d\n", product.id);
    printf("Name: %s\n", product.name);
    printf("Price: %.2f\n", product.price);

    return 0;
}

