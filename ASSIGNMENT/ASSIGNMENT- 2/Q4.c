//Q4. write a program to add two matrices.
#include <stdio.h>

int main(){
    int i, j;
    int a[4][4] = {
    {3, 5, 2, 7},
    {1, 8, 6, 4},
    {9, 2, 3, 5},
    {4, 6, 8, 1}
};
    int b[4][4] = {
    {2, 1, 4, 5},
    {7, 3, 9, 6},
    {1, 7, 0, 8},
    {3, 2, 4, 9}
};
    int added[4][4];
    printf("[");
    for(i = 0; i<4; i++){
        printf("\n[");
        for(j = 0; j<4; j++){
            added[i][j] = a[i][j] + b[i][j];
            printf("%d", added[i][j]);
            if(j < 4-1){
                printf(",");
            }
        }
        printf("],");
        // printf("\n");
    }
    printf("\n]");
    return 0;
}
