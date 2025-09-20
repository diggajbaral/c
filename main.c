#include <stdio.h>

int main() {

    FILE *file;

    file = fopen("docs.txt", "w");

    if (file == NULL) {

        printf("Error creating file.\n");

        return 1;
    }

    fprintf(file, "I have total 8 repo at GitHub.\n");

    fclose(file);
    return 0;
}