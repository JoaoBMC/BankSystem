#include"bank.h"
#include "menu.h"
#include "customer.h"
#include <stdio.h>
#include <stdlib.h>

char option;

typedef struct Account
{
    Customer Client;
    double Saldo;
    char *Number;
    char *Agency;
    char Type;

}Account;

static void operation(char option);

Account *createNewAccount(void)
{
    Account* account;
    account = malloc(sizeof(Account));
    return account;
}

int delAccount(Account *Acccount)
{
    free(Acccount);
    return SUCCESS;
}

int initBank()
{
   operation(init_menu());
}


int addNewAccount()
{

    if (setNewCustomer)
    {

        return 1;
    }
    
    return 0;
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
