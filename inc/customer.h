#if !defined(CUSTOMER_H)
#define CUSTOMER_H

#define NAME_SIZE 50
#define CPF_SIZE 13
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
    char Name[NAME_SIZE];
    Birth Birth;
    char CPF[CPF_SIZE];
    double Phone;
    Genre Genre;

}Customer;

int setNewCustomer(Customer *Customer,double ID, char name[NAME_SIZE], 
                 Birth *birth, char cpf[CPF_SIZE], double phone, char genre);

void printNewCustomer(Customer *Customer);

#endif // Customer_H
