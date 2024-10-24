//Q5_C. Delete all occurrences of a character from a string. Ignore Case.
#include <stdio.h>
#include <string.h>
void rmOcc (char *str, char chr){
	int i = 0, j = 0;
	char lwr = tolower(chr);
	char upr = toupper(chr);
	while(*(str + i) != '\0'){
		if(*(str + i) != upr && *(str + i) != lwr){
			*(str + j) = *(str + i);
			j++;
		}
		i++;
	}
	*(str + j) = '\0';
}

int main(){
	char str[1000], ch;
	printf("Enter the string : ");
	gets(str);
	printf("Enter character you wanna remove from string : ");
	scanf(" %c", &ch);
	printf("Original string: %s\n", str);
    rmOcc(&str[0], ch);
    printf("Modified string: %s\n", str);
	return 0;
}
