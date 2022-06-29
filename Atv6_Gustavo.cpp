#include <stdio.h>

int ehPrimo(int num){
	int div;
	if(num==1 || num==-1)
		return 0;
	for(div=2;div<num;div++){
		if(num%div==0)
			return 0;
	}
	return 1;
}
//-----------------------------------
int qtdPrimos(int n){
	int cont, qtd=0;
	for(cont=1;cont<=n;cont++){
		if(ehPrimo(cont)==1)
			qtd++;
	}
	return qtd;
}
//-----------------------------------
int main(){
	int n, resp;
	printf("Digite um numero: ");
	scanf("%d", &n);
	resp = qtdPrimos(n);
	printf("Quantidade de primos entre 1 e %d = %d",n,resp);
	return 0;
}
