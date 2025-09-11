#include<stdio.h>

int main() {

    int guess, code = 7;

    while (1) {

        printf("enter the code : ");
        scanf("%d", &guess);

        if (guess == code) {

            while (1) {
                printf("*");
            }
            
        } else {
            printf("try again\n");
        }

    }

    return 0;
}