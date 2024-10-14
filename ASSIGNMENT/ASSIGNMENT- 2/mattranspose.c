#include <stdio.h>

int main(){
    int row, col;
    int mat[100][100];
    int tnps[100][100];
    int i, j;
    scanf("%d %d", &row, &col);
    for(i=0;i<row;i++){
         for(j=0;j<col;j++){
              printf("enter the value of array at %d %d", i, j);
              scanf("%d", &mat[i][j]);
         }
    }
    for(i=0;i<row;i++){
         for(j=0;j<col;j++){
              tnps[j][i] = mat[i][j];
         }
    }
    for(i=0;i<col;i++){
         for(j=0;j<row;j++){
              printf("%d",tnps[i][j]);
              if(j < 1) printf(",");
         }
         printf("\n");
    }
  return 0;
}