#include <stdio.h>

int main(){

    int number, reverse = 0, digit, orginal;

    printf("Enter number : ");
    scanf("%d", &number);

    orginal = number;

    while (number > 0) {
        digit = number % 10;
        reverse = reverse * 10 + digit;
        number = number / 10;
    }

    if (orginal == reverse) {
        printf("Palindrome");
    } else {
        printf("Not Palindrome");
    }

    return 0;

}