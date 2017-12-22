/**
 * \file
 * \brief RogueFier - v1.0 Beta 
 * \author João Pedro HArbs
 * \author Jailson Smidi dos Reis
 * \version 1.0 Beta
 * \date 21 dezembro 2017
*/

#include "Ranking.h"

crt guardanome[10];
rkg guardapts;
Ranking Rank[100];

//Função que le e ordena o ranking no inicio.
void LeArquivoInicio() {

    FILE *Fluxo;

    Fluxo = fopen("ranking.txt", "r");


    if (Fluxo == NULL) {
        printf("Erro, Não Foi Possivel Gravar no Arquivo\n");
    }
    else {
        system("CLS");
        printf("+------------------------------------------------------------------------------+");
        printf("+       _____    _____  ____  _   _  _____    ______  __  _____  _____         +");
        printf("+      |   _ |  |     ||    || | | ||     |  |      ||  ||     ||   _ |        +");
        printf("+      |  | ||  |  _  ||  __|| | | ||  ___|  |   ___||  ||  ___||  | ||        +");
        printf("+      |  |_||_ | | | || |__ | |_| || |___   |  |___ |  || |___ |  |_||_       +");
        printf("+      |   __  || |_| || || ||     ||  ___|  |   ___||  ||  ___||   __  |      +");
        printf("+      |  |  | ||     || |_|||     || |___   |  |    |  || |___ |  |  | |      +");
        printf("+      |__|  |_||_____||____||_____||_____|  |__|    |__||_____||__|  |_|      +");
        printf("+                                                                              +");
        printf("+------------------------------------------------------------------------------+");
        printf("+-------------------------------(===Ranking===)--------------------------------+");
        printf("+-----------------------------(===5 Primeiros===)------------------------------+");
        printf("+------------------------------------------------------------------------------+");
        

        for (rkg i = 0; i < 100; i++) {
            fscanf(Fluxo, "%s %i\n", &Rank[i].Nomes, &Rank[i].Pontos);
        }

        for (rkg i = 1; i < 100; i++) {
            for (rkg j = 0; j < i; j++) {
                if (Rank[i].Pontos > Rank[j].Pontos) {
                    rkg Temp1 = Rank[i].Pontos;
                    chr Temp2[10];
                    strcpy(Temp2, Rank[i].Nomes);


                    Rank[i].Pontos = Rank[j].Pontos;
                    strcpy(Rank[i].Nomes, Rank[j].Nomes);

                    Rank[j].Pontos = Temp1;
                    strcpy(Rank[j].Nomes, Temp2);
                }
            }
        }


        for (rkg i = 0; i < 5; i++) {
            printf("\t\t\t\t %s %i\n", Rank[i].Nomes, Rank[i].Pontos);
        }
        // while ((fscanf(rank, "%s %i\n", &nome, &pts)) != EOF)
        // printf("\t\t\t\t %s %i\n", nome, pts);

        fclose(Fluxo);
        printf("\n\t\t\t     0 - Voltar ao Menu\n");

        do {
            rkg Input;
            Input = getch();
            switch (Input) {
            case '0': if (kbhit()) { PegaTeclas(); } system("CLS");  return; break;
            default: break;
            }

        } while (Key != '0');
    }

    return;
}

//Função que grava usuário no ranking.
void GravaRanking() {

    FILE *Fluxo;

    Fluxo = fopen("ranking.txt", "a");

    if (Fluxo == NULL) {
        printf("Erro, Não Foi Possivel Gravar no Arquivo\n");
    }
    else {
        fprintf(Fluxo, "\n%s %i", Explorador, Ouro);
        fclose(Fluxo);
    }

}

//Função que le e ordena o ranking no final.
void LeArquivoFinal() {

    FILE *Fluxo;


    Fluxo = fopen("ranking.txt", "r");

    if (Fluxo == NULL) {
        printf("Erro, Não Foi Possivel Abrir o Arquivo\n");
    }
    else {
        system("CLS");
        printf("+------------------------------------------------------------------------------+");
        printf("+       _____    _____  ____  _   _  _____    ______  __  _____  _____         +");
        printf("+      |   _ |  |     ||    || | | ||     |  |      ||  ||     ||   _ |        +");
        printf("+      |  | ||  |  _  ||  __|| | | ||  ___|  |   ___||  ||  ___||  | ||        +");
        printf("+      |  |_||_ | | | || |__ | |_| || |___   |  |___ |  || |___ |  |_||_       +");
        printf("+      |   __  || |_| || || ||     ||  ___|  |   ___||  ||  ___||   __  |      +");
        printf("+      |  |  | ||     || |_|||     || |___   |  |    |  || |___ |  |  | |      +");
        printf("+      |__|  |_||_____||____||_____||_____|  |__|    |__||_____||__|  |_|      +");
        printf("+                                                                              +");
        printf("+------------------------------------------------------------------------------+");
        printf("+-------------------------------(===Ranking===)--------------------------------+");
        printf("+-----------------------------(===5 Primeiros===)------------------------------+");
        printf("+------------------------------------------------------------------------------+");


        for (rkg i = 0; i < 100; i++) {
            fscanf(Fluxo, "%s %i\n", &Rank[i].Nomes, &Rank[i].Pontos);
        }

        for (rkg i = 1; i < 100; i++) {
            for (rkg j = 0; j < i; j++) {
                if (Rank[i].Pontos > Rank[j].Pontos) {
                    rkg Temp1 = Rank[i].Pontos;
                    chr Temp2[10];
                    strcpy(Temp2, Rank[i].Nomes);


                    Rank[i].Pontos = Rank[j].Pontos;
                    strcpy(Rank[i].Nomes, Rank[j].Nomes);

                    Rank[j].Pontos = Temp1;
                    strcpy(Rank[j].Nomes, Temp2);
                }
            }
        }

        for (rkg i = 0; i < 5; i++) {
            printf("\t\t\t\t %s %i\n", Rank[i].Nomes, Rank[i].Pontos);
        }
        // while ((fscanf(rank, "%s %i\n", &nome, &pts)) != EOF)
        // printf("\t\t\t\t %s %i\n", nome, pts);

        fclose(Fluxo);

        printf("\n\t\t\t     1 - Sair\n");

        do {
            rkg Input;
            Input = getch();
            switch (Input) {
            case '1': if (kbhit()) { PegaTeclas(); } exit(0); break;
            default: break;
            }

        } while (Key != '1');
    }
}

//Função para chamar ranking no final.
void FuncsRank() {
    GravaRanking();
    LeArquivoFinal();
}