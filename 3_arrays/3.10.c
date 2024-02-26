/*

(PT-BR)
Exercício 10:
Escreva um programa que leia uma sequência de números inteiros positivos maiores que
1 e os salva em um vetor. O programa deve ler um número inteiro n que representa o
número de elementos da sequência, depois em seguida os n números e os salvar em um
vetor v. Assuma que o tamanho máximo da sequência é 50.
O programa deve então imprimir um quadrado de n linhas por n colunas onde em cada
posição (i, j) (onde i = 0, . . . , n " 1 e j = 0, . . . , n " 1) deste quadrado deverá ser impresso
1 caso os números v[i] e v[j] sejam coprimos e 0 caso contrário.
Os pares de números v[i] e v[j] são coprimos se não há nenhum divisor d > 1 que seja
comum a ambos. Por exemplo 15 e 8 são coprimos, pois os divisores de 8, que são 2, 4 e 8,
não são divisores de 15. Abaixo temos um exemplo de execução do programa para n = 6
e v = [2, 3, 4, 5, 6, 7].
v[0] v[1] v[2] v[3] v[4] v[5]
v[0] 0 1 0 1 0 1
v[1] 1 0 1 1 0 1
v[2] 0 1 0 1 0 1
v[3] 1 1 1 0 1 1
v[4] 0 0 0 1 0 1
v[5] 1 1 1 1 1 0
Note no exemplo que 2 (v[0]) é coprimo de 3 (v[1]), 5 (v[3]) e 7 (v[5]).
*/

#include <stdio.h>

int main()
{
    int n, num, i, j, k, k1, k2, d, d1, d2;
    int v[50], mat1[50][50], mat2[50][50], div1[50], div2[50];

    //numero de elementos na sequencia:
    printf("Tamanho do vetor: ");
    scanf("%d", &n);

    //ler vetor:
    printf("Elementos do vetor:\n");
    for (i=0; i<n; i++){
        scanf("%d", &num);
        if (num > 1) {
            v[i] = num;
        }
        else {
            printf("adicione valores maiores que 1");
            break;
        }
    }

    //cria��o da matriz n x n:
    if (num != 1) {
        for (i=0; i<n; i++) {
            for (j=0; j<n; j++) {
                mat1[i][j] = v[j];
            }
        }
    }
    /*impress�o da matriz n x n [teste]
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    } */

    //compara��o dos elementos da matriz, se s�o coprimos ou n�o:
    if (num != 1) {
        for (i=0; i<n; i++) {
            for (j=0; j<n; j++) {
                if (i == j) {
                    mat2[i][j] = 0;
                }
                else {
                    k1=0;
                    for (d=2; d <= mat1[i][i]; d++) {
                        if (mat1[i][i]%d == 0) {
                            div1[k1] = d;
                            k1++;
                        }
                    }
                    k2=0;
                    for (d=2; d <= mat1[i][j]; d++) {
                        if (mat1[i][j]%d == 0) {
                            div2[k2] = d;
                            k2++;
                        }
                    }
                    if (k1 >= k2) {
                        for (d1=0; d1 < k1; d1++) {
                            for (d2=0; d2 < k2; d2++) {
                                if (div1[d1] == div2[d2]) {
                                    mat2[i][j] = 0;
                                    d1 = k1;
                                    d2 = k2;
                                }
                                else {
                                    mat2[i][j] = 1;
                                }
                            }
                        }
                    }
                    else {
                        for (d2=0; d2 < k2; d2++) {
                             for (d1=0; d1 < k1; d1++) {
                                if (div1[d1] == div2[d2]) {
                                    mat2[i][j] = 0;
                                    d1 = k1;
                                    d2 = k2;
                                }
                                else {
                                    mat2[i][j] = 1;
                                }
                            }
                        }

                    }
                }
            }
        }
    }

    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            printf("%d ", mat2[i][j]);
        }
        printf("\n");
    }
    /* FEITO PELO CHAT GPT:

#include <stdio.h>

int main() {
    int n;
    printf("Digite o n�mero de elementos da sequ�ncia (n): ");
    scanf("%d", &n);

    if (n <= 1 || n > 50) {
        printf("O n�mero de elementos deve estar entre 2 e 50.\n");
        return 0;
    }

    int v[50];
    printf("Digite os %d n�meros inteiros positivos: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
        if (v[i] <= 1) {
            printf("Os n�meros devem ser maiores que 1.\n");
            return 0;
        }
    }

    printf("\n    ");
    for (int i = 0; i < n; i++) {
        printf("v[%d] ", i);
    }
    printf("\n");

    for (int i = 0; i < n; i++) {
        printf("v[%d] ", i);
        for (int j = 0; j < n; j++) {
            int coprime = 1;
            for (int d = 2; d <= v[i] && d <= v[j]; d++) {
                if (v[i] % d == 0 && v[j] % d == 0) {
                    coprime = 0;
                    break;
                }
            }
            printf(" %d   ", coprime);
        }
        printf("\n");
    }

    return 0;
}*/
    return 0;
}
