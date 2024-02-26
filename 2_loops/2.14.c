/*
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

    // Utilizamos as vari�veis "p0" e "p1" para guardar os valores de duas entradas de PIB, as vari�veis ser�o relacionais, utilizando-se a estrat�gia
    // de um PIB inicial (ou anterior) e um PIB final (ou atual). "c1, c2 e c3" guardar�o os valores do crescimento de um ano em espec�fico,
    // e "cm" o crescimento m�dio de um tri�nio. Inicialmente desconsideramos o "c1" j� que o crescimento relacionado ao ano 0 � nulo.
    // Logo, o c�lculo do "cm" (crescimento m�dio) relativo ao primeiro tri�nio se dar� apenas entre "c2" e "c3".

    scanf("%d %f %f", &n, &p0, &p1);

    c2 = (p1 - p0)*100/p0;

    p0 = p1;
    scanf("%f", &p1);

    c3 = (p1 - p0)*100/p0;

    cm = (c2 + c3)/3;

    Z = cm;
    X = 0;
    Y = 2;

    // Depois do c�lculo do primeiro tri�nio e de inserir valores iniciais para as v�riaveis da sa�da, iniciamos um loop para calcular os crescimentos m�dios
    // relacionados �s "n" entradas de PIB. Inicia-se o loop atualizando as v�riaveis utilizadas nos c�lculos anteriores, em seguida � feito um novo c�lculo
    // com a nova entrada de PIB, e por fim uma compara��o com a condicional if para verificar se o novo crescimento m�dio � o maior.

    for (int i = 3; i < n; i++) {
        p0 = p1;
        c1 = c2;
        c2 = c3;

        scanf("%f", &p1);
        c3 = (p1 - p0)*100/p0;

        cm = (c1 + c2 + c3)/3;

        if (cm > Z) {
            Z = cm;
            X = i - 2;
            Y = i;
        }
    }

    printf("a maior media de crescimento foi entre os anos %d e %d: %.1f", X, Y, Z);

    return 0;
}