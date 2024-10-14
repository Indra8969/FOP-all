//Q5. WAP to determine the max of 3 nums

#include <stdio.h>
int find(int a, int b, int c){
	int res;
	
	if(a > b && a > c){
		res = a;
	}else if(b > c){
		res = b;
	}else{
		res = c;
	}
	
	return res;
}

int main(){
	int a,b,c;
	
	printf("\nEnter first number : ");
	scanf("%d", &a);
	printf("\nEnter first number : ");
	scanf("%d", &b);
	printf("\nEnter first number : ");
	scanf("%d", &c);
	
	printf("\nMax value is : %d", find(a,b,c));
	
	return 0;
}
