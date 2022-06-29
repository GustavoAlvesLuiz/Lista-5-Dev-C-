#include <stdio.h>
float notas(float n1,float n2,float n3,int freq){
	float media;
	media = (n1+n2+n3)/3;
	if(media>=6 && freq>=75){
		return 1;
	}
	else if(media<6 && media>=4 && freq>=75){
		return 2;
	}
	else if (media<4 || freq<75){
		return 3;
	}
}
//-------------------------------------------------------
int main(){
	float n1,n2,n3,media;
	int freq,r;
	printf("Digite as tres notas:\n ");
	scanf("%f%f%f",&n1,&n2,&n3);
	printf("Digite a frequencia: ");
	scanf("%d",&freq);
	r = notas(n1,n2,n3,freq);
	if(r==1){
		printf("Aprovado");
	}
	else if(r==2){
		printf("Final");
	}
	else if(r==3){
		printf("Reprovado");
	}
	return 0;	
}

