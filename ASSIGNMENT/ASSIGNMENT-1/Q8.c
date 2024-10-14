//Q8. WAP that reads the % obtained by the students and determines and prints by the students as per the followinfg rules
// 0 - 39 fail 
// 40 - 59 second class
// 60 - 79 first class
// 80 - 100 Distinction

#include <stdio.h>
int main(){
	int marks;
	printf("Enter the marks of the student : ");
	scanf("%d", &marks);
	if(marks <= 39){ 
		printf("Status : Fail");
	}else if(39 < marks <= 59){
		printf("Status : Second Class");
	}else if(59 < marks <= 79){
		printf("Status : First Class");
	}else{
		printf("Status : Distinction");
	}
}
