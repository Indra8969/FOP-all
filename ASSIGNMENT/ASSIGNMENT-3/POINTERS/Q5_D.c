#include <stdio.h>

void cpystr(char *str, char *dest){
	int i = 0;
	while(*(str + i)){
		*(dest+i) = *(str+i);
		i++;
	}
}

int main(){
	int n;
	char str[100] = "flkasdf";
	char destination[100];
	printf("Enter the string : ");
	gets(str);
	cpystr(&str[0], &destination[0]);
	printf("\n     source string : %s", str);
	printf("\ndestination string : %s", destination);
}
