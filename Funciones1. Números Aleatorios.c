#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int aleatorio(int max, int min){
	return(rand()%(max+1-min)+min);
}
int main(){
	srand(time(NULL));
	printf("Aleatorio: %d", aleatorio(10,1)); //nums aleatorios entre el 10 y el 1
	int x, lista[10];
	for (x=0;x<10;x++)
		lista[x]=aleatorio(9,1); //nums aleatorios entre el 9 y el 1
	printf("\n");
	for (x=0;x<10;x++)
		printf("%d ", lista[x]);
		
	return 0;
}
