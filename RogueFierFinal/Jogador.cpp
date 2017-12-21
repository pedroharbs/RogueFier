#include "Jogador.h"

void Semente();
jogador Vida = 100;
jogador Estafa = 100;
jogador Comida = 20;
jogador Agua = 20;
jogador Ouro = 0;
jogador Nivel = 0;
jogador Inv = 0;
jogador JogadorX = 251;
jogador JogadorY = 251;
jogador NovaCordX = JogadorX;
jogador NovaCordY = JogadorY;
jogador y1 = MapaIniX;
jogador y2 = MapaFimX;
jogador x1 = MapaIniY;
jogador x2 = MapaFimY;
jogador Key;
carac GuardaLugar;
jogador ContaProvimentos = 0;


carac CriaJogador(jogador x, jogador y){
	carac *p;
	carac Jogador = PERSONAGEM;
		p = (carac *)malloc(Jogador* sizeof(carac));
		p = &Jogador;
	
	return Mapa[x][y] = *p;
}


char MoveJogador(jogador CordX, jogador CordY, jogador NovaCordX, jogador NovaCordY, carac Mapa[WORLD_SIZE][WORLD_SIZE], carac Lugar){

	Mapa[CordX][CordY] = Lugar;
	Lugar = Mapa[NovaCordX][NovaCordY];
	Mapa[NovaCordX][NovaCordY] = PERSONAGEM;

	return Mapa[CordX][CordY], Lugar;
};

