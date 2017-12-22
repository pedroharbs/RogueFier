/**
 * \file
 * \brief RogueFier - v1.0 Beta 
 * \author João Pedro HArbs
 * \author Jailson Smidi dos Reis
 * \version 1.0 Beta
 * \date 21 dezembro 2017
*/

#ifndef MONSTRO_H
#define MONSTRO_H

#include <stdio.h> //printf();, scanf();
#include <stdlib.h> //system();
#include <conio.h> //kbhit, getch();
#include <time.h> //srand, rand();
#include "Jogador.h" //Funções do Jogador.
#include "Mapa.h" //Funções do Mapa.

//Caractere I em ASCII.
#define INIMIGO char(73)

typedef int monstro;
typedef char chrm;

extern monstro DanoAdd;
extern chrm ItemM1[20], ItemM2[20], ItemM3[20], ItemM4[20], ItemM5[20], Recompensa[20];
extern monstro Espc6, Espc7, Espc8, Espc9, Espc10;
extern monstro plobo, pcorvo, phumana, pchifres, pcebo;

//Função para esperar certo tempo quando necessario.
void sleep(time_t delay);
//Função para gerar sementes para o rand().
void SementeMonstro();
//Função de danos personagem e monstro.
void Danos();
//Função fuga da batalha.
void Fugir();
//Função para a interface de batalha.
void EncontroMonstro();
//Função que gera os monstros.
void GeraMonstros();
//Função que verifica se jogador está em cima do monstro.
void VerificaMonstro();
#endif
