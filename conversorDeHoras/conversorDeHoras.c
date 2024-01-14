/*5. Um intervalo de tempo pode ser dado em dias, horas, minutos, segundos ou sequências
"decrescentes" destas unidades (em dias e horas; em horas e minutos; em horas, minutos e segundos), de
acordo com o interesse de quem o está manipulando. Escreva um programa que converta um intervalo de
tempo dado em segundos para horas, minutos e segundos. Por exemplo, se o tempo dado for 3 850 segundos,
o programa deve fornecer 1 h 4 min 10 s.
*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){

	int hrs, mins, segs; 
	
	printf("digite a quantidade de segundos abaixo:\n");
	scanf("%d" ,&segs);
	
	hrs = 3600 / segs;  /* calculo incorreto */
	mins = segs % 3600 / 60;
	segs = segs % 60;
	
	printf("A hora convertida em segudos sera de:\n %d:%d:%d", hrs, mins, segs);
	
	return 0;
	
	
}


