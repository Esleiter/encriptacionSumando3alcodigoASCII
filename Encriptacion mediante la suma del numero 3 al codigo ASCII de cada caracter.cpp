/*
	Nombre: Encriptacion mediante la suma del numero 3 al codigo ASCII de cada caracter
	Autor: Esleiter Jose Fajardo Laya
	Fecha: 26/11/20
	Lugar: Venezuela
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	system("color F0");
	printf("\n Desarrollado por Esleiter Fajardo \n\n");
	
	int x;
	//char frase[50];
	
	char frase[50] = {'h', 'o', 'l', 'a', '\0'};
	
	//printf("introduzca una frase: ");
	//gets(frase);
	
	for(x=0; x < 50; x++)
	{
		if (frase[x]!='\0')
		{
			frase[x]=frase[x]+3;
		}
	}
	
	printf("\n Frase encriptada: %s\n\n", frase);
	
	system("PAUSE");
	return 0;
}
