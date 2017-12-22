/**
 * \file
 * \brief RogueFier - v1.0 Beta 
 * \author João Pedro HArbs
 * \author Jailson Smidi dos Reis
 * \version 1.0 Beta
 * \date 21 dezembro 2017
*/

#ifndef NPC_H
#define NPC_H

#include <stdio.h> //printf();, scanf();
#include <stdlib.h> //system();
#include <conio.h> //kbhit, getch();
#include <time.h> //srand, rand();
#include "Mapa.h" //Funções do Mapa.

//Caractere P em ASCII.
#define NPC char(80)

typedef int npc;
typedef char caractere;

//Função para aleatorização de frases.
void FuncFrase();
//Função para ajudar o NPC.
void Ajudar();
//Função para direcionamento do NPC.
void Dir();
//Função para interface do NPC.
void EncontraNPC();
//Função comprar itens do NPC.
void Comprar();
//Função para gerar sementes para o rand().
void SementeNPC();
//Função para gerar os NPC's.
void GeraNpcs();
//Função que verifica se jogador está em cima do NPC.
void VerificaNPC();
#endif