#include <stdio.h>
int pot(int base, int exp){
	int r=1, i;
	for(i=1;i<=exp;i++){
	r = r*base;	
	}
	return r;
}
//----------------------------------------------
int main(){
	int base, exp, r;
	printf("Digite a base: ");
	scanf("%d", &base);
	printf("Digite o expoente: ");
	scanf("%d", &exp);
	r = pot(base, exp);
	printf("%d",r);
	return 0;
}
