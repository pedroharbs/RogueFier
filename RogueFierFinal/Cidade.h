#ifndef CIDADE_H
#define CIDADE_H

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

#include "Jogador.h"
#include "Inventario.h"

#define CIDADE char(35)

typedef char charc;
typedef int cidade;

extern cidade pcvida, pcestafa, pmaca, pgarrafa, parmadura;

void SementeCidade();
void VerificaCidade();
void VenderCidade();
void RecarregarCidade();
void CidadeNPC();
#endif