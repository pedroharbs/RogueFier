/**
 * \file
 * \brief RogueFier - v1.0 Beta 
 * \author João Pedro HArbs
 * \author Jailson Smidi dos Reis
 * \version 1.0 Beta
 * \date 21 dezembro 2017
*/

#ifndef MAPA_H
#define MAPA_H

#include <stdio.h> //printf();, scanf();
#include <stdlib.h> //system();
#include <conio.h> //kbhit, getch();
#include <time.h> //srand, rand();

#include "Jogador.h" //Funções do Jogador.
#include "Interface.h" //Funções de Interface.
#include "Mover.h" //Posição e Cores.
#include "Monstro.h" //Funções do Monstro.
#include "Npc.h" //Funções do NPC.
#include "Cidade.h" //Funções da Cidade.

//Caractere Y em ASCII.
#define ARVORE char(89)
//Caractere . em ASCII.
#define PLANICIE char(46)
//Caractere ^ em ASCII.
#define MONTANHA char(94)
//Caractere ~ em ASCII.
#define LAGO char(126)
//Caractere # em ASCII.
#define CIDADE char(35)
//Tamanho do Mapa.
#define WORLD_SIZE  501
//Caractere ? em ASCII.
#define CHAR_WALL char(63)

typedef int mapeamento;
typedef char caractere;

extern caractere Mapa[WORLD_SIZE][WORLD_SIZE];

extern mapeamento MapaIniX;
extern mapeamento MapaFimX;
extern mapeamento MapaIniY;
extern mapeamento MapaFimY;

//Função para gerar sementes para o rand().
void Semente();
//Função para gerar caracteres no mapa.
void GeradorMapa();
//Função que gera a cidade.
caractere GeraCidade(mapeamento cx, mapeamento cy);
//Função para desenhar o mapa.
void DesenhaMapa();
//Função para movimento do mapa.
void MoveMapa(caractere Mapa[WORLD_SIZE][WORLD_SIZE], mapeamento y1, mapeamento y2, mapeamento x1, mapeamento x2);
//Função que chama funções de mapa no main.
void FuncsMapa();
//Função para gerar Tesouros, Armaduras e Tesouros Espciais.
void GeraTesouros();
//Função que verifica se jogador está em cima do Tesouro.
void VerificaTesouro();
#endif
