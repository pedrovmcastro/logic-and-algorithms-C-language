/*
Exercise 3:
Create a struct to represent a phone book.
The struct should include fields for the name, phone number, and email address of a person.
Write a program that allows the user to add contacts to the phone book,
list all contacts, and search for a contact by name.


(PT-BR)
Exercício 3:
Crie uma struct para representar uma agenda telefônica.
A struct deve incluir campos para o nome, número de telefone e endereço de e-mail de uma pessoa.
Escreva um programa que permita ao usuário adicionar contatos à agenda,
listar todos os contatos e procurar um contato por nome.
*/

#include <stdio.h>
#include <string.h>

typedef struct Person {
    char name[80];
    int phoneNumber;
    char email[80];
} Person;

int main(){

    Person phoneBook[100] = {
        {"Alice", 123456789, "alice@email.com"},
        {"Bob", 987654321, "bob@email.com"},
        {"Charlie", 111223344, "charlie@email.com"},
        {"Diana", 999888777, "diana@email.com"}
    };

    int size = 4;

    // Add contacts to the phone book:
    printf("Name: ");
    fgets(phoneBook[size].name, 80, stdin);
    phoneBook[size].name[strlen(phoneBook[size].name) - 1] = '\0';
    printf("Phone Number: ");
    scanf("%d", &phoneBook[size].phoneNumber); getchar();
    printf("Email: ");
    fgets(phoneBook[size].email, 80, stdin);
    phoneBook[size].email[strlen(phoneBook[size].email) - 1] = '\0';

    size++;

    // Print contacts from the phone book:
    for(int i=0; i<size; i++){
        printf("Person %d: Name: %s, Phone Number: %d, Email: %s\n", i+1, phoneBook[i].name, phoneBook[i].phoneNumber, phoneBook[i].email);
    }

    return 0;
}