#include<stdio.h>
void cambio(int a , int b);

void cambio(int a, int b){ 
	int tmp=a;
	a=b;
	b=tmp;
}
int main(){
	int a=1;
	int b=2;
	printf("Antes del cambio a = %d\n", a);
	printf("Antes del cambio b = %d\n", b);
	cambio(a,b); 
	printf("Despues del cambio a = %d\n", a);
	printf("Despues del cambio b = %d\n", b);
	return 0;
}
