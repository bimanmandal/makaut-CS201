#include <stdio.h>

int main() {
    // Scalar (single) variables
    char aChar;
    int anInt;
    float aFloat;
    double aDouble;
    long double aLongDouble;
    short aShort;
    long aLong;
    long long aLongLong;
    unsigned int anUnsignedInt;
    unsigned char anUnsignedChar;
    unsigned long anUnsignedLong;

    // Arrays
    char charArray[10];
    int intArray[10];
    float floatArray[10];
    double doubleArray[10];
    long double longDoubleArray[10];

    // Print sizes of scalar types
    printf("Size of char               : %lu bytes\n", sizeof(aChar));
    printf("Size of int                : %lu bytes\n", sizeof(anInt));
    printf("Size of float              : %lu bytes\n", sizeof(aFloat));
    printf("Size of double             : %lu bytes\n", sizeof(aDouble));
    printf("Size of long double        : %lu bytes\n", sizeof(aLongDouble));
    printf("Size of short              : %lu bytes\n", sizeof(aShort));
    printf("Size of long               : %lu bytes\n", sizeof(aLong));
    printf("Size of long long          : %lu bytes\n", sizeof(aLongLong));
    printf("Size of unsigned int       : %lu bytes\n", sizeof(anUnsignedInt));
    printf("Size of unsigned char      : %lu bytes\n", sizeof(anUnsignedChar));
    printf("Size of unsigned long      : %lu bytes\n", sizeof(anUnsignedLong));

    printf("\n");

    // Print sizes of arrays
    printf("Size of char array[10]     : %lu bytes\n", sizeof(charArray));
    printf("Size of int array[10]      : %lu bytes\n", sizeof(intArray));
    printf("Size of float array[10]    : %lu bytes\n", sizeof(floatArray));
    printf("Size of double array[10]   : %lu bytes\n", sizeof(doubleArray));
    printf("Size of long double[10]    : %lu bytes\n", sizeof(longDoubleArray));

    return 0;
}