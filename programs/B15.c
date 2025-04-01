#include <stdio.h>

int main() {
    int bati;
    int glass;
    int ghoti;
    printf("Enter the first number : ");
    scanf("%d", &bati);
    printf("Enter the second number : ");
    scanf("%d", &glass);
    ghoti = bati;
    bati = glass;
    glass = ghoti;
    printf("The numbers after swapping is %d and %d", bati, glass);
    return 0;
}