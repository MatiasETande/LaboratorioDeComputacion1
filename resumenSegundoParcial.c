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
	char unString[] = "hola";
	char otroString[] = {' ','m','u','n','d','o','\0'};
	char unaPalabra[]="hola";
	printf ("%s\n",unString);
	printf ("%s\n",otroString);
	
	//Cagar una cadena por teclado
	char tuNombre[20];
	printf("Ingrese su nombre: \n");
	scanf("%s",&tuNombre);
	printf("Su nombre es: %s\n",tuNombre);
	
	
	//Recorrer una cadena
	
	/*
	el indice de la cadena empieza con el numero 0
	unString = {	h	o	l	a	'\0'   }
	Indice   = {	0	1	2	3	 4	   } osea  0 <= i <= (n-1)
	*/
	
	//usando un cliclo for
	for ( int i=0 ; i<4 ; i=i+1)
	{
		printf("caracter posicion %d: %c\n",i,unString[i]);
	}
	
	//usando while
	int z=0;
	char caracter=unString[z];
	
	while(caracter!='\0')
	{
		
		printf("caracter posicion %d: %c\n",z,unString[z]);
		z=z+1;
		caracter = unString[z];
	}
	
	//cargar una cadena caracter a caracter
	caracter ='a';
	// char unaPalabra[]="hola";
	int j=(0);
	printf("ingrese 4 caracteres\n");
	
	while(j<=4)
	{
		
		
		printf("%d: ",j);
		scanf("%c\n",&caracter);
		unaPalabra[j]=caracter;
		j++;
		

	}
	
	printf("\ndespues: %s\n",unaPalabra);
	
	/*j=(-1);
	while(j<4)
	{
		j=j+1;
		printf("\n %c \n",unaPalabra[j]);
		
		
	}*/
	
	printf("000 %c -",unaPalabra[0]);
	printf("111 %c -",unaPalabra[1]);
	printf("222 %c -",unaPalabra[2]);
	printf("333 %c -",unaPalabra[3]);
	printf("%c\n",unaPalabra[4]);
	
	getch();
	return 0;
	
}
