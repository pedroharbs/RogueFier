/**
 * \file
 * \brief RogueFier - v1.0 Beta 
 * \author João Pedro HArbs
 * \author Jailson Smidi dos Reis
 * \version 1.0 Beta
 * \date 21 dezembro 2017
*/

#ifndef CIDADE_H
#define CIDADE_H

#include <stdio.h> //printf();, scanf();
#include <stdlib.h> //system();
#include <conio.h> //kbhit, getch();
#include <time.h> //srand, rand();

#include "Jogador.h" //Funções Jogaodr.
#include "Inventario.h" //Funções Inventário

//Caractere # em ASCII.
#define CIDADE char(35)

typedef char charc;
typedef int cidade;

extern cidade pcvida, pcestafa, pmaca, pgarrafa, parmadura;

//Função para gerar sementes para o rand().
void SementeCidade();
//Função que verifica se jogador está em cima da cidade.
void VerificaCidade();
//Função vender itens na cidade.
void VenderCidade();
//Função para recarregar pontos vitais na cidade.
void RecarregarCidade();
//Função que chama interface da cidade.
void CidadeNPC();
#endif