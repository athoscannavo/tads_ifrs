#include<stdio.h>


int quadrado(int *ptr_n);
int cubo(int *ptr_n);

int main(){
	int n;
	printf("Digite o numero: ");
	scanf("%d",&n); 
	
	printf("\n %d ",quadrado(&n));
	printf("\n %d ",cubo(&n));
	return 0;
}


int quadrado(int *ptr_n){
return *ptr_n * *ptr_n;
}

int cubo(int *ptr_n){
return *ptr_n * *ptr_n * *ptr_n;
}


