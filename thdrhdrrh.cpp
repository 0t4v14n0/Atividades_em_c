#pragma hdrstop
 
#include <tchar.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
 
//---------------------------------------------------------------------------
 
#pragma argsused
const KM_LITRO = 12;
 
void _tmain(){
	SetConsoleTitleA("Algoritmo 00013 - Algoritmos sequenciais. Show Delphi.");
	printf("Algoritmo 00013 - Algoritmos sequenciais. Show Delphi.\n");
	system("chcp 1252 > nul");
 
	printf("\nInforme o tempo gasto na viagem em horas: ");
	float vTempo;
	scanf("%f", &vTempo);
 
	printf("\nInforme a velocidade média em KM/H: ");
	float vVelMedia;
	scanf("%f", &vVelMedia);
 
	float vDistancia = vTempo * vVelMedia;
	float vConsumo = vDistancia / KM_LITRO;
 
	printf("\nA distancia percorida foi de: %-7.2f KM", (vDistancia));
	printf("\nO consumo foi de: %-7.2f litros", (vConsumo));
 
	printf("\n\n");
	system("pause");
}
