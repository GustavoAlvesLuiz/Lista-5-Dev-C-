#include <stdio.h>

int fib(int num){
	int x = 0, y = 1, res = 0,i;
	
	for(i = 1; i < num; i++){
		res = x + y;
		x = y;
		y = res;
	}
	return res;
}
//--------------------------------------
int main(){
	int num, sf;
	printf("Digite um numero: ");
	scanf("%d", &num);
	sf = fib(num);
	printf("O termo %d da sequencia fibonacci e: %d", num, fib(num));
	return 0;
}
