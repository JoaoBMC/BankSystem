#include"bank.h"
#include "menu.h"
#include <stdio.h>
#include <stdlib.h>

char option;

struct Customer;
static void operation(char option);
static char accountTypesStg[][10] = {
    "Savings",
    "Salary",
    "Checking",
    "University"
};
Account *createNewAccount(void)
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

Account setNewAccount(Account* account, Customer* customer, double balance, char *number,char *agency, int type)
{
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
void viewDataAccunt(Account *account)
{
    
   printf("------------ ACCOUNT DATA ------------\n");
   printf("Agency: %s\n",account->Agency);
   printf("Account Number: %s\n",account->Number);
   printf("Account Type: %s\n",accountTypesStg[account->Type]);
   printf("Balance: %.2lf\n",account->Balance);
   printf("------- ACCOUNT HOLDER DETAILS -------\n");
   printNewCustomer(&account->Client);

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
