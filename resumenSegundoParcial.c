/*
Tande, Matias Emanuel.
Resumen:
-Funciones y metodos
-Cadenas
-Arreglos y Matrices
*/


#include <stdio.h>
#include <conio.h>



int main(){	

	
	
	//Declaracion de una Cadena o String
	/*
	siempre se debe tener en cuenta un caracter adicional a la cadena mas larga
	que se vaya a guandar, esto para guardar en la terminacion de la cadena un 
	nulo el cual se especifica con '\0'
	En el siguiente ejemplo la cadena quedaria compuesta de la siguiente forma:
	
	char cadena[5] = {'h','o','l','a','\0'} 
	
	(Las dos formas de inicializar la cadena son equivalentes)	
	*/
	char unString[5] = "hola";
	printf ("%s",unString);
	
	

	
	
	
	
	getch();
	return 0;
	
}
