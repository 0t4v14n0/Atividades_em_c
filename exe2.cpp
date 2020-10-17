#include <stdio.h>
#include <iostream>
int main () {
   float a, pi, d;
   pi=3.14;     
   printf ("Qual que e o raio ? \n"); 
   scanf ("%f",&a);   
   d=pi*(a*a);
   printf ("area da circunferencia e %f\n",d);
   system("pause");
   return 0; 
}
