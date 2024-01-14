/* um programa em linguagem C que mostra todos os caracteres que tem representação gráfica na linguagem humana contidos na tabela ASCII nos sistemas de numeração: Binário, Octal, Decimal e Hexadecimal.*/



#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char ch; 
	printf ("Digite um caracter qualquer: "); 
	scanf ("%c", &ch);	
	printf ("O caracter digitado convertido em codigo ASCII\n"); 
	printf ("corresponde ao inteiro: %d\n", ch);
	printf ("Corresponde ao hexadecimal: 0x%x\n", ch);
	printf ("Corresponde ao octal: %o \n", ch);
	printf ("Corresponde ao binario: %0b \n", ch);
	return 0;
  
}