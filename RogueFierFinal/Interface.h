/**
 * \file
 * \brief RogueFier - v1.0 Beta 
 * \author João Pedro HArbs
 * \author Jailson Smidi dos Reis
 * \version 1.0 Beta
 * \date 21 dezembro 2017
*/

#ifndef INTERFACE_H
#define INTERFACE_H

#include <stdio.h> //printf();, scanf();
#include <stdlib.h> //system();
#include <conio.h> //kbhit, getch();
#include <time.h> //srand, rand();
#include "Mover.h" //Posição e Cores. 
#include "Main.h" // Main.
#include "Jogador.h" //Funções Jogador.

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
//Caractere @ em ASCII.
#define PERSONAGEM char(64)
//Caractere I em ASCII.
#define INIMIGO char(73)
//Caractere P em ASCII.
#define NPC char(80)
//Caractere $ em ASCII.
#define TESOURO char(36)
//Caractere & em ASCII.
#define ESPECIAL char(38)
//Caractere + em ASCII.
#define ARMADURA char(43)


typedef char interfaces;
typedef int gerador;

extern interfaces Interface[24][79];
//Função que desenha interface.
void FuncsInterface();
//Função de impressão dos marcadores vitais.
void Marcadores();
#endif