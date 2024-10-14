//Q15. WAP to generate a fabonaci series

#include <stdio.h>

int main(){
	int terms, pre1 = 1, pre2 = 2, temp, i; 
	printf("enter the number of terms for the fabonacci series : ");
	scanf("%d", &terms);
	if(terms < 2 || terms > 45){
		printf("Terms should be positive or greater than the one and it should be less than 45");
		return;
	}
	for(i = 0; i < terms; i++){
		if(i >= 2){
			printf("%d: %d \n" ,i+1, pre1 + pre2);
			temp = pre1;
			pre1 = pre2;
			pre2 = pre2 + temp;
		}else if(i == 1){
			printf("%d: 2 \n", i+1);
		}else{
			printf("%d: 1 \n", i+1);
		}
	}
}

