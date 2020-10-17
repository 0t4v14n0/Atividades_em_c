#include <stdio.h>
#include <iostream>
#include <string.h>
#include <stdlib.h>
int main () {
   float  distancia, consumo, tempo, velmedia, kmlitro;
   char nomef[50];
   char nomee[50];
   
   printf ("Modelo do carro:\n");
   scanf ("%s",nomee);
   printf ("Nome do proprietario %s :\n",nomee);
   scanf ("%s",nomef);
   printf ("Faz quantos KM por L:\n");
   scanf ("%f",&kmlitro);      
   printf ("Informe o tempo gasto na viagem em horas:\n");
   scanf ("%f",&tempo);
   printf ("Informe a velocidade media em (KM/H):\n");
   scanf ("%f",&velmedia); 
   
   distancia=tempo*velmedia;
   consumo=distancia/kmlitro; 
    
   printf ("|---------------------------------------------------------------------------|\n");      
   printf ("|-Nomde do veiculo: %s\n",nomee);
   printf ("|-Nome do Proprietario: %s\n",nomef);
   printf ("|-Consumo: %.f L \n", consumo);
   printf ("|-Distancia: %.f KM \n", distancia);
   printf ("|---------------------------------------------------------------------------|\n");
   printf("\n");
   system ("pause");
   return 0; 
}
