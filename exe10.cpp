#include <stdio.h>
#include <iostream>
#include <string.h>
#include <stdlib.h>
int main () {
   float sala, e, f, g, h, i,sb,o,j;
   int horat, depen, horex;
   char nomef[50];
   char nomee[50];
   printf ("Nome da Empresa:\n");
   scanf ("%s",nomee);
   printf ("Nome do Funcionario:\n");
   scanf ("%s",nomef);
   printf ("Salario minimo:\n");
   scanf ("%f",&sala);
   printf ("Horas Trabalhadas:\n");
   scanf ("%f",&horat); 
   printf ("Numero de Dependentes:\n");
   scanf ("%f",&depen);
   printf ("Hora extra:\n");
   scanf ("%f",&horex);
   h=(sala/10);
   e=(horat*h);
   f=(horex*(h*1.5));
   i=(sala*0.05);
   g=(depen*i);
   sb=(e+g+f);
   o=(sb*0.1);
   j=(sb-o);
   printf ("|---------------------------------------------------------------------------|\n");      
   printf ("|-Nome da Empresa:              %s\n",nomee);
   printf ("|-Nome do Funcionario:          %s\n",nomef);
   printf ("|-Salario bruto R$: %f\n", sb);
   printf ("|-Salario liquido R$: %f\n", j);   
   printf ("|---------------------------------------------------------------------------|\n");
   printf("\n");
   system ("pause");
   return 0; 
}
