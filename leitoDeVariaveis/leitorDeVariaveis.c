#include <stdlib.h>
#include <stdio.h>

int main(){
/*
		%d  inteiro
		%f  real
		%s  strings
		%c  caracteres
*/
	int inteiro;
	char letra;
	float  decimal;
	double  decimal2;
	
	printf("Digite um numero intero\n:");
	scanf("%d" ,&inteiro);
	
	getchar();
	
	printf("Digite uma letra\n:");
	scanf("%c" ,&letra);
	
	printf("Digite um numero decimal\n:");
	scanf("%f" ,&decimal);
	
	printf("Digite outro numero decimal\n:");
	scanf("%lf" ,&decimal2);
	
	printf("O numero inteiro digitado foi: %d\n", inteiro);
	printf("A letra digitada foi: %c\n",letra);
	printf("O numero decimal digitado foi: %f\n",decimal);
	printf("O numero decimal digitado foi: %lf\n", decimal2);
	
	return 0;
}