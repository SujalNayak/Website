#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>


//Create a structure called library to hold accession number, title of the book, author name,  price of the book, and flag indicating whether book is issued or not. 
struct Library
{
	int  acsnum;
	char  title[50];
	char  author[50];

	int bookIsIssued;
};




void sortBooksInOrderacsnum(struct Library myLibrary[],int size) {
	int i, j,  xmin;
	struct Library temp;
	for(i = 0; i<size-1; i++) {
		 xmin = i;  
		for(j = i+1; j<size; j++)
			if(myLibrary[j]. acsnum < myLibrary[ xmin]. acsnum)
				 xmin = j;


		
		temp = myLibrary[i];
		myLibrary[i] = myLibrary[ xmin];
		myLibrary[ xmin] = temp;
	}
}




int main(void){
	struct Library myLibrary[100];
	int  total=0;
	int choice=-1;
	int  x=-1;
	int i;
	int  acsnumTarget;
	char  authorTarget[50];
	char  titleTarget[50];


	while(choice!=7){
		//display main menu
		printf("1. Add book information\n");
		printf("2. Display book information\n");
		printf("3. List all books of given author\n");
		printf("4. List the title of specified book\n");
		printf("5. List the count of books in the library\n");
		printf("6. List the books in the order of accession number\n");
		printf("7. Exit\n");     
		printf("Your choice: ");
		scanf("%d",&choice);


		if(choice==1){//Add book information
			printf("Enter the book accession number: "); 
			scanf("%d",&myLibrary[ total]. acsnum);
			fflush(stdin);
			printf("Enter the book title: "); 
			gets(myLibrary[ total]. title);
			printf("Enter the book author: "); 
			gets(myLibrary[ total]. author);
			printf("Enter the book price: "); 
			scanf("%f",&myLibrary[ total].);
			myLibrary[ total].bookIsIssued=-1;
			while(myLibrary[ total].bookIsIssued!=1 && myLibrary[ total].bookIsIssued!=0){
				printf("Is the book issued? 1- yes, 0 - no: "); 
				scanf("%d",&myLibrary[ total].bookIsIssued);
			}
			 total++;
			printf("\n\nA new book has been added successfully.\n\n");
		}else if(choice==2){//Display book information
		if( total==0){
				printf("\nThe library is empty.\n\n");
			}else{
				 x=-1;
				printf("Enter the book accession number to display: "); 
				scanf("%d",& acsnumTarget);
				for(i=0;i< total;i++){
					if(myLibrary[i]. acsnum== acsnumTarget){
						 x=i;
					}
				}
				if( x!=-1){
					printf("\n%-20s%-20s%-20s%-20s%-20s\n","Accession Number","Book title","Book author","Book price","Book is issued");
					printf("%-20d%-20s%-20s%-20.2f%-20d\n\n",myLibrary[ x]. acsnum,myLibrary[ x]. title,myLibrary[ x]. author,myLibrary[ x].,myLibrary[ x].bookIsIssued);
				}else{
					printf("\nThe book does not exist.\n\n");
				}
			}
		}else if(choice==3){//List all books of given author
			if( total==0){
				printf("\nThe library is empty.\n\n");
			}else{
				fflush(stdin);
				printf("Enter the book author to list: "); 
				gets( authorTarget);
				 x=-1;
				printf("\n\n%-20s%-20s%-20s%-20s%-20s\n","Accession Number","Book title","Book author","Book price","Book is issued");
				for(i=0;i< total;i++){
					if(strcmp(myLibrary[i]. author, authorTarget)==0){
						 x=i;
						printf("%-20d%-20s%-20s%-20.2f%-20d\n",myLibrary[i]. acsnum,myLibrary[i]. title,myLibrary[i]. author,myLibrary[i]. ,myLibrary[i].bookIsIssued);
					}
				}
				if( x==-1){
					printf("\nThe books do not exist.\n\n");
				}
			}
		}else if(choice==4){//List the title of specified book
			if( total==0){
				printf("\nThe library is empty.\n\n");
			}else{
				fflush(stdin);
				printf("Enter the book title to list: "); 
				gets( titleTarget);
				 x=-1;
				printf("\n\n%-20s%-20s%-20s%-20s%-20s\n","Accession Number","Book title","Book author","Book price","Book is issued");
				for(i=0;i< total;i++){
					if(strcmp(myLibrary[i]. title, titleTarget)==0){
						 x=i;
						printf("%-20d%-20s%-20s%-20.2f%-20d\n",myLibrary[i]. acsnum,myLibrary[i]. title,myLibrary[i]. author,myLibrary[i]. ,myLibrary[i].bookIsIssued);
					}
				}
				if( x==-1){
					printf("\nThe books do not exist.\n\n");
				}
			}
		}else if(choice==5){// List the count of books in the library
			if( total==0){
				printf("\nThe library is empty.\n\n");
			}else{
				printf("\nThe total number of books in the library: %d\n\n", total);
			}
		}else if(choice==6){// List the books in the order of accession number
			if( total==0){
				printf("\nThe library is empty.\n\n");
			}else{
				sortBooksInOrderacsnum(myLibrary, total);
				printf("\n\n%-20s%-20s%-20s%-20s%-20s\n","Accession Number","Book title","Book author","Book price","Book is issued");
				for(i=0;i< total;i++){
					printf("%-20d%-20s%-20s%-20.2f%-20d\n",myLibrary[i]. acsnum,myLibrary[i]. title,myLibrary[i]. author, myLibrary[i].bookIsIssued);
				}
			}
		}else if(choice==7){
			//exit
		}else{
			printf("Wrong choice.\n\n");
		}


	}
}