void JogadorVitais() {

    if (Vida == 0) {
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\n");
        tCor(6);
        printf("\t    ########################################################\n");
        tCor(7);
        printf("\t    #Você Morreu Antes de se Aposentar Graças ao 'Fier'mer!#\n");
        tCor(6);
        printf("\t    ########################################################\n");
        tCor(7);
        sleep(5);
        FuncsRank();
    }
    else if (Estafa == 0) {
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\n");
        tCor(6);
        printf("      ####################################################################\n");
        tCor(7);
        printf("      #Você Morreu Esperando a Aposentadoria Graças ao Governo 'Fier'mer!#\n");
        tCor(6);
        printf("      ####################################################################\n");
        tCor(7);
        sleep(5);
        FuncsRank();
    }
    else if (Agua == 0) {
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\n");
        tCor(6);
        printf("\t     ##################################################\n");
        tCor(7);
        printf("\t     #Você Morreu de Sede Graças ao Governo 'Fier'mer!#\n");
        tCor(6);
        printf("\t     ##################################################\n");
        tCor(7);
        sleep(5);
        FuncsRank();
    }
    else if (Comida == 0) {
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\n");
        tCor(6);
        printf("\t     ##################################################\n");
        tCor(7);
        printf("\t     #Você Morreu de Fome Graças ao Governo 'Fier'mer!#\n");
        tCor(6);
        printf("\t     ##################################################\n");
        tCor(7);
        sleep(5);
        FuncsRank();
    }
 }

 void ContadorProvimentos() {

     if(ContaProvimentos == 50){Estafa -= 2; Comida -= 1; Agua -= 1;}
     if(ContaProvimentos == 100){Estafa -= 2; Comida -= 1; Agua -= 1;}
     if(ContaProvimentos == 150){ Estafa -= 2; Comida -= 1; Agua -= 1;}
     if(ContaProvimentos == 200){ Estafa -= 2; Comida -= 1; Agua -= 1;}
     if(ContaProvimentos == 250){ Estafa -= 2; Comida -= 1; Agua -= 1;}
     if(ContaProvimentos == 300){ Estafa -= 2; Comida -= 1; Agua -= 1;}
     if(ContaProvimentos == 350){ Estafa -= 2; Comida -= 1; Agua -= 1;}
     if(ContaProvimentos == 400){ Estafa -= 2; Comida -= 1; Agua -= 1;}
     if(ContaProvimentos == 450){ Estafa -= 2; Comida -= 1; Agua -= 1;}
     if(ContaProvimentos == 500){ Estafa -= 2; Comida -= 1; Agua -= 1;}
     if(ContaProvimentos == 550){ Estafa -= 2; Comida -= 1; Agua -= 1;}
     if(ContaProvimentos == 600){ Estafa -= 2; Comida -= 1; Agua -= 1;}
     if(ContaProvimentos == 650){ Estafa -= 2; Comida -= 1; Agua -= 1;}
     if(ContaProvimentos == 700){ Estafa -= 2; Comida -= 1; Agua -= 1;}
     if(ContaProvimentos == 750){ Estafa -= 2; Comida -= 1; Agua -= 1;}
     if(ContaProvimentos == 800){ Estafa -= 2; Comida -= 1; Agua -= 1;}
     if(ContaProvimentos == 850){ Estafa -= 2; Comida -= 1; Agua -= 1;}
     if(ContaProvimentos == 900){ Estafa -= 2; Comida -= 1; Agua -= 1;}
     if(ContaProvimentos == 950){ Estafa -= 2; Comida -= 1; Agua -= 1;}
     if(ContaProvimentos == 1000){ Estafa -= 2; Comida -= 1; Agua -= 1;}


 }

 void Verificacoes() {
     VerificaCidade();
     VerificaNPC();
     VerificaMonstro();
     VerificaTesouro();
     ContaProvimentos += 1;
 }

 void ChamaFuncsMover() {
     Mapa[JogadorX][JogadorY], GuardaLugar = MoveJogador(JogadorX, JogadorY, NovaCordX, NovaCordY, Mapa, GuardaLugar);
     MoveMapa(Mapa, y1, y2, x1, x2);
 }

 void PegaTeclas(){

     carac MSG1[24] = "Fim das Terras de Fier!";
     carac MSG2[27] = "Colinas Proibidas de Fier!";
     carac MSG3[27] = "Floresta Proibida de Fier!";
     carac MSG4[25] = "Vulcão Proibido de Fier!";

     Key = getch();
     system("cls");
     switch (Key)
     {

     case 119: // W
         Verificacoes();

         if (Mapa[JogadorX][NovaCordY - 1] != '?') {

             y1 += -1;
             y2 += -1;
             NovaCordY += -1;

             ChamaFuncsMover();
         }
         else {

             y1 += 0;
             y2 += 0;
             NovaCordY += 0;

             ChamaFuncsMover();

             MoveCursor(2, 22);
             printf("%s", MSG1);
         }

         break;

     case 115: // S
         Verificacoes();

         if (Mapa[NovaCordX][NovaCordY + 1] != '?') {

             y1 += 1;
             y2 += 1;
             NovaCordY += 1;

             ChamaFuncsMover();
         }
         else {

             y1 += 0;
             y2 += 0;
             NovaCordY += 0;

             ChamaFuncsMover();

             MoveCursor(2, 22);
             printf("%s", MSG2);
         }

         break;

     case 97: // A
         Verificacoes();

         if (Mapa[NovaCordX - 1][NovaCordY] != '?') {

             x1 += -1;
             x2 += -1;
             NovaCordX += -1;

             ChamaFuncsMover();
         }
         else {

             x1 += 0;
             x2 += 0;
             NovaCordX += 0;

             ChamaFuncsMover();

             MoveCursor(2, 22);
             printf("%s", MSG3);
         }

         break;

     case 100: // D
         Verificacoes();

         if (Mapa[NovaCordX + 1][NovaCordY] != '?') {

             x1 += 1;
             x2 += 1;
             NovaCordX += 1;

             ChamaFuncsMover();
         }
         else {

             x1 += 0;
             x2 += 0;
             NovaCordX += 0;

             ChamaFuncsMover();

             MoveCursor(2, 22);
             printf("%s", MSG4);
         }

         break;
     case 99: // C
         FuncsInterface();
         MoveCursor(0, 0);
         DesenhaMapa();
         Marcadores();

         char opts[10];
         
         MoveCursor(2, 22);
         printf("Comando: ");
         scanf("%s", &opts);
         
         if (strcmp(opts, "sair!") == 0){ exit(0); }
         else if (strcmp(opts, "invent!") == 0){ system("CLS"); Inventario();}
         else if (strcmp(opts, "nada!") == 0) { }
         else { MoveCursor(2, 22); tCor(7); printf("Comando invalido!"); }
         Comandos();
         break;
     default: Comandos(); MoveCursor(2, 22);  printf("Comando Inválido"); return;
     }

     ContadorProvimentos();
     JogadorVitais();
     Marcadores();
     JogadorX = NovaCordX;
     JogadorY = NovaCordY;
 }


 void Comandos() {
     FuncsInterface();
     MoveCursor(0, 0);
     DesenhaMapa();
     Marcadores();
 }

 void Aposentadoria() {

     if (Nivel == 65) {
         system("CLS");
         printf("\n\n\n\n\n\n\n\n\n");
         tCor(6);
         printf("################################################################################\n");
         tCor(7);
         printf("\tEnfim %s Conseguiu a Tão Sonhada e Esperada Aposentadoria!\n", Explorador);
         tCor(6);
         printf("################################################################################\n");
         tCor(7);
         sleep(7);
         FuncsRank();
     }
 }