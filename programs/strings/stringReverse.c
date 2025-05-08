// WAP to reverse a string
#include<stdio.h>
#include<string.h>
int main() {
    /*
    1. Take two character array C1 and R1
    2. Enter input in one of the character array C1
    3. Get the length of the input ch array C1
    4. read the input array C1 from end and insert to the new array R1
    5. Print Result
    */

    char c1[100], r1[100];
    int len;
    printf("Enter a string : "); 
    fgets(c1, sizeof(c1), stdin); // Adrija
    len = strlen(c1) - 1; // 6
    // c1 = 0 - 5
    int i = len - 1; // 5
    int j = 0;
    while(i >= 0) {
        r1[j] = c1[i] ;
        j++;
        i--;
    }
    r1[j] = '\n';
    j ++;
    r1[j] = '\0';
    printf("Reversed String is : %s ", r1);
    return 0;
}