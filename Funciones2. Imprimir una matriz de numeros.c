#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void ImprimeMatriz(int m[3][3]){
	int i=0, j=0;
	for(i=0;i<3;++i){
		for(j=0;j<3;++j){
			printf("%d ", m[i][j]);
		}
		printf("\n");
	}	
}
int main(){
	int x=0,y=0;
	srand(time(NULL));
	int matriz[3][3];
	for (x=0;x<3;++x){
		for(y=0;y<3;++y){
			matriz[x][y]=rand()%(10+1-1)+1;
		}
	}
	printf("Impresion matriz\n");
	ImprimeMatriz(matriz);
	return 0;
}
