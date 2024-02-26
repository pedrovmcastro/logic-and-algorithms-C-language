/*
Exercício 3:
Faça um programa que leia do teclado uma string (possivelmente com espaços) de até 80
caracteres e que então salve a string lida em uma nova removendo-se os espaços extras
entre as palavras.
Exemplo de entrada:
Out of the night that covers me
e vetor resultante:
Out of the night that covers me
Refaça o programa de tal forma que não seja utilizado nenhum vetor adicional! Ou seja
devemos deixar a string sem espaços extras no próprio vetor original da string lida sem o
uso de nenhum outro vetor auxiliar.
*/

#include <stdio.h>

int main()
{
    char st[80];
    int i, j, tam;

    fgets(st, 80, stdin);

    tam = strlen(st);

    for(i=0; i<tam-1; i++) {
        if (st[i] == ' ' && st[i+1] == ' ') {
            tam--;
            for (j=i; j<tam; j++) {
                st[j] = st[j+1];
            }
            i--;
        }
    }

    printf("%s", st);


    return 0;
}
