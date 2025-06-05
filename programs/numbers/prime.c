/*
 * 2,3,5,7,11,13,17,19,23,29,...
 * 2, 3
 * 4 : 2, 3
 *
 *
 * 11: 2, 3, 4, 5, 6, 7, 8, 9, 10
 *
 * 15: 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14
 *
 * 15:
 *      3 x 5
 *
 *
 * 18: 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17
 *      2 x 9
 *      3 x 6
 *      6 x 3
 *      9 x 2
 *
 */
#include <stdio.h>

int main() {

    int number;
    int isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 2) {
        printf("Not a prime number");
        return 0;
    }

    for (int i = 2; i <= number / 2; i++) {
        if (number % i == 0) {
            isPrime = 0;
            break;
        }
    }

    if (isPrime == 1) {
        printf("%d is a prime number", number);
    } else {
        printf("%d is not a prime number", number);
    }

    return 0;
}
