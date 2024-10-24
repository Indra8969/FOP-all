#include <stdio.h>

int getlen(char *str){
	int len = 0;
	while(*(str+len)) len++;
	return len;
}

void swap(char *f, char *s){
	char temp = *f;
	*f = *s;
	*s = temp;
}

void revStr(char *str){
	int len = getlen(&str[0]), i=0;
	printf("len : %d\n", len);
	while(i < (len/2)){
		swap((str+i), str+(len-1-i));
		i++;
	}
}

int main(){
	char str[] = "1";
	revStr(&str[0]);
	printf("rev str : %s", str);
	return 0;
}
