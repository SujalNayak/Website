#include <stdio.h>

struct library
{
    int issued, acsnum[10];
    char title[100][100], author[100][100];
};

int main()
{
    int choice;
    struct library book;
    book.acsnum[1] = 10;
    book.author[1] = "Chetan Bhagat";
    book.title[1] = "2 States";
    book.acsnum[2] = 20;
    book.author[2] = "Vikram Chandra";
    book.title[2] = "Red Earth and Pouring Rain";
    book.acsnum[3] = 30;
    book.author[3] = "Rabindranath Tagore";
    book.title[3] = "Gitanjali";
    book.acsnum[4] = 4;
    book.author[4] = "Arundhati Roy";
    book.title[4] = "God of Small Things";
    book.acsnum[5] = 50;
    book.author[5] = "R.K. Narayan";
    book.title[5] = "The Guide";

    printf("\n\n-------------------MENU-------------------\n\n");
    printf("\n1. - Display book information");
    printf("\n2. - Add a new book");
    printf("\n3. - Display all the books in the library of a particular author");
    printf("\n4. - Display the number of books of a particular title");
    printf("\n5. - Display the total number of books in the library");
    printf("\n6. -  Issue a book");
    switch (choice)
    {
    case 1:
    {
        char bname[15];
        printf("\nEnter the name of book\n");
        gets(bname);
        printf("Title\tAuthor\tAccession No.\n");
         for (int i = 0; i <= 5; i++);
        {
            if (strcmp(bname, book.title[i]) == 0)
            {
                printf("%s\t%s\t%d", book.title[i], book.author[i], book.acsnum[1]);
            }
        }
    }
    break;
    case 2:
        /* code */
        break;
    case 3:
        /* code */
        break;
    case 4:
        /* code */
        break;
    case 5:
        /* code */
        break;
    case 6:
        /* code */
        break;

    default:
        break;
    }
}
