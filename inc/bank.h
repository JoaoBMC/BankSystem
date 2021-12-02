#if !defined(BANK)
#define BANK

typedef enum AccountType
{
    Savings     = 0,
    Salary      = 0,
    checking    = 0,
    university   = 0

}AccountType;


struct Account;
Account setNewAccount(struct Account* account, struct Customer* customer, double balance, char *number,char *agency, char type);
int initBank();
int addNewAccount();
void transact();
void editAcconut();
void deletAcconut();
void viewListAccunt();
void viewDataAccunt();

#endif // BANK
