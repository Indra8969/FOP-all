#include <stdio.h>
#include <stdlib.h>

int *extractNumber(FILE *file){
	//here first index of the array is going to be the number of the element array has;
	int n = 100, number = 0, i = 1;
	int *array = (int *)malloc(n * sizeof(int));
	char c;
	array[0] = i;
	c = fgetc(file);
	while(c != EOF){
		if(c > 47 && c < 58){
			number = number * 10 + (c - 48);
		}
		if(c == ' '){
			if(i+1 > n-1){
				n += 100;
				array = (int *)realloc(array, n * sizeof(int));
			}
			array[i++] = number;
			array[0] = i;
			printf("Number found : %d\n", number);
			number = 0;
		}
		c = fgetc(file);
	}
	array[i++] = number;
	array[0] = i;
	return &array[0];
}

int main(){
	FILE *f1, *f2, *f3;
	int i = 1, j = 1, k = 1, *arr1, *arr2, *arrres;
	char str[10];
	//here file one and two contains a numbers which aer separated by the space eg.. 432 34 234
	f1 = fopen("txt1.txt", "r");
	f2 = fopen("txt2.txt", "r");
	f3 = fopen("txt3.txt", "w");
	if(!f1){
		printf("Something went wrong while opening the file one ");
	}
	if(!f2){
		printf("Something went wrong while opening the file two");
	}
	if(!f3){
		printf("Something went wrong while opening the file three");
	}
	arr1 = extractNumber(f1);
	arr2 = extractNumber(f2);
	arrres = (int *)malloc((arr1[0] + arr2[0]) * sizeof(int));
	arrres[0] = arr1[0] + arr2[0];
	while (i <= arr1[0] && j <= arr2[0]) {
        if (arr1[i] <= arr2[j]) {
            arrres[k++] = arr1[i++]; 
        } else {
            arrres[k++] = arr2[j++];
        }
    }
    
    while (i <= arr1[0]) {
        arrres[k++] = arr1[i++];
    }
    
    while (j <= arr2[0]) {
        arrres[k++] = arr2[j++];
    }
    for(i = 1; i < arrres[0]; i++){
    	sprintf(str, "%d", arrres[i]);
		fputs(str, f3);
		fputc(' ', f3);
	}
	return 1;
}
