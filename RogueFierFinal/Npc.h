#ifndef NPC_H
#define NPC_H

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include "Mapa.h"

#define NPC char(80)

typedef int npc;
typedef char caractere;

void FuncFrase();
void Ajudar();
void Dir();
void EncontraNPC();
void Comprar();
void SementeNPC();
void GeraNpcs();
void VerificaNPC();
#endif