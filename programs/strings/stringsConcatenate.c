// Write a program to concatenate two strings
#include<stdio.h>
int main() {
    char s1[100], s2[100];
    printf("Enter the first string : ");
    fgets(s1, sizeof(s1), stdin);

    printf("Enter the second string : ");
    fgets(s2, sizeof(s2), stdin);

    int i = 0;
    while(s1[i] != '\n' && s1[i] != '\0'){
        i++;
    }
    
    int j = 0;
    while (s2[j] != '\0') {
        s1[i] = s2[j];
        i++;
        j++;
    }
    s1[i] = '\0';

    printf("Concatenated String is :%s",s1);
    return 0;
}