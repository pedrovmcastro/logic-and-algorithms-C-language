/*
Exercise 5:
Create a function that receives two arrays of integers representing sets of integers
and returns another array with the result of the union of the two sets. The resulting array
should be dynamically allocated.
The function prototype is:
int *unionSet(int v1[], int n1, int v2[], int n2);
where n1 and n2 indicate the number of elements in v1 and v2 respectively.


(PT-BR)
Exercício 5:
Faca uma funcao que recebe como parametro dois vetores de inteiros
representando conjuntos de numeros inteiros, e devolve um outro
vetor com o resultado da uniao dos dois conjuntos. O vetor resultante
deve ser alocado dinamicamente.
O prototipo da funcao eh:
int *uniao(int v1[ ], int n1, int v2[ ], int n2);
onde n1 e n2 indicam o numero de elementos em v1 e v2 respectivamente.
*/

#include <stdio.h>
#include <stdlib.h>

int *unionSet(int v1[], int n1, int v2[], int n2);

int main()
{
    int *v1, *v2, *vRes, n1, n2, nRes;

    printf("Size of set 1: ");
    scanf("%d", &n1);
    printf("Size of set 2: ");
    scanf("%d", &n2);

    v1 = malloc(n1 * sizeof(int));
    v2 = malloc(n2 * sizeof(int));

    printf("Set 1:\n");
    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &v1[i]);
    }
    printf("Set 2:\n");
    for (int i = 0; i < n2; i++)
    {
        scanf("%d", &v2[i]);
    }

    vRes = unionSet(v1, n1, v2, n2);

    printf("Resulting set = ");
    for (int i = 0; i < nRes; i++)
    {
        printf("%d ", vRes[i]);
    }

    free(v1);
    free(v2);
    free(vRes);

    return 0;
}

int *unionSet(int v1[], int n1, int v2[], int n2)
{
    int *vConcat, *vRes, n = 0;
    int *tam = &n1;

    vConcat = malloc((n1 + n2) * sizeof(int));
    vRes = malloc((n1 + n2) * sizeof(int));

    for (int i = 0; i < n1; i++)
    {
        vConcat[i] = v1[i];
    }
    for (int i = 0; i < n2; i++)
    {
        vConcat[i + n1] = v2[i];
    }

    for (int i = 0; i < (n1 + n2); i++)
    {
        int repeated = 0;
        for (int j = 0; j < n; j++)
        {
            if (vConcat[i] == vRes[j])
            {
                repeated = 1;
                break;
            }
        }
        if (!repeated)
        {
            vRes[n] = vConcat[i];
            n++;
        }
    }

    *tam = n;

    free(vConcat);

    return vRes;
}