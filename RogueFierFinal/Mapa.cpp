/**
 * \file
 * \brief RogueFier - v1.0 Beta 
 * \author João Pedro HArbs
 * \author Jailson Smidi dos Reis
 * \version 1.0 Beta
 * \date 21 dezembro 2017
*/

#include "Mapa.h"

//Função para gerar sementes para o rand().
void Semente() {
	return srand(time(NULL));
}

caractere Mapa[WORLD_SIZE][WORLD_SIZE];
caractere GeraMapa[21] = {MONTANHA,ARVORE,LAGO,ARVORE,LAGO,PLANICIE,PLANICIE,PLANICIE,PLANICIE,PLANICIE,PLANICIE,PLANICIE,PLANICIE,PLANICIE,PLANICIE,PLANICIE,PLANICIE,PLANICIE,PLANICIE,PLANICIE,PLANICIE};
mapeamento MapaIniX = 241;
mapeamento MapaFimX = 261;
mapeamento MapaIniY = 237;
mapeamento MapaFimY = 265;

//Função para gerar caracteres no mapa.
void GeradorMapa(){

	Semente();
	mapeamento k = sizeof GeraMapa / sizeof *GeraMapa;

for (mapeamento x = 1; x <WORLD_SIZE - 1; x++){ //Gera caracteres Eixo X
	for(mapeamento y = 1 ; y <WORLD_SIZE - 1; y++){ //Gera caracteres Eixo Y
		Mapa[x][y] = GeraMapa[rand() % k];
	}
}

for (mapeamento ly = 0; ly < WORLD_SIZE; ly++) { //Gera Borda Eixo Y ESQUERDO
	   Mapa[WORLD_SIZE - WORLD_SIZE][ly] = CHAR_WALL;
}

for (mapeamento ry = 0; ry < WORLD_SIZE; ry++) { //Gera Borda Eixo Y DIREITO
    Mapa[WORLD_SIZE - 1][ry] = CHAR_WALL;
}

for (mapeamento ux = 0; ux < WORLD_SIZE; ux++) { //Gera Borda Eixo X CIMA
    Mapa[ux][WORLD_SIZE] = CHAR_WALL;
}

for (mapeamento dx = 0; dx < WORLD_SIZE; dx++) { //Gera Borda Eixo X BAIXO
    Mapa[dx][WORLD_SIZE - 1] = CHAR_WALL;
}

}

//Função que gera a cidade.
caractere GeraCidade(mapeamento cx, mapeamento cy) {
    caractere *p;
    caractere Cidade = CIDADE;
    p = (caractere *)malloc(Cidade * sizeof(caractere));
    p = &Cidade;

    Mapa[cx][cy - 1] = LAGO;
    Mapa[cx][cy + 1] = LAGO;
    Mapa[cx - 1][cy] = LAGO;
    Mapa[cx + 1][cy] = LAGO;

    return Mapa[cx][cy] = *p;

}

//Função para gerar Tesouros, Armaduras e Tesouros Espciais.
void GeraTesouros() {

		Semente();
		for (mapeamento i = 1; i<2000; i++) { //Gera Tesouro
      Mapa[1 + rand() % 245][1 + rand() % 245] = TESOURO;
      Mapa[255 + rand() % 243][255 + rand() % 243] = TESOURO;
		}

  Semente();
  for (mapeamento j = 1; j<2; j++) { //Gera Tesouro Especial
      Mapa[1 + rand() % 245][1 + rand() % 245] = ESPECIAL;
      Mapa[255 + rand() % 243][255 + rand() % 243] = ESPECIAL;
  }

  Semente();
  for (mapeamento j = 1; j<2; j++) { //Gera Armadura
      Mapa[1 + rand() % 245][1 + rand() % 245] = ARMADURA;
      Mapa[255 + rand() % 243][255 + rand() % 243] = ARMADURA;
  }

}

//Função que verifica se jogador está em cima do Tesouro.
void VerificaTesouro() {

 Semente();
 mapeamento e = 9000 + rand() % 25000;

 if (GuardaLugar == ESPECIAL) {
     GuardaLugar = PLANICIE;
     Ouro += e;
 }

 if (GuardaLugar == ARMADURA) {
     GuardaLugar = PLANICIE;
     Ouro += e;
 }

 Semente();
 mapeamento r = 1 + rand() % 50;

 if (GuardaLugar == TESOURO) {
     GuardaLugar = PLANICIE;
     Ouro += r;
 }


}

