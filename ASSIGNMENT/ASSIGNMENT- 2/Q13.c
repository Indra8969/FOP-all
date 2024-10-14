//Q13. write a program that searchs an item from the array of string.
#include <stdio.h>

int main(){
	int i=0;
	char string[100], c;
	printf("Enter the string : ");
	scanf(" %s", &string);
	printf("Enter the element you want to find in to that string : ");
	scanf(" %c", &c);
	
	while(string[i] != '\0'){
	    if(string[i] == c){
	        break;
	    }
        i++;                           
    }
	printf("%c is at the position %d in the %s", c, i, string);
	return 0;
}
