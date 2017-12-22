/**
 * \file
 * \brief RogueFier - v1.0 Beta 
 * \author João Pedro HArbs
 * \author Jailson Smidi dos Reis
 * \version 1.0 Beta
 * \date 21 dezembro 2017
*/

#include "Main.h"

caracter Explorador[10];

inteiro main(inteiro argc, caracter** argv){
LL_01:

  system("title RogueFier v1.0 Beta");
		setlocale(LC_ALL, "Portuguese");
		printf("+------------------------------------------------------------------------------+");
		printf("+       _____    _____  ____  _   _  _____    ______  __  _____  _____         +");
		printf("+      |   _ |  |     ||    || | | ||     |  |      ||  ||     ||   _ |        +");
		printf("+      |  | ||  |  _  ||  __|| | | ||  ___|  |   ___||  ||  ___||  | ||        +");
		printf("+      |  |_||_ | | | || |__ | |_| || |___   |  |___ |  || |___ |  |_||_       +");
		printf("+      |   __  || |_| || || ||     ||  ___|  |   ___||  ||  ___||   __  |      +");
		printf("+      |  |  | ||     || |_|||     || |___   |  |    |  || |___ |  |  | |      +");
		printf("+      |__|  |_||_____||____||_____||_____|  |__|    |__||_____||__|  |_|      +");
		printf("+                                                                              +");
		printf("+------------------------------------------------------------------------------+");
		printf("+-----------------------Seja bem-vindo ao RogueFier v1.0-----------------------+");
		printf("+------------------------------------------------------------------------------+");
		printf("Este projeto 'RogueFier - v1.0 Beta' foi feito em Linguagem C para a matéria de Programação I do Curso de Análise e Desenvolvimento de Sistemas do IFSP Campus  Barretos.\nBuscamos aplicar os conceitos aprendidos em sala como vetores, registros, modularização, arquivos, ponteiros etc. Para isso, implementamos um jogo de temática  Roguelike.\n");
		printf("\nSelecione uma opção: \n1 - Jogar\n2 - Ranking\n3 - Sair\n");
		do {
			inteiro Input;
			Input = getch();
			switch (Input) {
			case '1': {
				printf("\nDigite seu Nome Bravo Explorador: ");
				scanf("%s", Explorador);
				system("CLS");

				FuncsInterface();
				MoveCursor(0, 0);
				FuncsMapa();
				Marcadores();
				
				while (inteiro I = 113)
				{
        Aposentadoria();
					if (kbhit()) { PegaTeclas(); }

				}
			}
					  break;
			case '2':
			{
       LeArquivoInicio();
       goto LL_01;
			}break;
			case '3': {
				printf("Até Logo!");
				sleep(2);
				exit(0);
			}break;
			default: {
				
				break;
			}
			}

		} while (Key != '3');

	return 0;


}



