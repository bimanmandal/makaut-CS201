// WAP to print the length of a String
#include<stdio.h>
int main() {

    char inp[100];

    printf("Enter some value of a string : ");
    // scanf("%s", inp); // it will take input till space
    // gets(inp); // deprecated
    fgets(inp, sizeof(inp), stdin); // Adrija
    // inp = 'A', 'd', 'r', 'i', 'j', 'a', '\n', '\0'

    /*
    for (int i =0; <condition>; i++) {
    }

    int i = 0;
    while(condition) {
        i++;
    }
    */

    printf("String entered is : %s\n", inp);
    printf("Printing second element : %c \n", inp[1]);

    // Adrija
    // len 0 1 2 3 4 5 
    // inp = 'A', 'd', 'r', 'i', 'j', 'a', '\n', '\0'
    int len = 0;
    while(inp[len] != '\0' && inp[len] != '\n'){
        printf("Element at position length(%d) is %c\n", len, inp[len]);
        len += 1;
    }
    printf("Length of string is %d\n", len);


    return 0;
}