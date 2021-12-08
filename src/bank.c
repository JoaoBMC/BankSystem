#include "bank.h"
#include "menu.h"
#include <stdio.h>
#include <stdlib.h>

char option;

int lastAcc = 0;

struct Customer;
static void operation(char option);
static char accountTypesStg[][10] = {
    "Savings",
    "Salary",
    "Checking",
    "University"};
Account *createNewAccount(void)
{
    Account *account;
    account = malloc(sizeof(Account));
    return account;
}

int delAccount(Account *account)
{
    free(account);
    return SUCCESS;
}

int initBank()
{
    operation(init_menu());
}

int addNewAccount(Account *account, Customer *customer, double balance, char *number, char *agency, int type)
{
    if (lastAcc < MAX_ACC_LIST_SIZE)
    {
        accList[lastAcc++] = setNewAccount(account, customer, balance, number, agency, type);
        return SUCCESS;
    }
    else
        return ERROR;
}

Account setNewAccount(Account *account, Customer *customer, double balance, char *number, char *agency, int type)
{
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
int delAcconut(char *NumberAcc)
{
    for (int i = 0; i < lastAcc; i++)
    {
        if (accList[i].Number == NumberAcc)
        {
            for (int j = i; j < lastAcc - 1; j++)
                accList[j].Number = accList[j + 1].Number;
            lastAcc--;
        }
    }
}

void viewListAccunt(Account *account)
{
    viewDataAccunt(account);
}

int viewDataAccunt(Account *account)
{

    printf("------------ ACCOUNT DATA ------------\n\n");
    printf("Agency: %s\n", account->Agency);
    printf("Account Number: %s\n", account->Number);
    printf("Account Type: %s\n", accountTypesStg[account->Type]);
    printf("Balance: %.2lf\n", account->Balance);
    printf("------- ACCOUNT HOLDER DETAILS -------\n\n");
    //printNewCustomer(&account->Client);
    return 1;
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
