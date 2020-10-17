#include <stdio.h>
#include <iostream>
#include <stdlib.h>
int main () {
   float  distancia, n1, tempo, velmedia;
   
   printf ("Distancia do percurso(KM):\n");
   scanf ("%f",&distancia);      
   printf ("Informe a velocidade media em(KM/H):\n");
   scanf ("%f",&velmedia); 
   
   tempo=distancia/velmedia;
    
   printf ("|---------------------------------------------------------------------------|\n");      
   printf ("|-Tempo medio: %.2f  \n", tempo);
   printf ("|---------------------------------------------------------------------------|\n");
   printf("\n");
   system ("pause");
   return 0; 
}
