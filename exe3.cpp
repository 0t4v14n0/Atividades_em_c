#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
int main () {
   char nome[50];
   char dici[50];
   float a, b;
   float d;
   printf ("Disciplina ?\n");
    scanf("%s",dici);   
   printf ("Nome do aluno ?\n");
    scanf("%s",nome);     
   printf ("Primeira nota parceial...\n"); 
   scanf ("%f",&a);
   printf ("Segunda Nota parcial...\n"); 
   scanf ("%f",&b);   
   d=(a+b)/2;
   printf ("Disciplina: %s\n",dici);
   printf ("Aluno(a): %s\n", nome);
   printf ("Media e: %f\n", d);
   system ("pause");   
   return 0; 
}
