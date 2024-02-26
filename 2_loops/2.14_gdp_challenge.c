/*
Exercise 14 (CHALLENGE):
The goal of this algorithm is to find the triennium with the highest average growth rate of the Gross Domestic Product (GDP)
based on a sequence of GDP values over a range of years.

The input for this problem consists of a positive integer n, representing the number of years considered.
Then, there will be n lines, each containing a real number representing the GDP of a specific year in the sample.

The output contains only one line, which prints the phrase "the highest average growth was between years X and Y: Z",
where X and Y represent the first and last year of the triennium with the highest average growth (considering the first year as year 0),
and Z is the average percentage growth of this triennium with one decimal place. In case of a tie, Z will be the older triennium.


(PT-BR)
Exercício 14 (DESAFIO):
O objetivo deste algoritmo é encontrar o triênio com a maior taxa de crescimento médio do Produto Interno Bruto (PIB)
com base em uma sequência de valores do PIB ao longo de um intervalo de anos.

A entrada para este problema é composta por um inteiro positivo n, que representa a quantidade de anos considerados.
Em seguida, haverá n linhas, cada uma contendo um número real que representa o PIB de um determinado ano da amostra.

A saída contém  apenas uma linha, em que imprime a frase "a maior media e crescimento foi entre os anos X e Y: Z"
Na qual X e Y representam o primeiro e último ano do triênio com maior crescimento médio (considerando o primeiro ano como o ano 0),
e Z o crescimento médio percentual deste triênio com uma casa decimal. Em caso de empate, Z será o triênio mais antigo.
*/

#include <stdio.h>

int main()
{
    int n, X, Y;
    float p0, p1, c1, c2, c3, cm, Z;

    // We use variables "p0" and "p1" to store the values of two GDP entries,
    // the variables will be relational, using the strategy
    // of an initial GDP (or previous) and a final GDP (or current). "c1, c2, and c3" will store
    // the values of the growth for a specific year, and "cm" the average growth of a triennium.
    // Initially, we disregard "c1" since the growth related to year 0 is null.
    // Therefore, the calculation of "cm" (average growth) relative to the first triennium will only occur
    // between "c2" and "c3".


    scanf("%d %f %f", &n, &p0, &p1);

    c2 = (p1 - p0) * 100 / p0;

    p0 = p1;
    scanf("%f", &p1);

    c3 = (p1 - p0) * 100 / p0;

    cm = (c2 + c3) / 3;

    Z = cm;
    X = 0;
    Y = 2;

    // After the calculation of the first triennium and inserting initial values for the output variables,
    // we start a loop to calculate the average growth related to the "n" GDP entries.
    // The loop begins by updating the variables used in the previous calculations, then a new calculation
    // is made with the new GDP entry, and finally, a comparison with the if statement to
    // check if the new average growth is the highest.


    for (int i = 3; i < n; i++) {
        p0 = p1;
        c1 = c2;
        c2 = c3;

        scanf("%f", &p1);
        c3 = (p1 - p0) * 100 / p0;

        cm = (c1 + c2 + c3) / 3;

        if (cm > Z) {
            Z = cm;
            X = i - 2;
            Y = i;
        }
    }

    printf("the highest average growth was between years %d and %d: %.1f", X, Y, Z);

    return 0;
}