/*
(PT-BR)
Exercício 5:
Faça um programa que leia duas sequências de números inteiros distintos e salve cada
sequência em um vetor. Suponha que o número máximo de elementos de uma sequência
é 50. Suponha que cada um destes vetores represente um conjunto contendo os elementos
nele armazenados. O programa deve então salvar em um terceiro vetor o resultado da
interseção dos dois primeiros vetores e imprimir o resultado.

Exemplo:
v1: [1, 2, 3, 4, 5]
v2: [2, 5, 7, 1, -9, 18]
Resultado: [1, 2, 5]
*/

#include <stdio.h>

int main()
{
    int i, j, k = 0;
    int arr1[50], arr2[50], result[50];
    int tam1, tam2;

    //entrada de dados:
    printf("tamanho da primeira sequencia:\n");
    scanf("%d", &tam1);
    printf("tamanho da segunda sequencia:\n");
    scanf("%d", &tam2);

    if (tam1 > 50 || tam2 > 50) {
        printf("Too many values (max=50)");
        return 1;
    }

    printf("valores da primeira sequencia:\n");
    for (i = 0; i < tam1; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("valores da segunda sequencia:\n");
    for (i = 0; i < tam2; i++) {
        scanf("%d", &arr2[i]);
    }

    //compara��o dos valores:
    for (i = 0; i < tam1; i++){
        for (j = 0; j < tam2; j++) {
            if (arr1[i] == arr2[j]) {
                result[k] = arr1[i];
                k++;
                j = tam2;
            }
        }
    }

    //sa�da de dados:
    printf("\nv1: [%d", arr1[0]);
    for (i = 1; i < tam1; i++) {
        printf(", %d", arr1[i]);
    }
    printf("]\nv2: [%d", arr2[0]);
    for (i = 1; i < tam2; i++) {
        printf(", %d", a[i]);
    }
    printf("]\nResultado: [%d", result[0]);
    for (i = 1; i < k; i++) {
        printf(", %d", result[i]);
    }
    printf("]\n");

    return 0;
}
