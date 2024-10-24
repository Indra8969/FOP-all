#include <stdio.h>
#include <stdlib.h>

struct Book{
	int id, releaseYear;
	float price;
	char title[20], description[50], author[15];
};

void printBook(struct Book book){
	printf("\n--------\n");
	printf("Title : %s\n", book.title);
	printf("Description : %s\n", book.description);
	printf("Author : %s\n", book.author);
	printf("Release year : %d\n", book.releaseYear);	
	printf("Price : %f", book.price);	
	printf("\n-----------");
}

void sort(struct Book *bkPtr, int len){
	int i, j;
	struct Book temp;
	for(i = 0; i < len -1; i++){
		for(j = 0; j < len-i-1; j++){
			if(bkPtr[j+1].price < bkPtr[j].price){
				temp = *(bkPtr + j);
				*(bkPtr + j) = *(bkPtr + j + 1);
				*(bkPtr + j + 1) = temp;
			}
		}
	}
}

int main(){
	int n, i;
	struct Book *books;
	printf("Enter the number of books : ");
	scanf("%d", &n);
	books = (struct Book *)malloc(n * sizeof(struct Book));
	if(!books) return printf("memory allocation failed !");
	for(i = 0; i < n; i++){
		printf("Enter the details of the book %d\n", i+1);
		printf("Enter the id of the book : ");
		scanf("%d", &books[i].id);
		printf("Enter the price of the book : ");
		scanf("%f", &books[i].price);
		fflush(stdin);
		printf("Enter the title of the book : ");
		gets(books[i].title);
		fflush(stdin);
		printf("Enter the name of the author : ");
		gets(books[i].author);
		fflush(stdin);
		printf("Enter the description of the book : ");
		gets(books[i].description);
		fflush(stdin);
		printf("Enter the release year of the book : ");
		scanf("%d", &books[i].releaseYear);
	}
	sort(&books[0], n);
	for(i = 0; i < n; i++){
		printBook(books[i]);
	}
	
	return 0;
}
