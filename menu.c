#include <stdio.h>

int option;


static void printMenu();
static int recieveOpction();
static void cls();
int init_menu();
void titleFunction();

static void printMenu()
{
    cls();
    printf("\t|------------ MY BANK ------------|\n\n\n");

    printf("|-----------------------------------------------|\n");
    printf("| 1 - NOVA CONTA                                |\n");
    printf("| 2 - ATUALIZAR INFORMACOES UMA CONTA EXISTENTE |\n");
    printf("| 3 - AREA DE TRASFERENCIAS                     |\n");
    printf("| 4 - DETALHES DE UMA CONTA EXISTENTE           |\n");
    printf("| 5 - REMOVER UMA CONTA EXISTENTE               |\n");
    printf("| 6 - VISUALIZAR LISTA DE CLIENTES              |\n");
    printf("| 7 - SAIR                                      |\n");
    printf("|-----------------------------------------------|\n");

}

static int recieveOpction()
{
    printf("Option: ");
    scanf("%d", &option);
    return option;
}
static void cls()
{
    printf("\e[H\e[2J");
}

int init_menu()
{
    printMenu();
    recieveOpction();
    titleFunction();
    return option;
}

void titleFunction()
{
    cls;
    switch (option)
    {
    case 1:
        printf("\n\tCRIANDO UMA NOVA CONTA\n\n\n");
        break;
    case 2:
        printf("\n\tATUALIZANDO UMA NOVA CONTA\n\n\n");
        break;
    case 3:
        printf("\n\tTRANSFERENCIAS\n\n\n");
        break;
    case 4:
        printf("\n\tDETALHES DA CONTA\n\n\n");
        break;
    case 5:
        printf("\n\tREMOVENDO UMA CONTA\n\n\n");
        break;
    case 6:
        printf("\n\tLISTA DE CLIENTES\n\n\n");
        break;
    case 7:
        printf("\n\tSAINDO...\n\n\n");
        
        break;
    
    default:
        break;
    }
}