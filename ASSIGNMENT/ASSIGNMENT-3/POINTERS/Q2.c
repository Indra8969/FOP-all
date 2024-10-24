//Q2. WAP using pointers to find minimun and maximum element of an array and display it along with the address at which it is located.

#include <stdio.h>
#include <math.h>

void findMinMax(int *p, int n){
	int i, min = *p, max = *p;
	int *maxPtr = p, *minPtr = p;
	for(i = 0; i < n; i++){
		if(*(p+i) > max){
			max = *(p+i);
			maxPtr = p+i;
		}
		if(*(p+i) < min){
			min = *(p+i);	
			minPtr = p+i;
		}
	}
	printf("\nMin number is %d and the address is %x", min, minPtr);
	printf("\nMax number is %d and the address is %x", max, maxPtr);
	printf("\nDifference between two addresses is : %d Bytes", abs(maxPtr - minPtr));
}

int main(){
    int n, arr[100], i;
    printf("How many elements you want into the array :  ");
    scanf("%d", &n);
    for(i = 0; i<n; i++){
        printf("Enter element at %d : ", i+1);
        scanf("%d", &arr[i]);
    }
    findMinMax(&arr[0], n);
    return 0;
}
