#include <stdio.h>
#include <iostream>
int main () {
   float a, b, d, c, e;     
   printf ("Quantos KG de racao ? (Kg)\n"); 
   scanf ("%f",&a);
   printf ("Quantidade de racao dada aos dois gatos (g):\n"); 
   scanf ("%f",&b);   
   c=a*1000;
   e=b*5;
   d=c-e;
   printf ("Os seus gatos comen em 1 dia %.0f em 5 dias %.0f\n", b, e);
   printf ("Sobra do saco de %.0f KG: %.0f\n", a, d);
   system("pause");
   return 0; 
}
