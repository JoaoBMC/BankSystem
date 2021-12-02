#if !defined(BANK)
#define BANK
#include "customer.h"
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

Account *createNewAccount(void);
Account setNewAccount(struct Account* account, Customer* customer, double balance, char *number,char *agency, int type);
int initBank();
int addNewAccount();
void transact();
void editAcconut();
void deletAcconut();
void viewListAccunt();
void viewDataAccunt(Account *account);

#endif // BANK
