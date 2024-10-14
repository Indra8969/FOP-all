//write a function that returns 1 if its a argument is a palindrome otherwise 0.
#include <stdio.h>

int isPalindrome(num){
	int rev = 0, cpy = num, rem;
	while(num > 0){
		rem = num % 10;
		rev = rev * 10 + rem;
		num /= 10;
	}
	return rev == cpy;	
}

int main(){
	int number, isp;
	printf("Enter the number you wanna check is it palindrome or not : ");
	scanf(" %d", &number);
	isp = isPalindrome(number);
	if(isp){
		printf("%d is a palindrome number", number);
	}else{
		printf("%d is not a palindrome number", number);
	}
}
