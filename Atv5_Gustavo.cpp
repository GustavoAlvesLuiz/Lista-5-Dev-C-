#include <stdio.h>

int ehPrimo(int num){
	int div;
	for(div=2;div<num;div++){
		if(num%div==0)
			return 0;
	}
	return 1;
}
//-----------------------------------
int main(){
	int num,continua;
	while(1){
		printf("Digite um numero: ");
		scanf("%d",&num);
		if(ehPrimo(num)==1)
			printf("%d eh primo!\n",num);
		else
			printf("%d nao eh primo!\n",num);
	}
	return 0;
}
