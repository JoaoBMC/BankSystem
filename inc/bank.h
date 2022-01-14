#if !defined(BANK)
#define BANK
#include "customer.h"

#define MAX_ACC_LIST_SIZE   500
int lastAcc;
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
//Account setNewAccount(Account* account, Customer* customer, double balance, char *number,char *agency, int type);
int initBank();
//int addNewAccount(Account *account, double balances, char *agency, int type);
int transact(char *accNumber1, char *accNumber2, double value);
int editAcconut(Account *account, double ID, char *name, Birth *Birth, char *cpf, double phone, char genre);
int delAcconut(char *NumberAcc);
int viewListAccunt();
int viewDataAccunt(Account *account);

#endif // BANK
