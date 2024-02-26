/*
Exercício 4:
Escreva um programa que leia duas palavras do teclado e determina se a segunda é um
anagrama da primeira. Uma palavra é um anagrama de outra se todas as letras de uma
ocorrem na outra, em mesmo número, independente da posição. Exemplos: ROMA, MORA,
ORAM, AMOR, RAMO são anagramas entre si.


DICA if (sorted(stringA) == sorted(stringB))

*/

#include <stdio.h>
#include <string.h>

int main()
{
    //declaracao das variaveis:
    char palavra1[80], palavra2[80];
    int i, j, tam;
    int iguais, anagramas = 1;

    //entrada  de  dados:
    printf("primeira palavra:\n");
    fgets(palavra1, 80, stdin);
    printf("segunda palavra:\n");
    fgets(palavra2, 80, stdin);

    //comparacao das palavras:
        //se as palavras s�o de mesmo tamanho;
        //se na palavra 1 cont�m todas as letras da palavra 2;
        //se na palavra 2 cont�m todas as letras da palavra 1;

    tam = strlen(palavra1)- 1;

    if (strlen(palavra1) == strlen(palavra2)) {
        for (i=0; i<tam ; i++) {
            iguais = 0;
            for(j=0; j<tam; j++) {
                if (palavra1[i] == palavra2[j]){
                    iguais++;
                }
            }
            if (iguais == 0) {
                anagramas = 0;
                break;
            }
        }
        for (j=0; j<tam ; j++) {
            iguais = 0;
            for(i=0; i<tam; i++) {
                if (palavra1[i] == palavra2[j]){
                    iguais++;
                }
            }
            if (iguais == 0) {
                anagramas = 0;
                break;
            }
        }
    }

    //saida de dados:

    if (anagramas) {
        printf("sao anagramas");
    }
    else {
        printf("nao sao anagramas");
    }



    return 0;
}
