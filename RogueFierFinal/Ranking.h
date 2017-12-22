/**
 * \file
 * \brief RogueFier - v1.0 Beta 
 * \author João Pedro HArbs
 * \author Jailson Smidi dos Reis
 * \version 1.0 Beta
 * \date 21 dezembro 2017
*/

#ifndef RANKING_H
#define RANKING_H

#include <stdio.h> //printf();, scanf();
#include <stdlib.h> //system();
#include <conio.h> //kbhit, getch();
#include <time.h> //srand, rand();

#include "Jogador.h" //Funções do Jogador.
#include "Main.h" //Funções do Main.

typedef int rkg;
typedef char crt;

typedef struct{
    crt Nomes[10];
    rkg Pontos;
}Ranking;

//Função que grava usuário no ranking.
void GravaRanking();
//Função que le e ordena o ranking no inicio.
void LeArquivoInicio();
//Função que le e ordena o ranking no final.
void LeArquivoFinal();
//Função para chamar ranking no final.
void FuncsRank();
#endif