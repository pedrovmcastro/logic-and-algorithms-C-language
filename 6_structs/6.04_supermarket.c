/*
Exercise 4:
Suppose we create a structure to store supermarket products:

typedef struct Product{
    char name[80];
    double price;
    int quantity;
} Product;

Implement two functions, one that returns the array sorted by prices and another that returns
the array sorted by the quantity of items in stock. The prototypes are:
void sortPrice(Product arr[], int n);
void sortQuantity(Product arr[], int n);


(PT-BR)
Exercício 4:
Suponha que criamos uma estrutura para armazenar produtos de um supermercado:

typedef struct Produto{
char nome[80];
double preco;
int quantidade;
}Produto;

Implemente duas funções, uma que devolve o vetor ordenado por preços e outra que devolve
o vetor ordenado pela quantidade de itens no estoque. Os protótipos são:
void ordenaPreco(Produto vet[], int n);
void ordenaQuant(Produto vet[], int n);
*/

#include <stdio.h>

typedef struct Product{
    char name[80];
    double price;
    int quantity;
}Product;

void orderPrice(Product arr[], int n);
void orderQuantity(Product arr[], int n);

int main()
{
    Product products[100] = {
        {"Apple", 2.99, 150},
        {"Bread", 3.49, 100},
        {"Salmon", 9.99, 75},
        {"Spinach", 1.99, 200},
        {"Eggs (dozen)", 4.49, 50}
    };

    orderPrice(products, 5);
    printf("Order by price:\n");
    for(int i=0; i<5; i++){
        printf("%s\n", products[i].name);
    }

    orderQuantity(products, 5);
    printf("\nOrder by quantity:\n");
    for(int i=0; i<5; i++){
        printf("%s\n", products[i].name);
    }

    return 0;
}

void orderPrice(Product arr[], int n)
{
    Product tmp;
    int changes=1;

    while(changes){
        changes = 0;
        for(int i=0; i<n-1; i++){
            if(arr[i].price > arr[i+1].price){
                tmp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = tmp;
                changes = 1;
            }
        }
    }
}

void orderQuantity(Product arr[], int n)
{
    Product tmp;
    int changes=1;

    while(changes){
        changes = 0;
        for(int i=0; i<n-1; i++){
            if(arr[i].quantity > arr[i+1].quantity){
                tmp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = tmp;
                changes = 1;
            }
        }
    }
}