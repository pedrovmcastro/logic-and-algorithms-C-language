/*
Exercício 1:
Faça um programa que leia do teclado uma string (possivelmente com espaços) de até 80
caracteres e que então salve a inversa desta string em uma nova string. Refaça o programa
de tal forma que não seja utilizado nenhum vetor adicional! Ou seja, devemos computar a
inversa no próprio vetor original da string lida.
*/

#include <stdio.h>

int main()
{

    char st[80], troca;
    int i, j, tam;

    fgets(st, 80, stdin);

    //Determinar o tamanho da string:
    for (tam=0; (st[tam] != '\0') && (st[tam] != '\n'); tam++)
        ;
    //Outra forma: tam = strlen(st) (utilizando a biblioteca string.h);

    //Determinar a inversa:
    for (i = 0, j = tam-1; i < tam/2; i++, j--) {
        troca = st[j];
        st[j] = st[i];
        st[i] = troca;
    }

    //Saida de dados:
    printf("%s\n", st);

    return 0;
}
