#include <stdio.h>
#include <iostream>
int main () {
   float a, d1, d2, d3, ien, eur, dol;
   dol=3.92;
   ien=0.035;
   eur=4.41;
   printf ("Quanto vove quer converter ?\n"); 
   scanf ("%f",&a); 
   d1=a/dol;
   d2=a/ien;
   d3=a/eur;
   printf ("Valor %f convertido em Dolar %f\n", a, d1);
   printf ("Valor %f convertido em Iene %f\n", a, d2);
   printf ("Valor %f convertido em Euro %f\n", a, d3);      
   system("pause");
   return 0; 
}
