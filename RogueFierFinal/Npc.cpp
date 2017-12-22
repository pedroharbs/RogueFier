/**
 * \file
 * \brief RogueFier - v1.0 Beta 
 * \author João Pedro HArbs
 * \author Jailson Smidi dos Reis
 * \version 1.0 Beta
 * \date 21 dezembro 2017
*/

#include "Npc.h"

caractere Item1[50] = "Poção Mágica de Regeneração de Vida (100Pts)\0";
caractere Item2[50] = "Poção Mágica de Regeneração de Estafa (100Pts)\0";
caractere Item3[50] = "Saco de Maçãs (20Pts)\0";
caractere Item4[50] = "Garrafa de Água (20Pts)\0";
caractere Item5[50] = "Armadura de Fier\0";

caractere Digita;
caractere FraseI[50] = "-------------------------------------------------";
caractere Frase1[52] = "NPC: Estou Perdido, Para Que Direção Fica a Cidade?";
caractere Compl1[53] = "Norte: W | Sul: S | Leste: D | Oeste: A | Perdido: N";
caractere Frase2[29] = "NPC: Muito Obrigado Meu Caro";
caractere Frase3[29] = "Jogador: Como Sabe Meu Nome?";
caractere Frase5[36] = "Jogador: A Cidade Fica Para o Norte";
caractere Frase6[36] = "Jogador: A Cidade Fica Para o Oeste";
caractere Frase7[34] = "Jogador: A Cidade Fica Para o Sul";
caractere Frase8[36] = "Jogador: A Cidade Fica Para o Leste";
caractere Frase9[37] = "Jogador: Também Estou Perdido Amigo!";

caractere FraseSelec[6][48] = { "NPC: Eu Sou um Curandeiro Esqueceu ? HaHaHa ...",
                                 "NPC: Já Nos Encontramos Não te Lembras?        ",
                                 "NPC: Tenho Meus Contatos HaHaHa!               ",
                                 "NPC: Ez çavên çavê min im.                     ", 
                                 "NPC: Você Digitou no Começo do Game HaHaHa     ",
                                 "NPC: Sou Esperto o Bastante Para Saber !       " };

//Função para aleatorização de frases.
void FuncFrase() {
    
    SementeNPC();
    npc SelecFrase = 0 + rand() % 6;

        for (npc k = 0; k < 48; k++){
            printf("%c", FraseSelec[SelecFrase][k]);
        }
}

//Função para gerar sementes para o rand().
void SementeNPC() {
    return srand(time(NULL));
}

//Função para gerar os NPC's.
void GeraNpcs() {

    SementeNPC();
    for (npc i = 1; i<1000; i++) { //Gera NPCS
        Mapa[1 + rand() % 243][1 + rand() % 243] = NPC;
        Mapa[255 + rand() % 243][255 + rand() % 243] = NPC;
    }
}

//Função para ajudar o NPC.
void Ajudar() {

    Dir();

    return;
}

//Função para direcionamento do NPC.
void Dir() {
    system("cls");

    printf("%s\n", Frase1);
    printf("%s\n", Compl1);

    Digita = getch();
    switch (Digita) {
    case 119: //W
        printf("%s\n", FraseI);
        printf("%s!\n", Frase5);
        printf("%s\n", FraseI);
        sleep(2);
        printf("\n");
        printf("%s\n", FraseI);
        printf("%s %s!\n",Frase2, Explorador);
        printf("%s\n", FraseI);
        sleep(2);
        printf("\n");
        printf("%s\n", FraseI);
        printf("%s!\n", Frase3);
        printf("%s\n", FraseI);
        sleep(2);
        printf("\n");
        printf("%s\n", FraseI);
        FuncFrase();
        printf("\n%s\n", FraseI);
        sleep(2);
        break;
    case 97://A
        printf("%s\n", FraseI);
        printf("%s!\n", Frase6);
        printf("%s\n", FraseI);
        sleep(2);
        printf("\n");
        printf("%s\n", FraseI);
        printf("%s %s!\n", Frase2, Explorador);
        printf("%s\n", FraseI);
        sleep(2);
        printf("\n");
        printf("%s\n", FraseI);
        printf("%s!\n", Frase3);
        printf("%s\n", FraseI);
        sleep(2);
        printf("\n");
        printf("%s\n", FraseI);
        FuncFrase();
        printf("\n%s\n", FraseI);
        sleep(2);
        break;
    case 115://S
        printf("%s\n", FraseI);
        printf("%s!\n", Frase7);
        printf("%s\n", FraseI);
        sleep(2);
        printf("\n");
        printf("%s\n", FraseI);
        printf("%s %s!\n", Frase2, Explorador);
        printf("%s\n", FraseI);
        sleep(2);
        printf("\n");
        printf("%s\n", FraseI);
        printf("%s!\n", Frase3);
        printf("%s\n", FraseI);
        sleep(2);
        printf("\n");
        printf("%s\n", FraseI);
        FuncFrase();
        printf("\n%s\n", FraseI);
        sleep(2);
        break;
    case 100://D
        printf("%s\n", FraseI);
        printf("%s!\n", Frase8);
        printf("%s\n", FraseI);
        sleep(2);
        printf("\n");
        printf("%s\n", FraseI);
        printf("%s %s!\n", Frase2, Explorador);
        printf("%s\n", FraseI);
        sleep(2);
        printf("\n");
        printf("%s\n", FraseI);
        printf("%s!\n", Frase3);
        printf("%s\n", FraseI);
        sleep(2);
        printf("\n");
        printf("%s\n", FraseI);
        FuncFrase();
        printf("\n%s\n", FraseI);
        sleep(2);
        break;
    case 110://N
        printf("%s\n", FraseI);
        printf("%s!\n", Frase9);
        printf("%s\n", FraseI);
        sleep(2);
        printf("\n");
        printf("%s\n", FraseI);
        printf("%s %s!\n", Frase2, Explorador);
        printf("%s\n", FraseI);
        sleep(2);
        printf("\n");
        printf("%s\n", FraseI);
        printf("%s!\n", Frase3);
        printf("%s\n", FraseI);
        sleep(2);
        printf("\n");
        printf("%s\n", FraseI);
        FuncFrase();
        printf("\n%s\n", FraseI);
        sleep(2);
        break;

    default: printf("Direção Inválida!\n"); Ajudar(); break;
    }
    sleep(2);

    return;
}

