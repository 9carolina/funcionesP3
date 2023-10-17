#include<stdio.h>
void cambio(int *a , int *b);

void cambio(int *a, int *b){ //se le añade * como puntero
	int tmp=*a;
	*a=*b;
	*b=tmp;
}
int main(){
	int a=1;
	int b=2;
	printf("Antes del cambio a = %d\n", a);
	printf("Antes del cambio b = %d\n", b);
	cambio(&a,&b); //& direccion de memoria
	printf("Despues del cambio a = %d\n", a);
	printf("Despues del cambio b = %d\n", b);
	return 0;
}
