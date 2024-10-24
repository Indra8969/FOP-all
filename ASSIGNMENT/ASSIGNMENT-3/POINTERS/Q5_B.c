//Q5_B. Delete all occurrences of a character from a string.
#include <stdio.h>

void deleteOccurence(char *str, char chr){
	int i = 0, j = 0;
	while(*(str + i) != '\0'){
		if(*(str + i) != chr){
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
    deleteOccurence(&str[0], ch);
    printf("Modified string: %s\n", str);
	return 0;
}
