#include<stdio.h>
int main (void){
	float preco,valor;
	valor = 1000;
	printf("Digite o pre�o do celular: ");
	scanf("%f",&preco);
	if(preco*3.17<valor){
		printf("Bom negocio!!");
	}
	else{
		printf("Pronto!");
		}
	scanf("%f",&valor);
	return 0;
}
