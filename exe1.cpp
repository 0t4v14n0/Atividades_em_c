#include <stdio.h>
#include <iostream>
int main () {
   float a, b, d;     
   printf ("Qual ea altura? \n"); 
   scanf ("%f",&a);
   printf ("Qual ea Base? \n"); 
   scanf ("%f",&b);   
   d=(a*b)/2;
   printf ("Area do triangulo e %f\n",d);
   system("pause");
   return 0; 
}
