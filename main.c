#include <stdio.h>

int main() {

    int n, search, first, middle, last;

    printf("Enter number of books : ");
    scanf("%d", &n);

    int books[n];

    printf("Enter %d sorted book IDs: \n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &books[i]);
    }

    printf("Enter book ID to search: ");
    scanf("%d", &search);

    first = 0;
    last = n - 1;

    while (first <= last) {
        middle = (first + last) / 2;

        if (books[middle] == search) {
            printf("Book found at position %d/n", middle + 1);
            return 0;
        } else if (books[middle] < search) {
            first = middle + 1;
        } else {
            last = middle -1;
        }

    }

    printf("Books not found.\n");

    return 0;

}