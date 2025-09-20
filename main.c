#include <stdio.h>

int main() {
    FILE *file;

    file = fopen("docs.txt", "w");
    if (file == NULL) {
        printf("Error creating file.\n");
        return 1;
    }

    fprintf(file, "https://github.com/diggajbaral\n");
    fprintf(file, "I have total 8 repo at GitHub.\n");

    fclose(file);

    file = fopen("docs.txt", "r");
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    printf("Content of the file :\n");
    char line[256];
    int line_count = 0;
    while (fgets(line, sizeof(line), file)) {
        printf("%s", line);
        line_count++;
    }

    if (line_count == 0) {
        printf("[No lines read from file]\n");
    }

    fclose(file);
    return 0;
}
