#include <stdio.h>
#include <stdlib.h>

int contains(char c, char arr[], int n){
	int i;
	for(i = 0; i< n; i++){
		if(arr[i] == c) return 1;
	}
	return 0;
}

int main(){
	int feq[255], i, isContain, repIndex = 0;
	char repeat[255], str[100], c;
	for(i = 0; i<255; i++){
		repeat[i] = '\0';
		feq[i] = 0;
	} 
	FILE *f1 = fopen("txt1.txt", "r");
	if(!f1){
		printf("Something went wrong while opening the file one");
	}
	while(fgets(str, sizeof(str), f1)){
		i = 0;
		while(str[i]){
			isContain = contains(str[i], repeat, repIndex);
			if(isContain){
				feq[str[i]]++;
			}else{
				repeat[repIndex++] = str[i];
				feq[str[i]]++; 
			}
			i++;
		}
	}
	i = 0;
	while(repeat[i]){
		if(repeat[i] != '\n'){
			if(repeat[i] == ' '){
				printf("%s : %d Times\n", "spaces", feq[repeat[i]]);
			}else{
				printf("%c : %d Times\n", repeat[i], feq[repeat[i]]);	
			}
		}else{
			printf("\\n : %d\n", feq[repeat[i]]);
		}
		i++;
	}
	return 1;
}
