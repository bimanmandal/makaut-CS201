#include <stdio.h>
int main() {
    FILE *f = fopen("file.txt", "r");
    if (f == NULL) {
        printf("File could not be opened\n");
        return 1;
    }

    char name[100];
    int age;

    while (fscanf(f, "My Name is %s My age is %d\n", name, &age) != EOF) {
        printf("Name: %s, age: %d\n", name, age);
    }

    fclose(f);

    return 0;
}