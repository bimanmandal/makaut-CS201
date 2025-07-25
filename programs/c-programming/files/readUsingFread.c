#include <stdio.h>
int main() {
    FILE *f = fopen("file.txt", "r");
    if (f == NULL) {
        printf("File not found\n");
        return 1;
    }
    char buffer[100];
    size_t bytes_read = fread(buffer, sizeof(char), sizeof(buffer) - 1, f);
    buffer[bytes_read] = '\0';
    printf("%s\n", buffer);
    fclose(f);
    return 0;
}