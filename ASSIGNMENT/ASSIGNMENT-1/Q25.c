/*Q21. Generate the following pattern:

1.	* * * * *
	* * * * *
	* * * * *
	* * * * *
	* * * * *
		
2. 	*
	* *
	* * *
	* * * *
	* * * * *
		
3.	* * * * *
	* * * *
	* * *
	* *
	*
		
4. 	* * * * *
	*       *
	*       *
	*       *
	* * * * *	
		
5.	* * * * *
	  * * * *
	    * * *
	      * *
	        *	

6.          *
		  * *	
	    * * *	
	  * * * *	
	* * * * *	
	
	
7.		1 
		1 2 
		1 2 3 
		1 2 3 4 
		1 2 3 4 5 
		
		
8.		1 
		2 2 
		3 3 3 
		4 4 4 4 
		5 5 5 5 5 
		
		
9.		1  
		2  3  
		4  5  6  
		7  8  9  10  
		11 12 13 14 15 



10.		*    
	   ***   
	  *****  
	 ******* 
	*********
*/

#include <stdio.h>

void first(){
	int i,j;
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			printf("* ");
		}
		printf("\n");
	}
}

void second(){
	int i,j;
	for(i = 0; i < 5; i++){
		for(j = 0; j <= i; j++){
			printf("* ");
		}
		printf("\n");
	}
}

void third(){
	int i,j;
	for(i = 5; i > 0; i--){
		for(j = 0; j < i; j++){
			printf("* ");
		}
		printf("\n");
	}
}

void fourth(){
	int i,j;
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			if(i ==0 || i == 4){
				printf("* ");	
			}else{
				if(j ==0 || j == 4){
					printf("* ");	
				}else{
					printf("  ");
				}
			}
		}
		printf("\n");
	}
}

void fifth(){
	int i,j,k;
	for(i = 0; i < 5; i++){
		for(k = 0; k < i; k++){
			printf("  ");
		}
		for(j = k; j < 5; j++){
			printf("* ");
		}
		printf("\n");
	}
}

void sixth(){
	int i, j, k;
	for(i = 1; i <= 5; i++){
		for(j = 1; j <= 5 - i; j++){
			printf("  ");
		}
		for(k = 5 - i; k < 5; k++){
			printf("* ");
		}
		printf("\n");
	}
}

void seventh(){
	int i, j;
	for(i = 1; i <= 5; i++){
		for(j = 1; j <= i; j++){
			printf("%d ", j);
		}
		printf("\n");
	}
}
void eightth(){
	int i, j;
	for(i = 1; i <= 5; i++){
		for(j = 1; j <= i; j++){
			printf("%d ", i);
		}
		printf("\n");
	}
}

void nineth(){
	int i, j, count  = 0;
	for(i = 1; i <= 5; i++){
		for(j = 1; j <= i; j++){
			if(count < 10){
				printf("%d  ", ++count);
			}else{
				printf("%d ", ++count);
			}
		}
		printf("\n");
	}
}

void tenth(){
	//here we can print the other char instead of the spaces and the astricts
	int i, j, k, l, n;
    printf("Enter the value of the height of the pyramid : ");
    scanf("%d", &n);
	for(i = 1; i <= n; i++){
	    for(k = 1; k <= (((n * 2) -1) - ((i * 2) -1))/2; k++){
	        printf(" "); 
	    }
		for(j = 1; j <= (i * 2) -1; j++){
			printf("*");
		}
	    for(k = 1; k <= (((n * 2) -1) - ((i * 2) -1))/2; k++){
	        printf(" ");
	    }
		printf("\n");
	}
}

void main(){
	printf("\n\n1.\n");
	first();
	printf("\n\n2.\n");
	second();
	printf("\n\n3.\n");
	third();
	printf("\n\n4.\n");
	fourth();
	printf("\n\n5.\n");
	fifth();
	printf("\n\n6.\n");
	sixth();
	printf("\n\n7.\n");
	seventh();
	printf("\n\n8.\n");
	eightth();
	printf("\n\n9.\n");
	nineth();
	printf("\n\n10.\n");
	tenth();
}
