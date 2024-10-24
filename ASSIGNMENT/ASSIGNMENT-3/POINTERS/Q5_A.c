//Q5_A. find the occurence of the particular element in the string uisng pointers and functin should return occurence.
#include <stdio.h>
int getOccurence(char *str, char *chr){
	int i = 0, count = 0; 
	while(*(str + i) != '\0'){
		if(*(str + i) == *chr){
			count++;
		}
		i++;
	}
	return count;
}

int main(){
	char str[100], character;
	int occ;
	printf("Enter the string : ");
	gets(str);
	printf("Enter the character you wanna find occurence : ");
	scanf(" %c", &character);
	occ = getOccurence(&str[0], &character);
	printf("Occurence of %c in the %s is : %d",character, str, occ);
}
