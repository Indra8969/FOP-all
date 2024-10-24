#include <stdio.h>

int getlen(char *str){
	int len = 0;
	while(*(str+len)) len++;
	return len;
}

void swap(char *f, char *s){
	*f = *f ^ *s;
	*s = *f ^ *s;
	*f = *f ^ *s;
}

void sortString(char *str){
	int i, j, len = getlen(&(*str)), swapped;
	for(i = 0; i < len - 1; i++){
		swapped = 0;
		for(j = 0; j < len-i-1; j++){
			if(*(str + j) > *(str + (j+1))){
				swap(&(*(str+j)), &(*(str+(j+1))));
				swapped = 1;
			}
		}
		if(!swapped) break;
	}
}

int main(){
	char str[100];
	printf("Enter the string you want to sort : ");
	gets(str);
	sortString(&str[0]);
	printf("Sorted string : %s", str);
	return 0;
}
