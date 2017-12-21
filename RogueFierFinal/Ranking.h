#ifndef RANKING_H
#define RANKING_H

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

#include "Jogador.h"
#include "Main.h"

typedef int rkg;
typedef char crt;

typedef struct{
    crt Nomes[10];
    rkg Pontos;
}Ranking;


void GravaRanking();
void LeArquivoInicio();
void LeArquivoFinal();
void FuncsRank();
#endif