/*
Exercício 6:
Faça um programa que leia duas sequências de números inteiros distintos e salve cada
sequência em um vetor. Suponha que o número máximo de elementos de uma sequência
é 50. Suponha que cada um destes vetores represente um conjunto contendo os elementos
nele armazenados. O programa deve então salvar em um terceiro vetor o resultado da
união dos dois primeiros vetores e imprimir o resultado.

Exemplo:
v1: [1, 2, 3, 4, 5]
v2: [2, 5, 7, 1, -9, 18]
Resultado: [1, 2, 3, 4, 5, 7, -9, 18]
*/


#include <stdio.h>

int main()
{
    int i, j, k;
    int v1[50], v2[50], resultado[50];
    int tam_v1, tam_v2;

    //entrada de dados:
    printf("tamanho da primeira sequencia:\n");
    scanf("%d", &tam_v1);
    printf("tamanho da segunda sequencia:\n");
    scanf("%d", &tam_v2);

    printf("valores da primeira sequencia:\n");
    for (i = 0; i < tam_v1; i++) {
        scanf("%d", &v1[i]);
    }
    printf("valores da segunda sequencia:\n");
    for (i = 0; i < tam_v2; i++) {
        scanf("%d", &v2[i]);
    }

    //inserindo todos os valores do vetor 1 no vetor resultado:
    for (i = 0; i < tam_v1; i++) {
        resultado[i] = v1[i];
    }
    //depois de verificar todos, e todos forem diferentes, adicione o valor diferente no vetor resultado.
    //verificando quais valores do vetor 2 n�o existem no vetor 1:
    k = tam_v1;
    for (j = 0; j < tam_v2; j++) {
        for (i = 0; i < tam_v1; i++) {
            if (v2[j] != v1[i]) {
                if (i == tam_v1 - 1) {
                    resultado[k] = v2[j];
                    k++;
                }
            }
            else {
                break;
            }
        }
    }

    //sa�da de dados:
    printf("\nv1: [%d", v1[0]);
    for (i = 1; i < tam_v1; i++) {
        printf(", %d", v1[i]);
    }
    printf("]\nv2: [%d", v2[0]);
    for (i = 1; i < tam_v2; i++) {
        printf(", %d", v2[i]);
    }
    printf("]\nResultado: [%d", resultado[0]);
    for (i = 1; i < k; i++) {
        printf(", %d", resultado[i]);
    }
    printf("]\n");

    return 0;
}