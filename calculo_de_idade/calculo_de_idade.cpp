//Cálculo de idade:

#include<stdio.h>

int main(){
	int anoatual,nascimento,idade;
	puts("Informe o ano atual: ");
	scanf("%d",&anoatual);
	puts("Informe o ano do seu nascimento: ");
	scanf("%d",&nascimento);
	idade=anoatual-nascimento;
	printf("Sua idade e: %d",idade);
	return 0;
}