#include <stdio.h>

int soma(int x){
	int total = 0, n, i;
	for(i = 1; i <= x; i++){
		printf("Digite o valor %d: ", i);
		scanf("%d", &n);
		total += n;
	}
	
	return total;
}

//-----------------------------------------------------------------

int main(){
	
	int cont, n, s;
	
	printf("Digte a quantidade de numeros a serem somados: ");
	scanf("%d", &cont);
	s = soma(cont);
	printf("Soma: %d", s);

	return 0;
}
