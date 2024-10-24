#include <stdio.h>
#include <stdlib.h>

void main(void){
	FILE *f1, *f2;
	char c;
	f1 = fopen("txt1.txt", "r");
	f2 = fopen("txt2.txt", "w");
	if(!f1){
		printf("Error while opening file one !");
		exit(1);
	}
	if(!f2){
		printf("Error while opening file two !");
		exit(1);
	}
	
	c = fgetc(f1);
	while(c != EOF){
		printf("%c", c);
		fputc(c, f2);
		fseek(f1, sizeof(c), SEEK_CUR);
		c = fgetc(f1);
	}
}
