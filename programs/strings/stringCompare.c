// WAP to compare two strings
#include<stdio.h>
int main() {
    char c1[100], c2[100];
    printf("Enter the first string : ");
    fgets(c1, sizeof(c1), stdin);

    printf("Enter the second string : ");
    fgets(c2, sizeof(c2), stdin);

    int i = 0; 
    int notEqual = 0;

    while (c1[i] != '\0' && c2[i] != '\0') {
        if (c1[i] != c2[i]) {
            notEqual = 1;
            break;
        }
        i++;
    }

    if (c1[i] != c2[i]){
        notEqual = 1;
    }

    if (notEqual == 0) {
        printf("The strings are equal");
    } else {
        printf("The strings are not equal");
    }
    return 0;
}