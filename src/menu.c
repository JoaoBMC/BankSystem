#include <stdio.h>
#include "menu.h"

int option;

static void printMenu();
static int recieveOpction();
static void cls();
char init_menu();
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

char init_menu()
{
    printMenu();
    recieveOpction();
    titleFunction();
    return option;
}
void printAccTypes()
{
    printf("\n 1- Savings\n 2- Salary\n 3- Checking\n 4- University\n ");
}
void titleFunction()
{
    cls;
    switch (option)
    {
    case NEW_ACCOUNT:
        printf("\n\tCRIANDO UMA NOVA CONTA\n\n\n");
        break;
    case UPDATA_ACCOUNT:
        printf("\n\tATUALIZANDO UMA CONTA\n\n\n");
        break;
    case TRANSACT:
        printf("\n\tTRANSFERENCIAS\n\n\n");
        break;
    case EDIT_ACCOUNT:
        printf("\n\tDETALHES DA CONTA\n\n\n");
        break;
    case DELETE_ACCOUNT:
        printf("\n\tREMOVENDO UMA CONTA\n\n\n");
        break;
    case VIEW_LIST_ACCOUNT:
        printf("\n\tLISTA DE CLIENTES\n\n\n");
        break;
    case VIEW_DATA_ACCOUNT:
        printf("\n\tVISUALIZAR DE CLIENTES\n\n\n");
        break;
    case EXIT:
        printf("\n\tSAINDO...\n\n\n");
        break;

    default:
        printf("Valor invalido!");
        option = ' ';
        break;
    }
}

