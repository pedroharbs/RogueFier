#ifndef MAPA_H
#define MAPA_H

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

#include "Jogador.h"
#include "Interface.h"
#include "Mover.h"
#include "Monstro.h"
#include "Npc.h"
#include "Cidade.h"

#define ARVORE char(89)
#define PLANICIE char(46)
#define MONTANHA char(94)
#define LAGO char(126)
#define CIDADE char(35)
#define WORLD_SIZE  501
#define CHAR_WALL char(63)

typedef int mapeamento;
typedef char caractere;

extern caractere Mapa[WORLD_SIZE][WORLD_SIZE];

extern mapeamento MapaIniX;
extern mapeamento MapaFimX;
extern mapeamento MapaIniY;
extern mapeamento MapaFimY;
void Semente();
caractere GeraCidade(mapeamento cx, mapeamento cy);
void GeradorMapa();
void DesenhaMapa();
void MoveMapa(caractere Mapa[WORLD_SIZE][WORLD_SIZE], mapeamento y1, mapeamento y2, mapeamento x1, mapeamento x2);
void FuncsMapa();
void GeraTesouros();
void VerificaTesouro();
#endif
