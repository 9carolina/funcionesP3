#include<stdio.h>
#include<string.h>
void imprimir(int a, char texto[4]){
	int x,y;
	for(x=0;x<a;x++){
		for(y=0;y<strlen(texto);y++){ //strlen para contar el numero de caracteres
			printf(" %c ", texto[y]); 
//nombre'texto'de la variable LOCAL y poder nombrar algunas otras más adelante diferente->ej.cadena, cadena2
		}
	printf("\n");
	}
	printf("\n");
	}
int main(){
	char cadena[]="hola";
	char cadena2[]="mundo";
	imprimir(5, cadena);
	imprimir(4, cadena2);
}
