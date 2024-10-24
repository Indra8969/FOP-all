#include <stdio.h>

void toupr(char *str){
	int i = 0;
	while(*(str + i)){
		if(*(str + i) >= 97 && *(str + i) <= 122){
			*(str + i) = *(str + i) - 32;
		}
		i++;
	}
}

void prints(char *str){
	int i = 0;
	while(*(str + i)){
		printf("%c", *(str+i));
		i++;
	}
}

int main(){
	char string[1000];
	printf("Enter the string you wanna convert in to the uppercase : ");
	gets(string);
	toupr(&string[0]);
	prints(&string[0]);
	return 0;
}
