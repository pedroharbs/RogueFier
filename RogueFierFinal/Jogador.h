/**
 * \file
 * \brief RogueFier - v1.0 Beta 
 * \author João Pedro HArbs
 * \author Jailson Smidi dos Reis
 * \version 1.0 Beta
 * \date 21 dezembro 2017
*/

#ifndef JOGADOR_H
#define JOGADOR_H

#include <stdio.h> //printf();, scanf();
#include <stdlib.h> //system();
#include <conio.h> //kbhit, getch();
#include <time.h> //srand, rand();
#include "Mapa.h" //Funções do Mapa.
#include "Interface.h" //Funções de Interface.
#include "Inventario.h" //Funções do Inventário.
#include "Cidade.h" //Funções da Cidade.

//Caractere @ em ASCII.
#define PERSONAGEM char(64)
//Tamanho mapa.
#define WORLD_SIZE  501


typedef int jogador;
typedef char carac;

extern jogador Vida;
extern jogador Estafa;
extern jogador Comida;
extern jogador Agua;
extern jogador Ouro;
extern jogador Nivel;
extern jogador Inv;

typedef struct pVitais_ {
	jogador pVida = Vida;
	jogador pEstafa = Estafa;
	jogador pComida = Comida;
	jogador pAgua = Agua;
	jogador pOuro = Ouro;
	jogador pNivel = Nivel;
	jogador pInvent = Inv;
}pVitais;

extern pVitais Vita;
extern carac GuardaLugar;
extern jogador Key;
extern jogador NovaCordX;
extern jogador NovaCordY;
extern jogador JogadorX;
extern jogador JogadorY;

//Função que cria o jogador.
carac CriaJogador(jogador x, jogador y);
//Função que move o jogador.
carac MoveJogador(jogador CordX, jogador CordY, jogador NovaCordX, jogador NovaCordY, carac Mapa[WORLD_SIZE][WORLD_SIZE], carac Lugar);
//Função para chamar verificaçõe de cidade, tesouro, npc, inimigo, etc.
void Verificacoes();
//Função para mover jogador.
void ChamaFuncsMover();
//Função que verifica tecla apertada.
void PegaTeclas();
//Função para verificar se jogador morre por fome, sede, cansaço ou violência.
void JogadorVitais();
//Função para contar passos e decrementar pontos vitais.
void ContadorProvimentos();
//Função para facilitar chamada de outras funções.
void Comandos();
//Função que verifica se jogador aposentou.
void Aposentadoria();
#endif
