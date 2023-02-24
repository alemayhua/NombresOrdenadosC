#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

	typedef char cadena[30];
	cadena nombre[30], aux;
	int bandera, cantidad;

	puts("Ingrese la cantidad de nombres: ");
	scanf("%d", &cantidad);
	
	for(int i = 0; i < cantidad; i++) {
		printf("Ingrese nombre %d: ", i);
		_flushall();
		gets(nombre[i]);
	}

	system("cls");

	do {
		bandera = 0;
		for(int i = 0; i < cantidad - 1; i++) {
			if(strcmp(nombre[i], nombre[i + 1]) > 0) {
				strcpy(aux, nombre[i]);
				strcpy(nombre[i], nombre[i + 1]);
				strcpy(nombre[i + 1], aux);
				bandera = 1;
			}
		}
	} while(bandera == 1);
	
	puts("Nombres ordenados: ");
	
	for(int i = 0; i < cantidad; i++){
		puts(nombre[i]);
	}
	
	return (0);
}