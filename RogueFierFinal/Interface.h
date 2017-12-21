#ifndef INTERFACE_H
#define INTERFACE_H

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include "Mover.h"
#include "Main.h"
#include "Jogador.h"

#define ARVORE char(89)
#define PLANICIE char(46)
#define MONTANHA char(94)
#define LAGO char(126)
#define CIDADE char(35)
#define PERSONAGEM char(64)
#define INIMIGO char(73)
#define NPC char(80)
#define TESOURO char(36)
#define ESPECIAL char(38)
#define ARMADURA char(43)
#define BORDAY char(124)
#define BORDAX char(45)
#define CANTO char(43)


typedef char interfaces;
typedef int gerador;

extern interfaces Interface[24][79];
void FuncsInterface();
void Marcadores();
#endif