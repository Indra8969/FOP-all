//Q1. WAP using pointer to read array of integers and print its elements in reverse order.
#include <stdio.h>

void printfArrRev(int *arr, int len){
    len--;
    printf("\nArray in reverse order : {");
    while(len >= 0){
        printf("%d", *(arr+len));
        if(len) printf(", ");
        len--;
    }
    printf("}");
}

int main(){
    int n, arr[100], i;
    printf("How many elements you want into the array :  ");
    scanf("%d", &n);
    for(i = 0; i<n; i++){
        printf("Enter element at %d : ", i+1);
        scanf("%d", &arr[i]);
    }
    printfArrRev(&arr[0], n);
    return 0;
}
