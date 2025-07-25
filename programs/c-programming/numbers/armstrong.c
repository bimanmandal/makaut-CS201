/*
 * 153 = 1^3 + 5^3 + 3^3
 *
 *
 * 153 % 10 = 3
 *
 * 3^3 = 27
 *
 * 153 / 10 = 15
 *
 * 15 % 10 = 5
 * 5^3 = 125
 *
 * 15 / 10 = 1
 *
 * 1 % 10 = 1
 *
 * 1 / 10 = 0
 */


#include<stdio.h>
int main() {
    int number;
    int originalNumber;
    int armstrongNumber = 0;
    int remainder;

    printf("Enter a number: ");
    scanf("%d", &number);

    originalNumber = number;

    while (number != 0) {
        remainder = number % 10;
        armstrongNumber = armstrongNumber + (remainder * remainder * remainder);
        number = number / 10;
    }

    if (armstrongNumber == originalNumber) {
        printf("%d is armstrong", originalNumber);
    } else {
        printf("%d is not armstrong", originalNumber);
    }

    return 0;
}

