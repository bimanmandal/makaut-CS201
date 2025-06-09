#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp = fopen("file.txt", "r");
    if (fp == NULL) {
        printf("File could not be opened\n");
        return 1;
    }

    int ch;
    char buffer[5];

    while ((ch = getw(fp)) != EOF) {
        printf("Character Read : ");
        memcpy(buffer, &ch, sizeof(int));
        buffer[sizeof(int)] = '\0';
        printf("%s", buffer);
        printf("\n");
    };

    fclose(fp);

    return 0;
}
