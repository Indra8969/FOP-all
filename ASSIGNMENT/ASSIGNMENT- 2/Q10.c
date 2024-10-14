//WAP program that appends a string to the another.
#include <stdio.h>

int findlen(char str[]){
    int len;
    for(len = 0; str[len] != '\0'; len++);
    return len;
}

int main(){
    char str1[100], str2[100], strcon[200];
    int len1 , len2, i=0, j=0;    

    printf("\nEnter the first string (less than 100 character) : ");
    scanf(" %s", str1);
    printf("\nEnter the second string (less than 100 character) : ");
    scanf(" %s", str2);


    while(str1[j] != '\0'){
        strcon[i] = str1[j];
        i++;
        j++;
    }
    j = 0;
    while(str2[j] != '\0'){
        strcon[i] = str2[j];
        i++;
        j++;
    }
    printf("concatinated string is : %s", strcon);
}
