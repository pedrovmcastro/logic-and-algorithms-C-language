/*
Exercise 3:
Create a program that displays a menu of 4 dishes on the screen and a fifth option to exit the program. 
The program should print the selected dish. The program should terminate when the fifth option is chosen.


(PT-BR)
Exercício 3:
Faça um programa que imprima um menu de 4 pratos na tela e uma quinta opção para sair
do programa. O programa deve imprimir o prato solicitado. O programa deve terminar
quando for escolhido a quinta opção.
*/

#include <stdio.h>

int main()
{
    int opt;

    //Print the menu:
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("|                           MENU                              |\n");
    printf("|  1. Classic Beef Burger with Cheese...................$12   |\n");
    printf("|  2. Grilled Chicken...................................$14   |\n");
    printf("|  3. Mushroom Risotto..................................$12   |\n");
    printf("|  4. Vegetarian Pad Thai...............................$10   |\n");
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");

    //Infinite loop:
    while(1) {
        printf("Choose one option (press 5 to exit): ");
        scanf("%d", &opt);

        switch(opt) {
            case 1:
                printf("Classic Beef Burger with Cheese\n");
                break;
            case 2:
                printf("Grilled Chicken\n");
                break;
            case 3:
                printf("Mushroom Risotto\n");
                break;
            case 4:
                printf("Vegetarian Pad Thai\n");
                break;
            case 5:
                printf("End of program\n");
                return 0;
            default:
                printf("Invalid input\n");
                break;
        }        
    }
}