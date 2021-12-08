#if !defined(BANK)
#define BANK
#include "customer.h"

#define MAX_ACC_LIST_SIZE   500

typedef enum AccountType
{
    Savings     = 0,
    Salary      = 1,
    Checking    = 2,
    University  = 3

}AccountType;

typedef struct Account
{
    Customer Client;
    double Balance;
    char *Number;
    char *Agency;
    int Type;

}Account;

Account accList[MAX_ACC_LIST_SIZE];

Account *createNewAccount(void);
Account setNewAccount(Account* account, Customer* customer, double balance, char *number,char *agency, int type);
int initBank();
int addNewAccount(Account *account, Customer *customer, double balance, char *number, char *agency, int type);
void transact();
void editAcconut();
void deletAcconut();
void viewListAccunt(Account *account);
int viewDataAccunt(Account *account);

#endif // BANK
