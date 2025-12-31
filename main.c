#include <stdio.h>
#include <math.h>

int main() {

    int age;
    printf("Enter age : ");
    scanf("%d", &age);

    age >= 18 ? printf("Can Drive") : printf("Can't Drive");

    return 0;

}