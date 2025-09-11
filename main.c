#include<stdio.h>

unsigned long long factorial(int n) {

    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);

}

int main() {

    int num;
    printf("enter a number : ");
    scanf("%d", &num);

    if (num < 0) {
        printf("can be for negative number");
    } else {
        printf("factorial of %d is %llu", num, factorial(num));
    }

    return 0;
}