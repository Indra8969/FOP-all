//Q11. WAP that finds a given word into the given string.
#include <stdio.h>

int main(){
	char str[100], word[100];
	int i = 0, j = 0;
	int strat[2] = {0,0};
	
	printf("Enter the first string : ");
	gets(str);
	printf("Enter the wrod to find in the string : ");
	gets(word);
	
	while(str[i] != '\0'){
		if(str[i] == word[j]){
			int find = 1;
			while(word[j] != '\0'){
				if(str[i+j] != word[j] ){
					find = 0;
					break;
				}
				j++;
			}
			if(find == 1){
				strat[0] = i ;
				strat[1] = i + j;
				break;
			}
		}
		j = 0;
		i++;
	}
	
	if(strat[0] == 0 && strat[1] == 0){
		printf("There is no '%s' in the '%s'", word, str);
	}else{
		printf("\nStarts : %d and End : %d ", strat[0], strat[1]);
		printf("\nWord in a String is : ");
		for(i = strat[0]; i < strat[1]; i++){
			printf("%c", str[i]);
		}
	}	
	
}

	
