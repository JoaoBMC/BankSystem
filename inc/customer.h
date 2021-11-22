#if !defined(CUSTOMER_H)
#define CUSTOMER_H

#define NAME_SIZE  50
#define CPF_SIZE   13
#define GENRE_SIZE 6

typedef enum Genre
{
    male = 0,
    female = 1,
}Genre;

typedef enum {
    ERROR = 0,
    SUCCESS = !ERROR
}StatusError;

typedef struct Birth
{
    int day;
    int month;
    int year;

}Birth;

typedef struct Customer
{
    double ID;
    char *Name;
    Birth Birth;
    char *CPF;
    double Phone;
    Genre Genre;

}Customer;

Customer* newCustomer(void);
int delCustomer(Customer *customer);

// ----------------------- Gets Customer -------------------------//

double getCustomerID(Customer *Customer);

char* getCustomerName(Customer *Customer);

int getCustomerBirthDay(Customer *Customer);

int getCustomerBirthMonth(Customer *Customer);

int getCustomerBirthYear(Customer *Customer);

char* getCustomerCPF(Customer *Customer);

double getCustomerPhone(Customer *Customer);

int getCustomerGenre(Customer *Customer);
// ----------------------- End Gets Customer -------------------------//

// ----------------------- Sets Customer -------------------------//
int setCustomerID(Customer *Customer, double ID);

int setCustomerName(Customer *Customer, char* Name);

int setCustomerBirthDay(Customer *Customer, int BirthDay);

int setCustomerBirthMonth(Customer *Customer, int BirthMonth);

int setCustomerBirthYear(Customer *Customer, int BirthYear);

int setCustomerCPF(Customer *Customer, char* CPF);

int setCustomerPhone(Customer *Customer, double Phone);

int setCustomerGenre(Customer *Customer, char Genre);

// ----------------------- End Sets Customer -------------------------//

int setNewCustomer(Customer *customer,double ID, char *name, Birth *birth, char* cpf, double phone, char genre);

void printNewCustomer(Customer *Customer);

#endif // Customer_H
