/*
 * 145 = 1! + 4! + 5!
 *
 *
 *
 */


#include <stdio.h>
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int number;
    int originalNumber;
    int km = 0;
    int remainder;

    printf("Enter a number: ");
    scanf("%d", &number);

    originalNumber = number;

    while (number != 0) {
        remainder = number % 10;
        km = km + factorial(remainder);
        number = number / 10;
    }

    if (km == originalNumber) {
        printf("%d is a Krishnamurthy number", originalNumber);
    } else {
        printf("%d is not a Krishnamurthy Number", originalNumber)
    }

    return 0;
}