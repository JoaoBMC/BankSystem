#include"bank.h"
#include "menu.h"
#include "customer.h"
#include <stdio.h>
#include <stdlib.h>

char option;
struct conta
{
    Customer Client;
    double Saldo;
    char Number[5];
    char Agency[5];
    char Type;

};

static void operation(char option);

void initBank()
{
   operation(init_menu());
}


void addNewAccount()
{

}
void transact()
{

}
void editAcconut()
{

}
void deletAcconut()
{

}
void viewListAccunt()
{

}
void viewDataAccunt()
{

}

static void operation(char option)
{
    switch (option)
    {
    case '1':

        break;
    case '2':

        break;
    case '3':

        break;
    case '4':

        break;
    case '5':

        break;
    case '6':

        break;
    case '7':
        exit(0);
        break;
    
    
    default:
    option = ' ';
        break;
    }
}
