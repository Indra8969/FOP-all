//WAP to sort given string array in ascending order.
#include <stdio.h>
// #include <string.h>

int main() {
    char str[100];
    int len = 0, i,j;
    printf("Enter a string (max 100 characters): ");
    
    scanf("%s", &str);
    for(len = 0; str[len] != '\0'; len++);
    
    for(i = 0; i < len -2; i++){
        for(j=0; j<len-1-i; j++){
            if(str[j] > str[j+1]){
                str[j] = str[j] ^ str[j+1];
                str[j+1] = str[j] ^ str[j+1];
                str[j] = str[j] ^ str[j+1];
            }
        }
    }
    printf("Sorted string : ");
    for(i = 0; i<len; i++){
        printf("%c", str[i]);
    }
    return 0;
}
