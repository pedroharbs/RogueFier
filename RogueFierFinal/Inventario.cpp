#include "Inventario.h"

inventario Item, ItemA, ItemB;
chr Espaco1[47] = "Vazio";
chr Espaco2[47] = "Vazio";
chr Espaco3[47] = "Vazio";
chr Espaco4[47] = "Vazio";
chr Espaco5[47] = "Vazio";
chr Espaco6[20] = "Vazio";
chr Espaco7[20] = "Vazio";
chr Espaco8[20] = "Vazio";
chr Espaco9[20] = "Vazio";
chr Espaco10[20] = "Vazio";


void Inventario() {

    printf("-=(Inventário de %s)=-\n", Explorador);

    printf("Espaço 0 - %i %s\n", pcvida, Espaco1);
    printf("Espaço 1 - %i %s\n", pcestafa, Espaco2);
    printf("Espaço 2 - %i %s\n", pmaca, Espaco3);
    printf("Espaço 3 - %i %s\n", pgarrafa, Espaco4);
    printf("Espaço 4 - %i %s\n", parmadura, Espaco5);
    printf("Espaço 5 - %i %s\n", plobo, Espaco6);
    printf("Espaço 6 - %i %s\n", pcorvo, Espaco7);
    printf("Espaço 7 - %i %s\n", phumana, Espaco8);
    printf("Espaço 8 - %i %s\n", pchifres, Espaco9);
    printf("Espaço 9 - %i %s\n", pcebo, Espaco10);

    printf("\nO Que Deseja Fazer? 1- Usar Item | 2- Dispensar Item | 3- Sair do Inventário\n");

    Item = getch();
    switch (Item) {
    case '1':
        printf("\nDesejar Usar Qual Item?: ");
        ItemA = getch();

        switch (ItemA) {
        case '0': if(strcmp(Espaco1, "Vazio") == 0){ printf("\n\nNão há Item a Ser Utilizado"); sleep(3); system("cls"); return;} Vida = 100; printf("\nVoce Utilizou o Item 0 - %s\n", Espaco1); Inv -= 1; strcpy(Espaco1, "Vazio\0"); sleep(3); system("cls"); break;
        case '1': if(strcmp(Espaco2, "Vazio") == 0){ printf("\n\nNão há Item a Ser Utilizado"); sleep(3); system("cls"); return;} Estafa = 100; printf("\nVoce Utilizou o Item 1 - %s\n", Espaco2); Inv -= 1; strcpy(Espaco2, "Vazio\0"); sleep(3);system("cls"); break;
        case '2': if(strcmp(Espaco3, "Vazio") == 0){ printf("\n\nNão há Item a Ser Utilizado"); sleep(3); system("cls"); return;} Comida = 20; printf("\nVoce Utilizou o Item 2 - %s\n", Espaco3); Inv -= 1; strcpy(Espaco3, "Vazio\0"); sleep(3); system("cls"); break;
        case '3': if(strcmp(Espaco4, "Vazio") == 0){ printf("\n\nNão há Item a Ser Utilizado"); sleep(3); system("cls"); return;} Agua = 20; printf("\nVoce Utilizou o Item 3 - %s\n", Espaco4); Inv -= 1; strcpy(Espaco4, "Vazio\0"); sleep(3); system("cls"); break;
        case '4': if(strcmp(Espaco5, "Vazio") == 0){ printf("\n\nNão há Item a Ser Utilizado"); sleep(3); system("cls"); return;} DanoAdd += 25;  printf("\nVoce Está Utilizando o Item 4 - %s\n", Espaco5); Inv -= 1; strcpy(Espaco5, "Vazio\0"); sleep(3); system("cls"); break;
        
        } return;
    case '2':
        printf("\nDesejar Dispensar Qual Item?: ");
        ItemB = getch();

        switch (ItemB) {
        case '0': if(strcmp(Espaco1, "Vazio") == 0){ printf("\nNão há Item a Ser Dispensado"); sleep(3); system("cls"); return;} printf("\nVoce Dispensou o Item 0 - %s\n", Espaco1); Inv -= 1; pcvida = 0; strcpy(Espaco1, "Vazio\0"); sleep(3); system("cls"); break;
        case '1': if(strcmp(Espaco2, "Vazio") == 0){ printf("\nNão há Item a Ser Dispensado"); sleep(3); system("cls"); return;} printf("\nVoce Dispensou o Item 1 - %s\n", Espaco2); Inv -= 1; pcestafa = 0; strcpy(Espaco2, "Vazio\0"); sleep(3); system("cls"); break;
        case '2': if(strcmp(Espaco3, "Vazio") == 0){ printf("\nNão há Item a Ser Dispensado"); sleep(3); system("cls"); return;} printf("\nVoce Dispensou o Item 2 - %s\n", Espaco3); Inv -= 1; pmaca = 0; strcpy(Espaco3, "Vazio\0"); sleep(3); system("cls"); break;
        case '3': if(strcmp(Espaco4, "Vazio") == 0){ printf("\nNão há Item a Ser Dispensado"); sleep(3); system("cls"); return;} printf("\nVoce Dispensou o Item 3 - %s\n", Espaco4); Inv -= 1; pgarrafa = 0; strcpy(Espaco4, "Vazio\0"); sleep(3); system("cls"); break;
        case '4': if(strcmp(Espaco5, "Vazio") == 0){ printf("\nNão há Item a Ser Dispensado"); sleep(3); system("cls"); return;} printf("\nVoce Dispensou o Item 4 - %s\n", Espaco5); Inv -= 1; parmadura = 0; strcpy(Espaco5, "Vazio\0"); sleep(3); system("cls"); break;
        case '5': if(strcmp(Espaco6, "Vazio") == 0){ printf("\nNão há Item a Ser Dispensado"); sleep(3); system("cls"); return;} printf("\nVoce Dispensou %i Unidades do Item 5 - %s\n", plobo, Espaco6); Espc6 = 0; Inv -= 1; plobo = 0; strcpy(Espaco6, "Vazio\0"); sleep(3); system("cls"); break;
        case '6': if(strcmp(Espaco7, "Vazio") == 0){ printf("\nNão há Item a Ser Dispensado"); sleep(3); system("cls"); return;} printf("\nVoce Dispensou %i Unidades do Item 6 - %s\n", pcorvo, Espaco7); Espc7 = 0; Inv -= 1; pcorvo = 0; strcpy(Espaco7, "Vazio\0"); sleep(3); system("cls"); break;
        case '7': if(strcmp(Espaco8, "Vazio") == 0){ printf("\nNão há Item a Ser Dispensado"); sleep(3); system("cls"); return;} printf("\nVoce Dispensou %i Unidades do Item 7 - %s\n", phumana, Espaco8); Espc8 = 0; Inv -= 1; phumana = 0; strcpy(Espaco8, "Vazio\0"); sleep(3); system("cls"); break;
        case '8': if(strcmp(Espaco9, "Vazio") == 0){ printf("\nNão há Item a Ser Dispensado"); sleep(3); system("cls"); return;} printf("\nVoce Dispensou %i Unidades do Item 8 - %s\n", pchifres, Espaco9); Espc9 = 0; Inv -= 1; pchifres = 0; strcpy(Espaco9, "Vazio\0"); sleep(3); system("cls"); break;
        case '9': if(strcmp(Espaco10, "Vazio") == 0){ printf("\nNão há Item a Ser Dispensado"); sleep(3); system("cls"); return;} printf("\nVoce Dispensou %i Unidades do Item 9 - %s\n", pcebo, Espaco10); Espc10 = 0; Inv -= 1; pcebo = 0; strcpy(Espaco10, "Vazio\0"); sleep(3); system("cls"); break;

        } return;
    case '3': system("cls"); return;
    default: system("cls"); Inventario();
    }


    return;
}
