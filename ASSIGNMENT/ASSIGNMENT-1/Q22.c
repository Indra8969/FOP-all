//Q 22. Write a program to calculate the sum of odd and even digits separately from given number.

#include <stdio.h>
#include <math.h>

int main(){
    int num, numcpy, sumodd = 0, sumeven = 0, rem;
    printf("Enter the number : ");
    scanf("%d", &num);
    numcpy = num;
    
    while(num > 0){
        rem = num % 10;
        if(!(rem % 2)){
            sumeven += rem;
        }else{
            sumodd += rem;
        }
        num /= 10;
    }    
    
    printf("\nsum of odd  nums is : %d\nsum of even nums is : %d ",sumodd, sumeven);
    
    return 0;
}