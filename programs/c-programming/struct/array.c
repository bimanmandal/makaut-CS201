#include <stdio.h>

struct Book {
    char title[50];
    int price;
};

int main() {
    // struct Book book1;
    // struct Book book2;
    struct Book books[2];

    for (int i = 0; i < 2; i++) {
        printf("Enter book title[%d]: ", i);
        scanf("%s", books[i].title);

        printf("Enter book price[%d]: ", i);
        scanf("%d", &books[i].price);
    }

    printf("Book Details: \n");
    for (int i = 0; i < 2; i++) {
        printf("Book title[%d]: %s and Price : ₹%d\n", i, books[i].title, books[i].price);
    }
}
