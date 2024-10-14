//Given the two 1-D arrays A and B, which are sorted in asending order. Write a program to merge them into a single sorted array C. that contains every item from arrays A and B, in ascending order.
#include <stdio.h>

int main() {
    int a[10] = {3,3,4,5,5,5,6,7,9,10};
    int b[10] = {6,7,8,9,10,11,22,33,44,55};
    int merged[20], i = 0, ai = 0, bi = 0;

    while (ai < 10 && bi < 10) {
        if (a[ai] <= b[bi]) {
            merged[i++] = a[ai++];
        } else {
            merged[i++] = b[bi++];
        }
    }

    while (ai < 10) {
        merged[i++] = a[ai++];
    }
    while (bi < 10) {
        merged[i++] = b[bi++];
    }
    printf("[");
    for (int j = 0; j < i; j++) {
        printf("%d", merged[j]);
        if (j < i - 1) {
            printf(",");
        }
    }
    printf("]\n");

    return 0;
}
