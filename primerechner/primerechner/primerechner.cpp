#include "pch.h"
#include <stdlib.h>
#include <stdio.h>

int main()
{
	int currentNumber = 0;
	int maxNumber = 100000000;
	double solveNumber;
	float intcheck;

	for (int i = 2; i < maxNumber; i++) {				//Zahl zu prüfen

		for (int j = 2; j < i; j++) {					//Prüfzahlen
			solveNumber = (double)i / j;				//Teile die Zahl durch die Prüfzahl
			intcheck = solveNumber - (int)solveNumber;	//Subtrahiere Ganzzahl von Gleitkommazahl
			if (intcheck == 0) {						//Wenn teilbar: intcheck == 0 -> Ist keine Primzahl
				break;									//breche weitere Berechnungen für diese Zahl ab
			}
			else if (j == i - 1) {						//wenn durch keine Zahl teilbar -> Ist eine Primzahl
				printf("Primzahl: %d\n", i);			//Gebe Zahl mit newline aus
			}
		}
	}

}

