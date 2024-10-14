//Q12. Print series 2, 4, 6, 8,.......n * n. (Using While,do..while and for loop)

#include <stdio.h>

int main(){
    int n, i;
    printf("Enter the number you want to print a even numbers which are less than that Number : ");
    scanf("%d", &n);

    //do while loop
    i = 1;
    printf("do while loop : ");
    do{
        if(!(i%2)){
            printf(" %d", i*i);
        }
        i++;
    }while(i <= n);
	printf("\n");
	
    //while loop
    i = 1;
    printf("   while loop : ");
    while(i <= n){
        if(!(i%2)){
            printf(" %d", i*i);
        }
        i++;
    }
    
    printf("\n");
    printf("     for loop : ");
    for(i = 1;i <= n; i++){
        if(!(i%2)){
            printf(" %d", i*i);
        }

    }
}
