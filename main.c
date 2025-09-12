#include <stdio.h>

int main()
{

    FILE *file;

    file = fopen("new_created_file.txt", "w");

    if (file == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }
    else
    {
        fprintf(file, "Hello World!");
    }

    fclose(file);

    return 0;
}