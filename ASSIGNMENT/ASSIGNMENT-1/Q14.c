//Q12. Write a program to calculate the average of a set of n given numbers.

#include <stdio.h>

int getLen(){
	//returns a length which user wants (it is for taking input from the user how many nums they have) 
	int input;
	printf("How many nums you have : ");
	scanf("%d", &input);
	return input;
}



int main(){
	int len = getLen(); //len = length of an array
    int nums[len], i,sum = 0; //creating an array how long user wants and initalizing i and sum = 0;
    for(i = 0; i < len; i++){ //taking input from the user that they have selected time
    	printf("Enter %d : ", i + 1);
    	scanf("%d", &nums[i]);
	}
	for(i = 0; i < len; i++){ //adding a all vals which are present in the array
    	sum += nums[i];
	}
	printf("Total sum of nums is : %d", sum);
	return 0;
}	

