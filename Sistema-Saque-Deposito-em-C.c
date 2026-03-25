#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float saldo = 1000;

void depositar(float valor){
	printf("Digite o valor do deposito: ");
	scanf("%f", &valor);
	saldo = saldo + valor;
}

void sacar(float valor){
	printf("Digite o valor do saque: ");
	scanf("%f", &valor);
	if(saldo < valor){
		printf("Nao foi possivel sacar, saldo insuficiente\n");
	}
	else{
		saldo = saldo - valor;
	}
}

int main(int argc, char *argv[]) {
	int opcao;
	float valor;
	
	printf("Voce deseja depositar ou sacar dinheiro? (Digite 1 para deposito ou 2 para saque): ");
	scanf("%d", &opcao);
	
	if(opcao == 1){
		depositar(valor);
	}
	else if(opcao == 2){
		sacar(valor);
	}
	else{
		printf("Opcao invalida\n");
	}
	
	printf("O saldo atual eh: %.2f\n", saldo);
	
	return 0;
}
