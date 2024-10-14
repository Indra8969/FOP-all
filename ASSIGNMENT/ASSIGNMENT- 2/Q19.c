//Q19. write a recursive function that find a sum of N numbers.
#include <stdio.h>

int findsum(int nums[], int sum, int i, int len){
	if(i < len) return findsum(nums, sum + nums[i], i + 1, len);	
	return sum;
}

int main(){
	int nums[100], n, i;
	printf("How many numbers you wanna to add : ");
	scanf(" %d", &n);\
	for(i = 0; i < n; i++){
		printf("\Enter the %d number : ", i+1);
		scanf(" %d", &nums[i]);
	} 
	int sum = findsum(nums, 0, 0, n);
	printf("Sum of all numbers is : %d ", sum);
}
