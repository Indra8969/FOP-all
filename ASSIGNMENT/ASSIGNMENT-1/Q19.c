//Q 19. Write a program to swap two numbers.
#include <stdio.h>

int main(){
    int a = 23, b = 654;
    printf("Initial state : a is %d b is %d", a, b);
    a = a+b;
    b = a - b;
    a = a - b;
    printf("\nAfter swap state : a is %d b is %d", a, b);
    return 0;
}