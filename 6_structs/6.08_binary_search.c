/*
Exercise 8:
Suppose we create a structure to store personal data and an array to store data from several individuals:

typedef struct {
    int id;
    char name[80];
} Person;
Person personRegister[100];

Assume that the array is sorted in ascending order by ID value. 
Implement a search function by ID, similar to binary search, that, if a person with the specified ID exists in the registry,
returns its index, and returns -1 if there is no person with the specified ID.


(PT-BR)
Exercício 8:
Suponha que criamos uma estrutura para armazenar dados de pessoas e um vetor para
armazenar dados de várias pessoas:
typedef struct Pessoa{
int rg;
char nome[80];
}Pessoa;
Pessoa cadastro[100];
Suponha que o vetor esteja ordenado em ordem crescente por valor de RG. Implemente
uma função de busca por RG, que opera como a busca binária, e que caso exista uma
pessoa no cadastro com o RG a ser buscado, devolve o índice deste no cadastro, e devolve
-1 caso não exista uma pessoa com o RG a ser buscado
*/

#include <stdio.h>

typedef struct{
    int id;
    char name[80];
}Person;

int binarySearch(int id, Person personRegister[100], int size);

int main()
{
    Person personRegister[100] = {
        {101, "Vitor"},
        {123, "Pedro"},
        {196, "Joao"},
        {250, "Maria"},
        {268, "Jose"},
        {313, "Lucas"},
        {542, "Fabio"},
        {588, "Henrique"},
        {709, "Igor"}
    };

    int searchID = 250;
    int result = binarySearch(searchID, personRegister, 9);

    if (result != -1) {
        printf("Person with ID %d found at index %d\n", searchID, result);
    } else {
        printf("Person with ID %d not found in the register\n", searchID);
    }

    return 0;
}

int binarySearch(int id, Person personRegister[100], int size)
{
    int left = 0;
    int right = size - 1;
    int mid;

    while(left <= right){
        mid = (left + right)/2;
        if (personRegister[mid].id == id){
            return mid;
        }
        else if (personRegister[mid].id < id){
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }
    return -1;

}