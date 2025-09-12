#include<stdio.h>

int square(int num);

int main() {
    
    int number, result;

    printf("enter a number : ");
    scanf("%d", &number);

    result = square(number);

    printf("square of %d is %d", number, result);

    return 0;
}

int square(int num) {
    return num * num;
}