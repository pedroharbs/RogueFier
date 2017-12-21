#ifndef MONSTRO_H
#define MONSTRO_H

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include "Jogador.h"
#include "Mapa.h"

#define INIMIGO char(73)

typedef int monstro;
typedef char chrm;

extern monstro DanoAdd;
extern chrm ItemM1[20], ItemM2[20], ItemM3[20], ItemM4[20], ItemM5[20], Recompensa[20];
extern monstro Espc6, Espc7, Espc8, Espc9, Espc10;
extern monstro plobo, pcorvo, phumana, pchifres, pcebo;

void sleep(time_t delay);
void SementeMonstro();
void Danos();
void Fugir();
void EncontroMonstro();
void GeraMonstros();
void VerificaMonstro();
#endif
