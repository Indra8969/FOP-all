//Q 20. Write a program to reverse a given number and display the sum of all digits.

#include <stdio.h>

int main(){
    int num, sum  = 0, rev = 0, rem;
    printf("Enter the number : ");
    scanf("%d", &num);
    
    while(num > 0){
        rem = num % 10;
        rev = rev * 10 + rem;
        sum += rem;
        num /= 10;
    }
    printf("sum is %d and the rev number is %d", sum, rev);
    return 0;
}