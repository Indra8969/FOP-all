//Q15. Write a functin that returns 1 if its argument is a prime number and otherwise returns 0 
#include <stdio.h>
#include <math.h>

int isPrime(int num){
	if(num == 1) return 0;
	if(num <= 3) return 1;
	int sq = sqrt(num), i;
	for(i = 2; i < sq + 1; i++){
		if(num % i == 0) return 0;
	}
	return 1;
}

int main(){
	int num;
	int isp;
	printf("Enter the number you wanna check number is prime or not : ");
	scanf(" %d", &num);
	isp = isPrime(num);
	if(!isp){
		printf("%d is not prime number", num);
	}else{
		printf("%d is prime number", num);
	}
	return 0;
}
