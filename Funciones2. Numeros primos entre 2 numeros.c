#include<stdio.h>
int checarNumerosPrimos(int n); //se advierte que una función futura va a existir
int main(){
	int n1, n2, i, bandera;
	printf("Ingresar dos numeros: ");
	scanf("%d %d", &n1, &n2);
	printf("Primos entre %d y %d son: ", n1, n2);
	for(i=n1+1;i<n2;++i){
		bandera=checarNumerosPrimos(i);
		if(bandera==1)
		printf("%d \n", i);
	}
	return 0;
}
int checarNumerosPrimos(int n){ //aqui se desarrolla la funcion
	int j;
	for(j=2;j<=n/2;j++){
		if(n%j==0){
			return 0;
		}
	}
	return 1;
}
