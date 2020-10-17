#include <stdio.h>
#include <iostream>
#include <string.h>
int main () {
   float a, b, c, d, e, f, g, h, i;
   char nomef[50];
   char nomee[50];
   
   printf ("Nome da empresa:\n");
   scanf ("%s",nomee);
   printf ("Nome do funcionario?\n");
   scanf ("%s",nomef);
   printf ("Salario minimo empresa:\n");
   scanf ("%f",&a);
   printf ("Comissao por carro vendido:\n");
   scanf ("%f",&b);
   printf ("Valor total de vendas :\n");
   scanf ("%f",&c);
   printf ("Porcentagem pelo valor total de vendas:\n");
   scanf ("%f",&d);              
   printf ("Funcionario vendeu quantos carros ?\n"); 
   scanf ("%f",&e);
   f=d/100;
   i=c*f;
   g=e*b;
   h=a+i+g;
   printf ("|-------------------------------------|\n");      
   printf ("|-Nome da empresa: %s\n",nomee);
   printf ("|-Nome do funcionario: %s\n",nomef);
   printf ("|-Salario Do Funcionario: %f\n",h);
   printf ("|-------------------------------------|\n");
   printf("\n");
   system ("pause");
   return 0; 
}
