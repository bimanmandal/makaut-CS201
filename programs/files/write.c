#include <stdio.h>
#include <string.h>

int main() {

    // w - write overwrite
    // a - append
    // r - read
    // w+ - write + read
    // a+ - append + read
    // r+ - read + write
    FILE *f = fopen("file.txt", "wb");
    if (f == NULL) {
        printf("Error opening file\n");
        return 1;
    }
    int age = 19;

    fprintf(f, "Hello World\n");
    fprintf(f, "My Name is Adrija. My age is %d\n",age);

    fputs("Hello World using fputs\n", f);

    char str[] = "Hello World using Binary";
    fwrite(str, sizeof(char), strlen(str), f);

    fclose(f);
    return 0;
}
