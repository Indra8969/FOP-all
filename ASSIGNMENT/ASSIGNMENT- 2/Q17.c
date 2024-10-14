//Q17. write a function that scan a charcter in the string and change all the char to the its lowercase equilvalent.
#include <stdio.h>
#include <string.h>

void tolwr(char *p){
	int i = 0;
	while(*p != '\0'){
		*p = toupper(*p);
		p++;
	}
}

int main(){
	char str[100];
	char *p;
	printf("Enter the string : ");
	gets(str);
	p = &str[0];
	tolwr(p);
	printf("Uppercase string is : %s", str);
}
