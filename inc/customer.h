#if !defined(CUSTOMER_H)
#define CUSTOMER_H

#define GENRE_SIZE 6

typedef enum Genre
{
    Male = 0,
    Female = 1,
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

/*Retorna um objeto tipo Customer*/
Customer* newCustomer(void);
/*Deleta um objeto tipo Customer*/
int delCustomer(Customer *customer);
/*Retorna ID do Customer*/
double getCustomerID(Customer *Customer);
/*Retorna Nome do Customer*/
char* getCustomerName(Customer *Customer);
/*Retorna Dia do Nascimeto do Customer*/
int getCustomerBirthDay(Customer *Customer);
/*Retorna Mês do Nascimeto do Customer*/
int getCustomerBirthMonth(Customer *Customer);
/*Retorna Ano do Nascimeto do Customer*/
int getCustomerBirthYear(Customer *Customer);
/*Retorna CPF do Customer*/
char* getCustomerCPF(Customer *Customer);
/*Retorna Telefone do Customer*/
double getCustomerPhone(Customer *Customer);
/*Retorna Genero do Customer*/
int getCustomerGenre(Customer *Customer);

/*Seta ID do Customer*/
int setCustomerID(Customer *Customer, double ID);
/*Seta Nome do Customer*/
int setCustomerName(Customer *Customer, char* Name);
/*Seta Dia do Nascimento do Customer*/
int setCustomerBirthDay(Customer *Customer, int BirthDay);
/*Seta Mês do Nascimento do Customer*/
int setCustomerBirthMonth(Customer *Customer, int BirthMonth);
/*Seta Ano do Nascimento do Customer*/
int setCustomerBirthYear(Customer *Customer, int BirthYear);
/*Seta CPF do Customer*/
int setCustomerCPF(Customer *Customer, char* CPF);
/*Seta Telefone do Customer*/
int setCustomerPhone(Customer *Customer, double Phone);
/*Seta Genero do Customer*/
int setCustomerGenre(Customer *Customer, char Genre);


Customer setNewCustomer(Customer *customer,double ID, char *name,Birth *Birth, char* cpf, double phone, char genre);

void printNewCustomer(Customer *Customer);

Birth* addBirth(int day, int month, int year);
#endif // Customer_H
