#ifndef JOGADOR_H
#define JOGADOR_H

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include "Mapa.h"
#include "Interface.h"
#include "Inventario.h"
#include "Cidade.h"

#define PERSONAGEM char(64)
#define WORLD_SIZE  501


typedef int jogador;
typedef char carac;

extern jogador Vida;
extern jogador Estafa;
extern jogador Comida;
extern jogador Agua;
extern jogador Ouro;
extern jogador Nivel;
extern jogador Inv;

typedef struct pVitais_ {
	jogador pVida = Vida;
	jogador pEstafa = Estafa;
	jogador pComida = Comida;
	jogador pAgua = Agua;
	jogador pOuro = Ouro;
	jogador pNivel = Nivel;
	jogador pInvent = Inv;
}pVitais;

extern pVitais Vita;

extern carac GuardaLugar;
extern jogador Key;
extern jogador NovaCordX;
extern jogador NovaCordY;
extern jogador JogadorX;
extern jogador JogadorY;
void Verificacoes();
carac CriaJogador(jogador x, jogador y);
carac MoveJogador(jogador CordX, jogador CordY, jogador NovaCordX, jogador NovaCordY, carac Mapa[WORLD_SIZE][WORLD_SIZE], carac Lugar);
void PegaTeclas();
void JogadorVitais();
void ContadorProvimentos();
void Comandos();
void Aposentadoria();
#endif
