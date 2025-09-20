#include <stdio.h>

int main() {

    FILE *file;

    file = fopen("docs.txt", "w");

    if (file == NULL) {

        printf("Error creating file.\n");

        return 0;
    }

    fclose(file);
    return 0;
}