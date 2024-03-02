/*
Exercise 1:
Create a struct to represent a book. The struct should contain fields such as title, author, and publication year.
Then, write a program that declares a variable of this struct type, assigns values to its fields,
and prints the book information.


(PT-BR)
Exercício 1:
Crie uma struct para representar um livro. A struct deve conter campos como título, autor e ano de publicação.
Em seguida, escreva um programa que declara uma variável do tipo dessa struct, atribui valores a seus campos 
e imprime as informações do livro.
*/

#include <stdio.h>
#include <string.h>

typedef struct {
    char title[20];
    char author[20];
    int year;
} Book;

int main()
{
    Book book;

    printf("What is the title of the book?\n");
    fgets(book.title, 20, stdin);
    book.title[strlen(book.title)-1] = '\0';

    printf("Who is the author?\n");
    fgets(book.author, 20, stdin);
    book.author[strlen(book.author)-1] = '\0';

    printf("What is the publication year?\n");
    scanf("%d", &book.year); getchar();

    printf("\nBook:\n%s, %s, %d\n", book.title, book.author, book.year);

    return 0;
}