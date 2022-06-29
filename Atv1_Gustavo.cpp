#include <stdio.h>

int ehPar(int num){
	if(num%2==0)
		return 1;
	else
		return 0;
}

int main(){
	int n, num, cont, soma=0;
	printf("Quantidade de valores: ");
	scanf("%d",&n);
	for(cont=1;cont<=n;cont++){
		printf("Valor %d:",cont);
		scanf("%d",&num);
		if(ehPar(num)==1)
			soma=soma+num;
	}
	printf("Soma dos pares:%d\n", soma);
	return 0;
}
