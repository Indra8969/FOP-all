#include <stdio.h>

int getlen(char *str){
	int len = 0;
	while(*(str + len)){
		len++;
	}
	return len;
}

int main(){
	char string[100];
	int length;
	printf("Enter the string : ");
	gets(string);
	length = getlen(&string[0]);
	printf("Length of the string is : %d", length);
	return 0;
}
