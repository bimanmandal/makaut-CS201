// 130. A library records 5 popular books. Search if a particular book is available.
#include<stdio.h>
int main() {
    // int book1;
    // int book2;
    // int book3;
    // int book4;
    // int book5;

    int book[5];
    // printf("Enter the book name in the form of number for book 1");
    // scanf("%d", &book[0]);
    // printf("Enter the book name in the form of number for book 2");
    // scanf("%d", &book[1]);
    // printf("Enter the book name in the form of number for book 3");
    // scanf("%d", &book[2]);
    // printf("Enter the book name in the form of number for book 4");
    // scanf("%d", &book[3]);
    // printf("Enter the book name in the form of number for book 5");
    // scanf("%d", &book[4]);

    for (int i=0; i <= 4; i++ ){
        printf("Enter the book name in the form of number for book %d", (i + 1));
        scanf("%d", &book[i]);
    }

    int avaiableBookNumber;
    printf("Enter the book that you want to search");
    scanf("%d", &avaiableBookNumber);
    int bookFound = -1;

    // if (avaiableBookNumber == book[0]) {
    //     bookFound = 0;
    // } 
    // if (avaiableBookNumber == book[1]) {
    //     bookFound = 1;
    // }
    // if (avaiableBookNumber == book[2]) {
    //     bookFound = 2;
    // }
    // if (avaiableBookNumber == book[3]) {
    //     bookFound = 3;
    // }
    // if (avaiableBookNumber == book[4]) {
    //     bookFound = 4;
    // }
    for (int i = 0; i<=4 ; i++){
        if (avaiableBookNumber == book[i]) {
            bookFound = i;
            break;
        }
    }

    if (bookFound == -1) {
        printf("Book not found");
    } else {
        printf("Book found at position %d", (bookFound + 1));
    }
    return 0;
}