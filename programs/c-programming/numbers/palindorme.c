/*
 * 121 = Palindrome
 *
 * 1331 = Palindrome
 *
 * 123 = Not a palindrome
 *
 * 3434 = Not a palindrome
 *
 * 3443 = Palindrome
 *
 * 121 % 10 = 1
 * result = 0 * 10 + 1 = 1
 * result = result * 10 + 1
 * result = 1
 *
 * 121 / 10 = 12
 *
 * 12 % 10 = 2
 * result = 1 * 10 + 2 = 12
 * result = result * 10 + 2
 *
 * 12 / 10 = 1
 *
 * 1 % 10 = 1
 * result = 12 * 10 + 1 = 121
 * result = result * 10 + 1
 *
 */
#include <stdio.h>
int main() {
    int number;
    int originalNumber;
    int palindrome = 0;
    int remainder;

    printf("Enter a number: ");
    scanf("%d", &number);

    originalNumber = number;

    while (number != 0) {
        remainder = number % 10;
        palindrome = palindrome * 10 + remainder;
        number = number / 10;
    }

    if (palindrome == originalNumber) {
        printf("%d is a palindrome", originalNumber);
    } else {
        printf("%d is not a palindrome", originalNumber);
    }

    return 0;
}