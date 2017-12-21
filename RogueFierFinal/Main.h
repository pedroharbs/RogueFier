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

#define ARVORE char(89)
#define PLANICIE char(46)
#define MONTANHA char(94)
#define LAGO char(126)
#define CIDADE char(35)
#define PERSONAGEM char(64)

typedef int inteiro;
typedef char caracter;

extern caracter Explorador[10];

#endif