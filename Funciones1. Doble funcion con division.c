#include<stdio.h>
int sum(int a, int b){
	int resultado=a+b;
	return (resultado);
}
float prom(int a, int b, int c, int d){
	return((a+b+c+d)/2.0);
}
int main(){
	printf("Res: %.2f\n", prom(1,2,2,3));
	printf("Res: %.2f\n", prom(5,6,7,8));
	printf("Res: %.2f\n", prom(9,10,11,12));
	return 0;
}
