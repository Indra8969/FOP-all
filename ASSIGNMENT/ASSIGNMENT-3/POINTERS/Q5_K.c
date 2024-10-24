#include <stdio.h>

int cmpstr(char *str1, char *str2){
	int i = 0;
	while(str1[i] && str2[i]){
		if(str1[i] < str2[i]){
			return -1;
		}else if(str1[i] > str2[i]){
			return 1;
		}
		if(str1[i] == '\0' && str2[i] != '\0'){
			return 1;
		}else if(str1[i] != '\0' && str2[i] == '\0'){
			return -1;
		}
		i++;
	}
	return 0;
}

int main(){
	char str1[50], str2[50];
	int res;
	printf("Enter the first string : ");
	gets(str1);
	printf("Enter the second string : ");
	gets(str2);
	res = cmpstr(str1, str2);
	printf("\n-1 : s1 < s2\n 0 : s1 = s2\n 1 : s1 > s2\n");
	printf("\ns1 : %s and s2 : %s\n", str1, str2);
	printf("result : %d", res);
	return 0;
}
