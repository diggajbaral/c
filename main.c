#include<stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {

    int x = 5, y = 10;
    int result = (add(x, y));

    printf("sum of %d and %d is %d\n", x, y, result);

    return 0;
}