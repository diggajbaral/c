#include<stdio.h>

int findMax(int arr[], int size) {

    int max = arr[0];

    for (int i = 1; i < size; i++) {

        if (arr[i] > max) {

            max = arr[i];

        }

    }

    return max;

}

int main() {

    int numbers[] = {5, 12, 7, 3, 25, 9};

    int length = sizeof(numbers) / sizeof(numbers[0]);

    int maxElement = findMax(numbers, length);

    printf("maxinum element in array is %d", maxElement);

    return 0;
}