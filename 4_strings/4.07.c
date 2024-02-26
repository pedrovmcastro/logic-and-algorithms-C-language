/*
Exercício 7:
Escreva um programa que lê uma string de até 50 caracteres, e imprime "Palindromo"caso
a string seja um palindromo e "Nao Palindromo" caso contrário. OBS: Um palindromo
é uma palavra ou frase, que é igual quando lida da esquerda para a direita ou da direita
para a esquerda (assuma que só são usados caracteres minúsculos e sem acentos. Espaços
em brancos devem ser descartados). Exemplo de palindromo: saudavel leva duas.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char string[50];
    int tam, i, j, aux;
    int palindromo = 1;

    //entrada de dados:
    fgets(string, 50, stdin);

    //tamanho da string:
    tam = strlen(string) - 1;

    //verificacao de palindromo:

    //1- eliminar os espacos em branco e juntar as palavras:
    for (i=0; i<tam; i++) {
        if (string[i] == ' ') {
            for (j=i; j<tam; j++) {
                string[j] = string[j+1];
            }
            tam--;
            i--;
        }
    }

    //2- verificar se a string � igual a sua inversa:
    for(i=0, j=tam-1; i<(tam-1)/2; i++, j--) {
        if (string[i] != string[j]) {
            palindromo = 0;
            break;
        }
    }

    //3- verificar valor booleano de palindromo e saida de dados:
    if (palindromo) {
        printf("Palindromo\n");
    }
    else {
        printf("Nao Palindromo\n");
    }

    printf("%s\n", string);
    return 0;
}
