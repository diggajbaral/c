#include <stdio.h>
#include <math.h>

int main() {

    int age;
    printf("Enter age : ");
    scanf("%d", &age);

    if (age > 18){
        printf("Can Vote\n");
    } else {
        printf("Can't Vote");
    }

    return 0;

}