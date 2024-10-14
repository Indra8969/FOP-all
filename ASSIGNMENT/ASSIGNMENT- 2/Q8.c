//Q8. WAP to find string length using function.
#include <stdio.h>

int getlen(char str[]){
    int len;
    for(len=0; str[len] != '\0'; len++);
    return len;
}

int main(){
    char s[32] = "fhasjfh";
    int length = getlen(s);
    printf("%d", length);
    return 0;
}
