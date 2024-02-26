/*
Exercício 8:
Faça um programa que leia duas palavras e verifique se uma delas pode ser obtida por
meio da remoção de letras da outra. A ordem das letras não pode ser alterada.
Por exemplo:
moda é uma subsequência em moradia
cereja é uma subsequência em cerveja
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char palavra1[50], palavra2[50], troca[50];
    int tam1, tam2, i, j, k, aux;
    int todasLetras = 0, mesmaOrdem = 0;

    //entrada de dados:
    fgets(palavra1, 50, stdin);
    fgets(palavra2, 50, stdin);

    //remover o caractere de nova linha '\n':
    palavra1[strcspn(palavra1, "\n")] = '\0';
    palavra2[strcspn(palavra2, "\n")] = '\0';

      //tamanho das strings:
    tam1 = strlen(palavra1);
    tam2 = strlen(palavra2);

    //inverter a ordem das palavras, no caso do usuario digitar a string maior primeiro:
    if (tam1 > tam2) {
        strcpy(troca, palavra1);
        strcpy(palavra1, palavra2);
        strcpy(palavra2, troca);
        tam1 = strlen(palavra1);
        tam2 = strlen(palavra2);
    }

    //verificar se palavra 2 tem todas as letras da palavra 1:
    for(i=0; i<tam1; i++) {
        for(j=0; j<tam2; j++){
            if (palavra1[i] == palavra2[j]) {
                todasLetras++;
                break;
            }
        }
    }
    if (todasLetras != tam1) {
        todasLetras = 0;
    }

    //verificar se as letras estao na mesma ordem:
    aux = tam1;
    if (todasLetras){
        for(i=0; i<tam1; i++) {
            for(j=0; j<tam2; j++) {
                if (palavra1[i] == palavra2[j]) {
                    k = j;
                    break;
                }
            }
            if (k < aux) {
                mesmaOrdem = 1;
                aux++;
            }
        }
    }

    if (mesmaOrdem) {
        printf("%s eh uma subsequencia em %s\n", palavra1, palavra2);
    }
    else {
        printf("nao ha subsequencia\n");
    }

    return 0;
}
