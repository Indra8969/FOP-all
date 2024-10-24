#include <stdio.h>

void printSumOfElems(int *p, int len){
	int sum = 0;
	len--;
	while(len >= 0){
		sum += *(p + len);	
		len--;
	}
	printf("Sum of all array elements is : %d", sum);
}

int main(){
    int n, arr[100], i;
    printf("How many elements you want into the array :  ");
    scanf("%d", &n);
    for(i = 0; i<n; i++){
        printf("Enter element at %d : ", i+1);
        scanf("%d", &arr[i]);
    }
    printSumOfElems(&arr[0], n);
    return 0;
}
