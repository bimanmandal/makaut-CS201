#include <stdio.h>
int main() {
    FILE *f = fopen("file.txt", "r");
    if (f == NULL) {
        printf("File could not be opened\n");
        return 1;
    }

    char line[100];
    while (fgets(line, sizeof(line), f) != NULL) {
        printf("%s", line);
    }

    fclose(f);

    return 0;
}