//Q12. write a function to reverse a string.
#include <stdio.h>

int findlen(char str[]){
	int len;
	for(len = 0; str[len] != '\0'; len++);
	return len;
}

void revstring(char str[]){
	int j = findlen(str) -1, i =0;
	char temp;
	
	while(i < j){
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
}

int main(){
	char str[100];
	printf("Enter the string you wanna reverse : ");
	gets(str);
	revstring(str);
	printf("Reversed string is : %s", str);
	return 0;
}
