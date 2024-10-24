#include <stdio.h>

void appendString(char *src, char *dest){
	int i = 0;
	int j = 0;
	while(*(src + i)){
		i++;
	}
	while(*(dest + j)){
		*(src + i) = *(dest + j);
		j++;
		i++;
	}
}

int main(){
	char str1[200] = "first string hello";
	char str2[] = "seccond string jksdjf";
	appendString(&str1[0], &str2[0]);
	printf("concatenated string : %s", str1);
	return 0;
}
