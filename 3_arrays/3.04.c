/*
(PT-BR)
Exercício 4:
Dadas duas sequências de n e m valores inteiros, onde n <= m, escreva um programa que
verifica quantas vezes a primeira sequência ocorre na segunda.
Exemplo:
primeira sequência: 1 0 1
segunda sequência: 1 1 0 1 0 1 0 0 1 1 0 1 0
Resultado: 3 
*/

#include <stdio.h>

int main()
{
    int n, m, i, j, k, cont=0;

    printf("digite o tamanho das sequencias n e m, respectivamente:\n");
    scanf("%d %d", &n, &m);

    int sequencia1[n], sequencia2[m];

    if (n <= m) {
        //entrada de dados:
        printf("valores da sequencia n:\n");
        for (i=0; i<n; i++)
            scanf("%d", &sequencia1[i]);
        printf("valores da sequencia m:\n");
        for (i=0; i<m; i++)
            scanf("%d", &sequencia2[i]);

        //checagem das sequencias:
        for (i=0; i<m; i++) {
            k = i;
            for (j=0; j<n; j++) {
                if (sequencia1[j] == sequencia2[k]) {
                    if (j == n-1) {
                        cont++;
                    }
                }
                else {
                    j = n;
                }
            }
        }

        //impress�o dos resultados:
        printf("primeira sequencia: ");
        for (i=0; i<n; i++) {
            printf("%d ", sequencia1[i]);
        }

        printf("\nsegunda sequencia: ");
        for (i=0; i<m; i++) {
            printf("%d ", sequencia2[i]);
        }

        printf("\nResultado = %d\n", cont);
    }
    else
        printf("valores invalidos. (n <= m)\n");

    return 0;
}
