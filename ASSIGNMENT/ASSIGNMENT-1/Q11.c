//Q11. Use while, do while and for loop to print 1 to 10.

#include <stdio.h>

int main(){
    int dw = 1;
    int w = 1;
    int f;

    //do while loop
    printf("do while starts here\n");
    do{
        printf("%d\n", dw);
        dw++;
    }while(dw <= 10);

    //while loop
    printf("while loop starts here\n");
    while(w <= 10){
        printf("%d\n", w);
        w++;
    }

    //for loop
    printf("for loop starts here\n");
    for(f = 1; f <= 10; f++){
        printf("%d\n", f);
    }

    return 0;
}