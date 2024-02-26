/*
Exercício 6:
Faça um programa que leia um texto T (com espaços) e uma palavra p do teclado. Em
seguida o programa deverá imprimir todas as posições onde ocorrem a palavra p em T .
Se por exemplo T = "duas bananas e 4 abacates. Nao havera mais bananas.", e p ="bananas",
então o programa deveria imprimir 5 e 43.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char T[140], p[20];
    int pos[80];
    int tamT, tamp, i, j, k=0, aux;

    //entrada de dados:
    printf("Texto:\n");
    fgets(T, 140, stdin);
    printf("palavra: ");
    fgets(p, 20, stdin);

    //tamanho do texto e palavra:
    tamT = strlen(T)-1;
    tamp = strlen(p)-1;

    //busca da palavra no texto:
    for (i=0; i<tamT; i++) {
        if (T[i] == p[0]) {
            aux = i;
            for (j=1, i=i+1; j<=tamp; j++, i++) {
                if (p[j] != T[i]) {
                    break;
                }
            }
            if (j == tamp) {
                pos[k] = aux;
                k++;
            }
        }
    }

    //saida de dados:
    printf("posicoes = ");
    for (i=0; i<k; i++) {
        if(i!=k-1){
            printf("%d e ", pos[i]);
        }
        else {
            printf("%d", pos[i]);
        }
    }

    return 0;
}
