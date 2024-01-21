/*faça umm programa para pegar dados de teclado para aparecer na tela

nome cpf data de nsacimento altura filho ou n e emprego atual*/

#include <stdio.h>
#include <stdlib.h>

// teste de mudança 21-01-24
// "outro comentario"
// terceiro comentario
int main(){
	char nome[20], cpf[20], datNs[20], empAtual[20];
	float alt;
	char flhs[20];
	
	printf("seja bem vindo.\n por favor insira os dados pedidos: \n insira o seu nome.");
	scanf("%s", nome);
	printf("agora insira seu cpf:\n");
	scanf("%s", cpf);
	printf("agora por gentileza insira sua data de nascimento:\n");
	scanf("%s", datNs);
	printf("agora por gentileza insira sua altura.(em centimetros)\n");
	scanf("%f", &alt);
	printf("O senhor(a) tem filhos(digite S para sim e N para nao)\n");
	scanf("%s", flhs);
	printf("para finalizar digite seu emprego atual:\n");
	scanf("%s", empAtual);
	printf("\n\n");
	
	
	printf("os seus dados digitados foram:\n o seu nome e: %s \n", nome);
	printf("o seu cpf e: %s\n", cpf);
	printf("a sua data de nascimento e: %s\n", datNs);
	printf("a sua altura e: %f \n",alt );
	printf("tem filhos: %s\n", flhs);
	printf("o seu emprego atual e: %s\n", empAtual);
	
	return 0;
}