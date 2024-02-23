/*
Exercise 7:
Write a program that determines the chronologically greater date among two dates provided by the user.
Each date should be provided by three integer values, where the first represents a day, the second a month,
and the third a year.


(PT-BR)
Exercício 7:
Escreva um programa que determina a data cronologicamente maior de duas datas fornecidas pelo usuário. 
Cada data deve ser fornecida por três valores inteiros onde o primeiro representa um dia, o segundo um mês 
e o terceiro um ano.
*/

#include <stdio.h>

int main() 
{
   int d1, d2, m1, m2, a1, a2, greater_date;

   printf("First date (day, month, year - one per line):\n");
   scanf("%d %d %d", &d1, &m1, &a1);
   printf("Second date (day, month, year - one per line):\n");
   scanf("%d %d %d", &d2, &m2, &a2);

   if (a1 < a2) {
      greater_date = 2;
   }
   else if (a1 > a2) {
      greater_date = 1;
   }
   else {
      if (m1 < m2) {
         greater_date = 2;
      }
      else if (m1 > m2) {
         greater_date = 1;
      }
      else {
         if (d1 < d2) {
            greater_date = 2;
         }
         else if (d1 > d2) {
            greater_date = 1;
         }
         else {
            greater_date = 0;
         }
      }
   }

   if (greater_date == 1) {
      printf("\nGREATER = %d/%d/%d\n", d1, m1, a1);
   }
   else if (greater_date == 2) {
      printf("\nGREATER = %d/%d/%d\n", d2, m2, a2);
   }
   else {
      printf("\nThe dates are equal\n");
   }

    return 0;
}