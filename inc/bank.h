#if !defined(BANK)
#define BANK

typedef enum AccountType
{
    Savings     = 0,
    Salary      = 1,
    checking    = 2,
    university  = 3

}AccountType;

typedef struct Account
{
    struct Customer;
    double Balance;
    char *Number;
    char *Agency;
    char Type;

}Account;

Account *createNewAccount(void);
struct Account setNewAccount(struct Account* account, double balance, char *number,char *agency, char type);
int initBank();
int addNewAccount();
void transact();
void editAcconut();
void deletAcconut();
void viewListAccunt();
void viewDataAccunt();

#endif // BANK
