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

<<<<<<< HEAD
Account *createNewAccount(void)
=======
Account* createNewAccount()
>>>>>>> e6becf1794d2ca990330aaa0b1f1d82d0caa21fe
{
    Account* account;
    account = malloc(sizeof(Account));
    return account;
}

<<<<<<< HEAD
int delAccount(Account *Acccount)
{
    free(Acccount);
=======
int delAccount(Account* account)
{
    free(account);
>>>>>>> e6becf1794d2ca990330aaa0b1f1d82d0caa21fe
    return SUCCESS;
}

int initBank()
{
   operation(init_menu());
}


int addNewAccount(Account* Account)
{
<<<<<<< HEAD

    if (setNewCustomer)
    {

        return 1;
    }
=======
>>>>>>> e6becf1794d2ca990330aaa0b1f1d82d0caa21fe
    
    
    return SUCCESS;
}
Account setNewAccount(Account* account, Customer* customer, double balance, char *number,char *agency, char type)
{
    account = createNewAccount();
    account->Client = *customer;
    account ->Balance = balance;
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