//Função comprar itens do NPC.
void Comprar() {

    npc Item, Selec;
    system("cls");

    printf("|-----------------------Bem Vindo a Loja do Curandeiro------------------------|\n");
    printf("-------------------------Itens Disponiveis Para Venda:-------------------------\n");
    printf("|1- Poção Mágica de Regeneração de Vida (Regenera 100 de Vida) [350 Ouros]    |\n");
    printf("|2- Poção Mágica de Regeneração de Estafa (Regenera 100 de Estafa) [300 Ouros]|\n");
    printf("|3- Saco de Maçãs (Regenera 20 de Comida) [450 Ouros]                         |\n");
    printf("|4- Garrafa de Água (Regenera 20 de Água) [450 Ouros]                         |\n");
    printf("|5- Voltar ao Menu Inicial                                                    |\n");
    printf("-------------------------------------------------------------------------------\n");

    Item = getch();

    switch (Item) {
        system("cls");

    case'1': if(Ouro < 350){ printf("Ouro Insuficiente, Cai Fora!"); sleep(2); return;} if(strcmp(Espaco1, Item1) == 0){ printf("Você Já Possui Este Item!"); sleep(2); return;} Ouro -= 350; strcpy(Espaco1, Item1); pcvida = 1; Inv += 1; GuardaLugar = PLANICIE; printf("Voce Comprou Uma Poção de Vida no Valor de 350 Ouros.\nOuro Restante: %i\n", Ouro); sleep(2); break;
    case'2': if(Ouro < 300){ printf("Ouro Insuficiente, Cai Fora!"); sleep(2); return;} if(strcmp(Espaco2, Item2) == 0){ printf("Você Já Possui Este Item!"); sleep(2); return;} Ouro -= 300; strcpy(Espaco2, Item2); pcestafa = 1; Inv += 1; GuardaLugar = PLANICIE; printf("Voce Comprou Uma Poção de Estafa no Valor de 300 Ouros.\nOuro Restante: %i\n", Ouro); sleep(2); break;
    case'3': if(Ouro < 450){ printf("Ouro Insuficiente, Cai Fora!"); sleep(2); return;} if(strcmp(Espaco3, Item3) == 0){ printf("Você Já Possui Este Item!"); sleep(2); return;} Ouro -= 450; strcpy(Espaco3, Item3); pmaca = 1; Inv += 1; GuardaLugar = PLANICIE; printf("Voce Comprou Um Saco de Maçãs no Valor de 450 Ouros.\nOuro Restante: %i\n", Ouro); sleep(2); break;
    case'4': if(Ouro < 450){ printf("Ouro Insuficiente, Cai Fora!"); sleep(2); return;} if(strcmp(Espaco4, Item4) == 0){ printf("Você Já Possui Este Item!"); sleep(2); return;} Ouro -= 450; strcpy(Espaco4, Item4); pgarrafa = 1; Inv += 1; GuardaLugar = PLANICIE; printf("Voce Comprou Uma Garrafa de Água no Valor de 450 Ouros.\nOuro Restante: %i\n", Ouro); sleep(2); break;
    case'5': system("cls"); EncontraNPC(); break;
    default: printf("Opção Inválida!"); sleep(1); system("cls"); Comprar();
    }
    return;
}

//Função para interface do NPC.
void EncontraNPC() {
    npc Teste;
    npc Input;
    npc *pTeste = &Teste;

    printf("Voce Encontrou um Curandeiro, o Que Deseja Fazer?\n 1- Ajudar\n 2- Comprar\n 3- Voltar a Explorar\n");
    do {
        Input = getch();
        switch (Input) {
        case '1': printf("\n"); Ajudar(); *pTeste = 1; break;
        case '2': printf("\n"); Comprar(); *pTeste = 1; break;
        case '3': return;
        default: break;
        }
    } while (*pTeste != 1);

    *pTeste = 0;

    system("cls");

    return;
}

//Função que verifica se jogador está em cima do NPC.
void VerificaNPC() {
    if (GuardaLugar == NPC) {
        EncontraNPC();
    }
}