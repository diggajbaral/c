#include<stdio.h>

int main() {

    int number[5];
    int sum = 0;

    printf("Enter 5 integer : \n");
    for (int i = 0; i < 5; i++) {
        printf("enter number %d: ", i + 1);
        scanf("%d", &number[i]);
    }

    for (int i = 0; i < 5; i++) {
        sum += number[i];
    }

    printf("sum of array element is : %d\n", sum);

    return 0;
}