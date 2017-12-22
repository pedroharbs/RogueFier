/**
 * \file
 * \brief RogueFier - v1.0 Beta 
 * \author João Pedro HArbs
 * \author Jailson Smidi dos Reis
 * \version 1.0 Beta
 * \date 21 dezembro 2017
*/

#ifndef INVENTARIO_H
#define INVENTARIO_H

#include <stdio.h> //printf();, scanf();
#include <stdlib.h> //system();
#include <conio.h> //kbhit, getch();
#include <time.h> //srand, rand();
#include "Main.h" //Main.
#include "Jogador.h" //Funções Jogador.

typedef char chr;
typedef int inventario;

extern chr Espaco1[47];
extern chr Espaco2[47];
extern chr Espaco3[47];
extern chr Espaco4[47];
extern chr Espaco5[47];
extern chr Espaco6[20];
extern chr Espaco7[20];
extern chr Espaco8[20];
extern chr Espaco9[20];
extern chr Espaco10[20];

//Função para interface do inventário.
void Inventario();
#endif