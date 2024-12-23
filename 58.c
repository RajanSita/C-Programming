#include <stdio.h>

#define MAX 100

struct Book {
    char title[100];
    char author[100];
    int publicationYear;
    float price;
};

int main() {
	printf("Rajan \t BCA 1A\n");
	printf("***************\n");
    struct Book books[MAX];
    int n, i;

    printf("Enter the number of books: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details of book %d:\n", i + 1);

        printf("Title: ");
        getchar();
        fgets(books[i].title, sizeof(books[i].title), stdin);

        printf("Author: ");
        fgets(books[i].author, sizeof(books[i].author), stdin);

        printf("Publication Year: ");
        scanf("%d", &books[i].publicationYear);

        printf("Price: ");
        scanf("%f", &books[i].price);
    }

    printf("\n--- Book Records ---\n");
    for (i = 0; i < n; i++) {
        printf("\nBook %d\n", i + 1);
        printf("Title: %s", books[i].title);
        printf("Author: %s", books[i].author);
        printf("Publication Year: %d\n", books[i].publicationYear);
        printf("Price: %.2f\n", books[i].price);
    }

    return 0;
}

