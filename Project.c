#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct node_book {
	char name[30];
	char category[30];
	int code;
	int copies;
	float price;
    struct node_book *next;
}Node;


typedef struct Book
{
	char name[30];
	char category[30];
	int code;
	int copies;
	float price;
}book;

void main(){

}

