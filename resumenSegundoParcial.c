/*
Tande, Matias Emanuel.
Resumen:
-Funciones y metodos
-Cadenas
-Arreglos y Matrices
*/


#include <stdio.h>
#include <conio.h>
#include <string.h>//libreria ultizada para el menejo de string



int main(){	

	
	
	//Declaracion de una Cadena o String
	/*
	siempre se debe tener en cuenta un caracter adicional a la cadena mas larga
	que se vaya a guardar, esto para guardar en la terminacion de la cadena un 
	nulo el cual se especifica con '\0'
	En el siguiente ejemplo la cadena quedaria compuesta de la siguiente forma:
	
	char cadena[5] = {'h','o','l','a','\0'} 
	
	(Las dos formas de inicializar la cadena son equivalentes)	
	*/
	char unString[5] = "hola";
	char unaCadena[] = {' ','m','u','n','d','o','\0'};
	printf ("%s\n",unString);
	
	int i = strcmp(unString,"hola");
	if (i==0){
		printf("Son iguales");
	}else{
		printf("No son iguales");
	}
	
	
	// la funcion strlen(cadena); retorna la longitud de la cadena
	
	printf("\nLongitud del string: %d\n",strlen(unString));
	for (int i=0 ; i<4 ; i++){
		printf("%c\n",unString[i]);
		
	}
	
	
	printf("\nLongitud de la cadena: %d\n",strlen(unaCadena));
	for (int i=0 ; i<6 ; i++){
		printf("%c\n",unaCadena[i]);
	}
	
	//la funcion strcat(cadena1, cadena2); agrega una cadena a otra
	strcat(unString,unaCadena);
	printf("\n%s\n",unString);
	
	/*i = strcmp(unString,"hola mun");
	if (i==0){
		printf("Son iguales");
	}else{
		printf("No son iguales");
	}*/
	
	printf("\n%s\n",unString);
	
	
	getch();
	return 0;
	
}
