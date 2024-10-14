//write a program to sort a given array in the ascending order
#include <stdio.h>

int main() {
    int arr[100], n, i, j, temp;
    printf("Enter the number of elements you want in the array (max 100): ");
    scanf("%d", &n);
    
    if (n <= 0 || n > 100) {
        printf("Invalid number of elements.\n");
        return 1;
    }
    
    for (i = 0; i < n; i++) {
        printf("Enter the value of an element at index %d: ", i);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("[");
    for (i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1) {
            printf(", "); 
        }
    }
    printf("]\n");

    return 0;
}
