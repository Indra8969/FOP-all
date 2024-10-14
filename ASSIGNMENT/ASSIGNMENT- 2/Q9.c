//Q9. WAP that will read a string and rewrite it in the alphabetical order.
#include <stdio.h>
void sort(char *p,int len){
    int i, j;
   
    for(i = 0; i < len -2; i++){
        for(j=0; j<len-1-i; j++){
            if(*(p + j) > *(p+j+1)){
                *(p+j) = *(p+j) ^ *(p+j+1);
                *(p+j+1) = *(p+j) ^ *(p+j+1);
                *(p+j) = *(p+j) ^ *(p+j+1);
            }
        }
    }
}

int getlen(char str[]){
    int len = 0;
    while(str[len] != '\0'){
        len++;
    }
    return len;
}

void print(char str[]){
    int i = 0;
    while(str[i] != '\0'){
         if(str[i+1] == str[i]){
             i++;
             continue;
         }
         printf("%c", str[i]);
         i++;
    }
}

int main() {
    char str[] = "esadjfdsfadk";
    char *p = &str[0];
    int len;
    len = getlen(str);
    sort(p, len);
    printf("%s\n", str);
    print(str);
    return 0;
}
