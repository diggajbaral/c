#include <stdio.h>

int countVowels(const char *str)
{

    int count = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {

        char ch = str[i];

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {

            count++;

        }
    }

    return count;

}

int main()
{

    char input[100];

    printf("Enter a string : ");
    fgets(input, sizeof(input), stdin);

    int vowelCount = countVowels(input);
    printf("Number of vowels : %d\n", vowelCount);

    return 0;
}