#include <stdio.h>
#include <stdlib.h>

char cpf1(char cpf2[14]){		
		char keep;
		char sinal = '.';
		char sinal1 = '-';
	
	scanf("%s", cpf2);
	 if (cpf2[3] != sinal){
		printf("o cpf digitado esta escrito incorretamente.\nTente novamente\n");
		cpf1(cpf2);
	 }else if  (cpf2[7] != sinal){
		 printf("o cpf digitado esta escrito incorretamente.\nTente novamente\n");
		 cpf1(cpf2);
	 }else if  (cpf2[11] != sinal1){
		 printf("o cpf digitado esta escrito incorretamente.\nTente novamente\n");
		 cpf1(cpf2);
	 }else
		
return keep;
}

char dtNasc(char dtNasc1[11]){
	char sinal = '/';
	char keep2;
	
	scanf("%s", dtNasc1);
	if (dtNasc1[2] != sinal){
		printf("a data digitada esta incorreta.\nTente novamente.\n ");
		dtNasc(dtNasc1);
	}else if(dtNasc1[5] != sinal){
		printf("a data digitada esta incorreta.\nTente novamente.\n ");
		dtNasc(dtNasc1);
	}else
return keep2;
}


int main(){
	char pnome[200][30];
	char ultnome[20][30];
	char dtNasc1[11];
	char senha[20];
	int x, y;
	char cpf2[14];
	char keep;
	char keep2;
	FILE *dados;
	
	printf("Bem vindo ao sitema integrado de Arendelle.\nDigite 1 para fazer seu login.\nCaso nao tenha cadastro digite 2.\n");
	scanf("%d", &x);
	if (x = 1){
		printf("Vamos comecar seu cadastro em nosso sistema, por gentileza digite os dados solicitados abaixo.\n");
		printf("Digite seu primeiro nome.\n");
		scanf("%s", pnome[1]);
		printf("Digite seu sobrenome.\n");
		scanf("%s", ultnome[1]);
		printf("Agora digite seu cpf:(escreva no inserindo os pontos e o traco. Exemplo:(000.000.000-00))\n");
		cpf1(cpf2);
		keep;
		printf("Digite sua data de nascimento.(Digite a data inserindo as barras. Exemplo:(00/00/00000))\n");
		dtNasc(dtNasc1);
		keep2;
		dados = fopen ("usuarios.txt", "w");
		fprintf(dados, pnome[1]);
		fprintf(dados, ultnome[1]);
		fprintf(dados, cpf2);
		fprintf(dados, dtNasc1);
	// }else if(x = 2){
		// printf("Digite seu nome e senha para acessar os dados de sua conta.\n");
		// scanf("%s", nUsuario);
		// while(nUsuario =! pnome[1]);
			// if 
	}
return 0;
}