#include <stdio.h>

int main(){
	FILE *f1 = fopen("txt1.txt", "r");
	FILE *f2 = fopen("replaced.txt", "w");
	char c, prev;
	if(!f1) {
		printf("could not open file !");	
	}
	if(!f2){
		fclose(f1);
		fclose(f2);
		printf("could not able to remove lines");
	}
	c = fgetc(f1);
	
	while(c != EOF){
		if(c == '\n'){
			if(prev == '\n'){
				c = fgetc(f1);
				continue;
			}
		}
		fputc(c, f2);
		prev = c;
		c = fgetc(f1);
	}
	fclose(f1);
	fclose(f2);
	remove("txt1.txt");
	rename("replaced.txt", "txt1.txt");
	return 0;
}
