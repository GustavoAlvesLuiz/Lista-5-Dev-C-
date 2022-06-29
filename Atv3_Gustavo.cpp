#include <stdio.h>
int fatorial(int num){
	int cont, fat = 1;
	for(cont=1;cont<=num;cont++)
		fat = fat * cont;
	return fat;
}

int main(){
	int n;
	printf("** Fatorial **\n");
	printf("Digite um numero: ");
	scanf("%d",&n);
	printf("Resultado: %d",fatorial(n));
	return 0;
}
