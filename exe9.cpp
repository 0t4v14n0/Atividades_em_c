#include <stdio.h>
#include <iostream>
#include <string.h>
#include <stdlib.h>
int main () {
   float valor, multa, dias, juros, e, f, g, h, i;
   char nomef[50];
   char nomee[50];
   printf ("Banco:\n");
   scanf ("%s",nomee);
   printf ("Nome do Cliente, %s\n",nomee);
   scanf ("%s",nomef);
   printf ("Valor da conta:\n");
   scanf ("%f",&valor);
   printf ("Quantos dias de atraso:\n");
   scanf ("%f",&dias); 
   printf ("Multa por dia de atraso:\n");
   scanf ("%f",&multa);
   printf ("Porcentagem de juros:\n");
   scanf ("%f",&juros);
   h=juros/100;
   e=multa*dias;
   f=h*valor;
   i=f*dias;
   g=valor+e+i;
   printf ("|---------------------------------------------------------------------------|\n");      
   printf ("|-Nome do Banco:                         %s\n",nomee);
   printf ("|-Nome do Cliente:                       %s\n",nomef);
   printf ("|-Valor da conta: R$%.2f\n",valor);   
   printf ("|-O valor da multa por %.0f dias de atraso e: R$%.2f\n", dias, e);
   printf ("|-O valor dos juros a ser pago por %.0f dias de atraso e: R$%.2f\n", dias, i);
   printf ("|-O valor total da conta a ser pago ja com a multa e juros e: R$%.2f\n",g);
   printf ("|---------------------------------------------------------------------------|\n");
   printf("\n");
   system ("pause");
   return 0; 
}
