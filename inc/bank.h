#if !defined(BANK)
#define BANK

typedef enum AccountType
{
    Savings     = 0,
    Salary      = 0,
    checking    = 0,
    university   = 0

}AccountType;
int initBank();
int addNewAccount();
void transact();
void editAcconut();
void deletAcconut();
void viewListAccunt();
void viewDataAccunt();

#endif // BANK
