#include <stdio.h>

float pesoIdeal(float alt, int sexo){
	float peso;
	if(sexo == 1){
		peso = (72.7 * alt) - 58.0;
	}
	if(sexo == 2){
		peso = (62.1 * alt) - 44.7;
	}
	
	return peso;
}

//---------------------------------------------------------------------------------------

int main(){
	float alt,pi;
	int sexo;
	printf("Digite a altura: ");
	scanf("%f", &alt);
	printf("Digite o sexo:\n 1- Masculino\n 2- Feminino\n");
	scanf("%d", &sexo);
	pi = pesoIdeal(alt, sexo);
	printf("Peso ideal: %.1f", pi);
	return 0;
}
