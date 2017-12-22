/**
 * \file
 * \brief RogueFier - v1.0 Beta 
 * \author João Pedro HArbs
 * \author Jailson Smidi dos Reis
 * \version 1.0 Beta
 * \date 21 dezembro 2017
*/

#ifndef MAIN_H
#define MAIN_H

#include <stdio.h> //printf();, scanf();
#include <stdlib.h> //system();
#include <conio.h> //kbhit, getch();
#include <time.h> //srand, rand();
#include <string.h> //strcmp
#include <locale.h> //setlocale
#include "Jogador.h"
#include "Mapa.h"
#include "Monstro.h"
#include "Interface.h"
#include "Mover.h"
#include "Npc.h"
#include "Ranking.h"
#include "Cidade.h"

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
//Caractere A em ASCII.
#define PERSONAGEM char(64)

typedef int inteiro;
typedef char caracter;

extern caracter Explorador[10];

#endif