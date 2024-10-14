//Q 21. Write a program to determine that given number is armstrong number or not.

#include <stdio.h>
#include <math.h>

int main(){
    int num, numcpy, len =0, sum = 0, rem;
    printf("Enter the number : ");
    scanf("%d", &num);
    numcpy = num;
    
    while(num > 0){
        len++;
        num /= 10;
    }
    num = numcpy;
    while(num > 0){
        rem = num % 10;
        sum += pow(rem, len);
        num /= 10;
    }
    
    if(numcpy == sum){
        printf("\n%d is an armstrong number",numcpy);
    }else{
        printf("\n%d is not an armstrong number",numcpy);
    }
    
    
    return 0;
}