//Função para desenhar o mapa.
void DesenhaMapa(){

	for (mapeamento x = MapaIniX; x <= MapaFimX; x++) //Desenha Mapa Eixo X
	{
		for (mapeamento y = MapaIniY; y <= MapaFimY; y++) //Desenha Mapa Eixo Y
		{
			if (Mapa[x][y] == CIDADE) {
				tCor(3);
				printf("%c", Mapa[x][y]);
				tCor(7);
			}
			else if (Mapa[x][y] == INIMIGO) {
				tCor(4);
				printf("%c", Mapa[x][y]);
				tCor(7);
			}
			else if (Mapa[x][y] == TESOURO) {
				tCor(10);
				printf("%c", Mapa[x][y]);
				tCor(7);
			}
			else if (Mapa[x][y] == NPC) {
				tCor(13);
				printf("%c", Mapa[x][y]);
				tCor(7);
			}
			else if (Mapa[x][y] == LAGO) {
				tCor(9);
				printf("%c", Mapa[x][y]);
				tCor(7);
			}
			else if (Mapa[x][y] == PLANICIE) {
				tCor(7);
				printf("%c", Mapa[x][y]);
			}
			else if (Mapa[x][y] == MONTANHA) {
				tCor(6);
				printf("%c", Mapa[x][y]);
				tCor(7);
			}
			else if (Mapa[x][y] == ARVORE) {
				tCor(2);
				printf("%c", Mapa[x][y]);
				tCor(7);
			}
			else if (Mapa[x][y] == PERSONAGEM) {
				tCor(15);
				printf("%c", Mapa[x][y]);
				tCor(7);
			}
   else if (Mapa[x][y] == CHAR_WALL) {
       tCor(7);
       printf("%c", Mapa[x][y]);
   }
   else if (Mapa[x][y] == ESPECIAL) {
       tCor(30);
       printf("%c", Mapa[x][y]);
   }
   else if (Mapa[x][y] == ARMADURA) {
       tCor(5);
       printf("%c", Mapa[x][y]);
   }
			else {
				tCor(7);
			}
		}
		printf("\n");
	}

}

//Função para movimento do mapa.
void MoveMapa(caractere Mapa[WORLD_SIZE][WORLD_SIZE], mapeamento y1, mapeamento y2, mapeamento x1, mapeamento x2){
	FuncsInterface();
	Marcadores();
	MoveCursor(0, 0);
	for (mapeamento y = 0; y < WORLD_SIZE; y++) {  //Move Mapa Eixo Y
		for (mapeamento x = 0; x < WORLD_SIZE; x++) { //Move Mapa Eixo X
			if (y >= y1 && y <= y2 && x >= x1 & x <= x2)
				if (Mapa[x][y] == CIDADE) {
					tCor(3);
					printf("%c", Mapa[x][y]);
					tCor(7);
				}
				else if (Mapa[x][y] == INIMIGO) {
					tCor(4);
					printf("%c", Mapa[x][y]);
					tCor(7);
				}
				else if (Mapa[x][y] == TESOURO) {
					tCor(10);
					printf("%c", Mapa[x][y]);
					tCor(7);
				}
				else if (Mapa[x][y] == NPC) {
					tCor(13);
					printf("%c", Mapa[x][y]);
					tCor(7);
				}
				else if (Mapa[x][y] == LAGO) {
					tCor(9);
					printf("%c", Mapa[x][y]);
					tCor(7);
				}
				else if (Mapa[x][y] == PLANICIE) {
					tCor(7);
					printf("%c", Mapa[x][y]);
				}
				else if (Mapa[x][y] == MONTANHA) {
					tCor(6);
					printf("%c", Mapa[x][y]);
					tCor(7);
				}
				else if (Mapa[x][y] == ARVORE) {
					tCor(2);
					printf("%c", Mapa[x][y]);
					tCor(7);
				}
				else if (Mapa[x][y] == PERSONAGEM) {
					tCor(15);
					printf("%c", Mapa[x][y]);
					tCor(7);
				}
    else if (Mapa[x][y] == CHAR_WALL) {
        tCor(7);
        printf("%c", Mapa[x][y]);
    }
    else if (Mapa[x][y] == ESPECIAL) {
        tCor(30);
        printf("%c", Mapa[x][y]);
    }
    else if (Mapa[x][y] == ARMADURA) {
        tCor(5);
        printf("%c", Mapa[x][y]);
    }
		}
		if (y >= y1 && y <= y2)
			printf("\n");
	}
}

//Função que chama funções de mapa no main.
void FuncsMapa() {
	GeradorMapa();
	GeraMonstros();
	GeraTesouros();
	GeraNpcs();
	GeraCidade(251, 251);
	GuardaLugar = Mapa[JogadorX][JogadorY];
 	CriaJogador(JogadorX, JogadorY);
 	DesenhaMapa();
}