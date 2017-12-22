/**
 * \file
 * \brief RogueFier - v1.0 Beta 
 * \author João Pedro HArbs
 * \author Jailson Smidi dos Reis
 * \version 1.0 Beta
 * \date 21 dezembro 2017
*/

#include "Interface.h"

interfaces Interface[24][79] = {
"                             ++------------------------++--------------------+",
"                             ||                        ||Tecle C Para Digitar|",
"                             ++------------------------++Comandos:           |",
"                             ||Vida:     | Estafa:     ||invent! - Inventário|",
"                             ||Agua:     | Comida:     ||sair! - Sair Do Game|",
"                             ||Ouro:                   ||nada! - Nada Ocorre |",
"                             ||Nivel:                  ||                    |",
"                             ||------------------------||                    |",
"                             ||Inventário:             ||                    |",
"                             ||------------------------||                    |",
"                             ||     X:     | Y:        ||                    |",
"                             ++------------------------++                    |",
"                             ||                        ||                    |",
"                             ||                        ||                    |",
"                             ||                        ||                    |",
"                             ||                        ||                    |",
"                             ||                        ||                    |",
"                             ||                        ||                    |",
"                             ||                        ||                    |",
"                             ||                        ||                    |",
"                             ||                        ||                    |",
"+----------------------------+|                        ||                    |",
"|                            ||                        ||                    |",
"+----------------------------++------------------------++--------------------+" };

//Função que desenha interface.
void FuncsInterface() {
	MoveCursor(0, 0);

	for (gerador i = 0; i < 24; i++){
		for (gerador j = 0; j < 79; j++){
			printf("%c", Interface[i][j]);
		}
		printf("\n");
	}
}

//Função de impressão dos marcadores vitais.
void Marcadores() {

	pVitais Vita;


	MoveCursor(37, 3);
	tCor(4);
	printf("%i", Vita.pVida);

	MoveCursor(51, 3);
	tCor(10);
	printf("%i", Vita.pEstafa);

	MoveCursor(37, 4);
	tCor(9);
	printf("%i", Vita.pAgua);

	MoveCursor(51, 4);
	tCor(15);
	printf("%i", Vita.pComida);

	MoveCursor(37, 5);
	tCor(6);
	printf("%i", Vita.pOuro);

	MoveCursor(38, 6);
	tCor(5);
	printf("%i", Vita.pNivel);

	MoveCursor(43, 8);
	tCor(3);
	printf("%i/10", Vita.pInvent);

	MoveCursor(39, 10);
	tCor(7);
	printf("%i", NovaCordX);

	MoveCursor(48, 10);
	tCor(7);
	printf("%i", NovaCordY);


	MoveCursor(32, 1);
	tCor(6);
	printf("Jogador: %s", Explorador);

	MoveCursor(31, 12);
	tCor(8);
	printf("--------Legendas--------");

	MoveCursor(35, 13);
	tCor(15);
	printf("@ - Jogador");

 MoveCursor(35, 14);
 tCor(5);
 printf("+ - Armadura");

	MoveCursor(35, 15);
	tCor(2);
	printf("Y - Florestas"); // NPC Florestas

	MoveCursor(35, 16);
	tCor(6);
	printf("^ - Montanhas"); // NPC Montanhas

	MoveCursor(35, 17);
	tCor(7);
	printf(". - Planicies"); // NPC Planicies

	MoveCursor(35, 18);
	tCor(9);
	printf("~ - Rios/Lagos"); // NPC Rios/Lagos

	MoveCursor(35, 19);
	tCor(13);
	printf("P - NPC's"); // NPC's

	MoveCursor(35, 20);
	tCor(4);
	printf("I - Inimigos"); // NPC Inimigos

	MoveCursor(35, 21);
	tCor(10);
	printf("$ - Tesouros"); // NPC Tesouros

	MoveCursor(35, 22);
	tCor(3);
	printf("# - Cidade  Natal"); // Cidade Natal

	tCor(7);
}