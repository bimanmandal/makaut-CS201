/*
 * Factorial: 5! = 5 * 4 * 3 * 2 * 1
 * Factorial: 5! = 1 * 2 * 3 * 4 * 5
 *
 */
#include <stdio.h>

// Factorial: 5! = 5 * 4 * 3 * 2 * 1
int factorial(int n) {
    if (n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}



/*
int factorial(int n) {
    int result = 1;
    // Factorial: 5! = 5 * 4 * 3 * 2 * 1
    for (int i = n; i >= 1; i--) {
        result = result * i;
    }
    return result;
}
*/

int main() {
    int fact;
    int result = 1;
    printf("Enter a number: ");
    scanf("%d", &fact);

    /*
    // Factorial: 5! = 1 * 2 * 3 * 4 * 5
    for (int i = 1; i <= fact; i++) {
        result = result * i;
    }
    */
    result = factorial(fact);
    printf("The factorial of %d is %d\n", fact, result);
    return 0;
}