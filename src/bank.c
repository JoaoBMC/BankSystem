#include "bank.h"
#include "menu.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

char option;
struct Account *acc;
int lastAcc = 0;
int lastDigit = 0;
char lastAccNumber[] = "000000";

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

void newAccNumeberGenerator(char *number)
{
    //char number[] = "";
    int digit = sizeof(lastAccNumber);
    int accNumber;
    if (lastDigit > 9 && digit >= 0)
    {
        digit--;
        lastDigit = 0;
    }
    if (digit < 0)
    {
        printf("MAXIMO DE CLIENTE!");
    }
    else
    {
        lastDigit++;
        lastAccNumber[digit] = lastDigit + '0';
        memcpy(number, lastAccNumber, sizeof(lastAccNumber));
        
    }
}

int delAccount(Account *account)
{
    free(account);
    return SUCCESS;
}

int initBank()
{
    operation(init_menu());
    acc = createNewAccount();
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
int addNewAccount(Account *account, Customer *customer, double balance,char *agency, int type)
{
    if (lastAcc < MAX_ACC_LIST_SIZE)
    {
        char number[] = "000000";
        newAccNumeberGenerator(number);
        accList[lastAcc++] = setNewAccount(account, customer, balance, number, agency, type);
        return SUCCESS;
    }
    else
        return ERROR;
}

int transact(char *accNumber1, char *accNumber2, double value)
{
    for (int i = 0; i < lastAcc; i++)
    {
        if (accList[i].Number == accNumber1 && accList[i].Balance >= value)
        {
            for (int j = 0; j < lastAcc; j++)
            {
                if (accList[j].Number == accNumber2)
                {
                    accList[i].Balance -= value;
                    accList[j].Balance += value;
                    return SUCCESS;
                }
            }
        }
    }
}

int editAcconut(Account *account, double ID, char *name, Birth *Birth, char *cpf, double phone, char genre)
{
    if (changeCustomer(&account->Client, ID, name, Birth, cpf, phone, genre))
    {
        return SUCCESS;
    }
    else
        return ERROR;
}

int delAcconut(char *accNumber)
{
    for (int i = 0; i < lastAcc; i++)
    {
        if (accList[i].Number == accNumber)
        {
            for (int j = i; j < lastAcc - 1; j++)
                accList[j].Number = accList[j + 1].Number;
            lastAcc--;
        }
    }
}

int viewListAccunt()
{
    for (int i = 0; i < lastAcc; i++)
    {
        printf("\n");
        viewDataAccunt(&accList[i]);
        printf("\n");
    }
    return SUCCESS;
}

int viewDataAccunt(Account *account)
{

    printf("\n------------ ACCOUNT DATA ------------\n");
    printf(" Agency: %s\n", account->Agency);
    printf(" Account Number: %s\n", account->Number);
    printf(" Account Type: %s\n", accountTypesStg[account->Type]);
    printf(" Balance: %.2lf\n", account->Balance);

    printf("------- ACCOUNT HOLDER DETAILS -------\n");
    printNewCustomer(&account->Client);

    return SUCCESS;
}
int newAccount()
{   
    Customer newCust;
    

}

static void operation(char option)
{
    switch (option)
    {
    case NEW_ACCOUNT:
        
        break;
    case UPDATA_ACCOUNT:
        break;
    case TRANSACT:
        break;
    case EDIT_ACCOUNT:
        break;
    case DELETE_ACCOUNT:
        break;
    case VIEW_LIST_ACCOUNT:
        break;
    case VIEW_DATA_ACCOUNT:
        break;
    case EXIT:
        break;

    default:
        option = ' ';
        break;
    }
}

