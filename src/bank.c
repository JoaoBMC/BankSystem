#include"bank.h"
#include "menu.h"
#include "customer.h"
#include <stdio.h>
#include <stdlib.h>

char option;
typedef struct Account
{
    Customer Client;
    double Balance;
    char *Number;
    char *Agency;
    char Type;

}Account;

static void operation(char option);

Account* createNewAccount()
{
    Account* account;
    account = malloc(sizeof(Account));
    return account;
}

int delAccount(Account* account)
{
    free(account);
    return SUCCESS;
}

int initBank()
{
   operation(init_menu());
}


int addNewAccount(Account* Account)
{
    
    
    return SUCCESS;
}
struct Account setNewAccount(Account* account, Customer* customer, double balance, char *number,char *agency, char type)
{
    account = createNewAccount();
    account->Client = *customer;
    account->Balance = balance;
    account->Number = number;
    account->Agency = agency;
    account->Type = type;
    return *account;
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
