/**
 * \file
 * \brief RogueFier - v1.0 Beta 
 * \author João Pedro HArbs
 * \author Jailson Smidi dos Reis
 * \version 1.0 Beta
 * \date 21 dezembro 2017
*/

#include "Monstro.h"

//Função para esperar certo tempo quando necessario.
void sleep(time_t delay) {
	time_t timer0, timer1;
	time(&timer0);
	do {
		time(&timer1);
	} while((timer1 - timer0) < delay);
}

monstro VidaMonstros = 65;
monstro DanoAdd = 25;
monstro plobo = 0, pcorvo = 0, phumana = 0, pchifres = 0, pcebo = 0;
monstro Espc6 = 0, Espc7 = 0, Espc8 = 0, Espc9 = 0, Espc10 = 0;

chrm ItemM1[20] = "Peles de Lobo\0";
chrm ItemM2[20] = "Penas de Corvo\0";
chrm ItemM3[20] = "Pele Humana\0";
chrm ItemM4[20] = "Chifres Demoniacos\0";
chrm ItemM5[20] = "Cebo de Monstro\0";
chrm Recompensa[20] = "\0";

//Função para gerar sementes para o rand().
void SementeMonstro() {
     return srand(time(NULL));
}

//Função que gera os monstros.
void GeraMonstros() {

		SementeMonstro();
		for (monstro i = 1; i<5000; i++) { //Gera Monstro
      Mapa[1 + rand() % 243][1 + rand() % 243] = INIMIGO;
      Mapa[255 + rand() % 243][255 + rand() % 243] = INIMIGO;
			}
}

//Função de danos personagem e monstro.
void Danos() {
    //Dano do Personagem

    monstro MinDanoPlayer, MaxDanoPlayer, DanoPlayer, VidaChar;
    VidaChar = Vida;
    MinDanoPlayer = 15;
    MaxDanoPlayer = DanoAdd;
    SementeMonstro();
    DanoPlayer = MinDanoPlayer + (rand() % MaxDanoPlayer);

    //Dano do Monstro
   	monstro MaxDanoMonstro, MinDanoMonstro, DanoMonstro, VidaNPC;
	   VidaNPC = VidaMonstros;
	   MaxDanoMonstro = 5;
	   MinDanoMonstro = 5;

    SementeMonstro();
    DanoMonstro = MinDanoMonstro + (rand() % MaxDanoMonstro);

  		VidaChar -= DanoMonstro;
	   Vida = VidaChar;

		  VidaNPC -= DanoPlayer;
    VidaMonstros = VidaNPC;


    	if (VidaChar > 0 && VidaNPC > 0) {
		      printf("Sua Vida: %i\n", VidaChar);
		      printf("Vida Monstro: %i\n", VidaNPC);
        printf("\nO Que Deseja Fazer?\n 1- Atacar\n 2- Fugir\n");
		      sleep(2);
	}
	    else if (VidaNPC <= 0 && VidaChar > 0) {
		     printf("O Monstro Morreu!\n");
		     GuardaLugar = PLANICIE;

       monstro k = 1 + rand() % 30;
		     Ouro += k;
       monstro l = rand() % 5;
       monstro qtd = 1 + (rand() % 3);

       if(l == 0){ strcpy(Espaco6, ItemM1); strcpy(Recompensa, ItemM1); if(qtd == 1){plobo += 1;} if (qtd == 2){plobo += 2;} if(qtd == 3){plobo += 3;} if(Espc6 == 0){Espc6 = 1; Inv +=1;}}
       if(l == 1){ strcpy(Espaco7, ItemM2); strcpy(Recompensa, ItemM2); if(qtd == 1){pcorvo += 1;} if (qtd == 2){pcorvo += 2;} if(qtd == 3){pcorvo += 3;} if(Espc7 == 0){Espc7 = 1; Inv +=1;}}
       if(l == 2){ strcpy(Espaco8, ItemM3); strcpy(Recompensa, ItemM3); if(qtd == 1){phumana += 1;} if (qtd == 2){phumana += 2;} if(qtd == 3){phumana += 3;} if(Espc8 == 0){Espc8 = 1; Inv +=1;}}
       if(l == 3){ strcpy(Espaco9, ItemM4); strcpy(Recompensa, ItemM4); if(qtd == 1){pchifres += 1;} if (qtd == 2){pchifres += 2;} if(qtd == 3){pchifres += 3;} if(Espc9 == 0){Espc9 = 1; Inv +=1;}}
       if(l == 4){ strcpy(Espaco10, ItemM5); strcpy(Recompensa, ItemM5); if(qtd == 1){pcebo += 1;} if (qtd == 2){pcebo += 2;} if(qtd == 3){pcebo += 3;} if(Espc10 == 0){Espc10 = 1; Inv +=1;}}


       printf("%s Sua Recompensa: %i de Ouro\n",Explorador ,k);
       printf("%s Sua Recompensa: %i %s\n", Explorador, qtd, Recompensa);
       printf("Sua Vida: %i\n", VidaChar);
       printf("Vida  Monstro: %i\n", VidaNPC);

       Estafa -= 5;
       Comida -= 1;
       Nivel += 1;
       sleep(3);
       system("CLS");
	}
	else if (VidaChar <= 0 && VidaNPC > 0) {
       system("CLS");
       printf("\n\n\n\n\n\n\n\n\n");
       tCor(6);
       printf("\t    #########################################################\n");
       tCor(7);
       printf("\t    #Você Morreu Pela Violência Graças ao Governo 'Fier'mer!#\n");
       tCor(6);
       printf("\t    #########################################################\n");
       tCor(7);
       sleep(5);
       FuncsRank();
	}

 return;
}

//Função fuga da batalha.
void Fugir() {
	monstro  MaxDano, MinDano, VidaChar, Dano;
	MaxDano = 20;
	MinDano = 10;
	VidaChar = Vida;

	SementeMonstro();
	Dano = MinDano + (rand() % MaxDano);

	VidaChar -= Dano;
 Vida = VidaChar;

 printf("\nVocê Fugiu...\n");
	printf("Vida Restante: %i\n", VidaChar);
	printf("Dano Recebido: %i\n", Dano);
 sleep(2);

 if (VidaChar <= 0) {
     system("CLS");
     printf("\n\n\n\n\n\n\n\n\n");
     tCor(6);
     printf("\t    #########################################################\n");
     tCor(7);
     printf("\t    #Você Morreu Pela Violência Graças ao Governo 'Fier'mer!#\n");
     tCor(6);
     printf("\t    #########################################################\n");
     tCor(7);
     sleep(5);
     FuncsRank();
 }

	return;
}



//Função para a interface de batalha.
void EncontroMonstro() {
    VidaMonstros = 65;

    monstro Input;
 printf("Você Encontrou Um Monstro, O Que Deseja Fazer?\n 1- Atacar\n 2- Fugir\n");
	do {
     Input = getch();
		switch (Input) {
  case '1': printf("\n"); Danos(); if (VidaMonstros <= 0) { return; }  break;
		case '2': printf("\n"); Fugir(); return;
		default: break;
		}
 }while (Input != 3);

	return;
}

//Função que verifica se jogador está em cima do monstro.
void VerificaMonstro() {
	if (GuardaLugar == INIMIGO) {
		EncontroMonstro();
	}
}