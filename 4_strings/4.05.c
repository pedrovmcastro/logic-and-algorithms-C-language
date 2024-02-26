/*
Exercício 5:
Faça um programa que leia duas strings e elimine, da segunda string, todas as ocorrências
dos caracteres da primeira string
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char string1[80], string2[80];
    int tam1, tam2, i, j, k;

    //entrada de dados:
    printf("primeira string: ");
    fgets(string1, 80, stdin);
    printf("segunda string: ");
    fgets(string2, 80, stdin);

    //tamanho das strings:
    tam1 = strlen(string1)-1;
    tam2 = strlen(string2)-1;

    //verificando as letras da string 1 (loop externo):
    for (i=0; i<tam1; i++) {
        for (j=0; j<tam2; j++) {
            if (string1[i] == string2[j]) {
                //vai verificar todas letras da palavra 2,
                //e compar�-las com apenas uma letra da palavra 1 (loop interno);
                for (k=j; k<tam2; k++) {
                    string2[k] = string2[k+1];
                    //vai trocar as posicoes da string 2, e vai substituir toda letra pela seguinte.
                    //(loop de substituicao);
                }
            }
        }
    }

    //saida de dados:
    printf("String 2 = %s\n", string2);


    return 0;
}
