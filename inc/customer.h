#if !defined(CUSTOMER_H)
#define CUSTOMER_H

#define GENRE_SIZE 6
struct Birth;
struct Customer;
typedef enum Genre
{
    Male = 0,
    Female = 1,
}Genre;

typedef enum {
    ERROR = 0,
    SUCCESS = !ERROR
}StatusError;



/*Retorna um objeto tipo Customer*/
struct Customer* newCustomer(void);
/*Deleta um objeto tipo Customer*/
int delCustomer(struct Customer *customer);
/*Retorna ID do Customer*/
double getCustomerID(struct Customer *Customer);
/*Retorna Nome do Customer*/
char* getCustomerName(struct Customer *Customer);
/*Retorna Dia do Nascimeto do Customer*/
int getCustomerBirthDay(struct Customer *Customer);
/*Retorna Mês do Nascimeto do Customer*/
int getCustomerBirthMonth(struct Customer *Customer);
/*Retorna Ano do Nascimeto do Customer*/
int getCustomerBirthYear(struct Customer *Customer);
/*Retorna CPF do Customer*/
char* getCustomerCPF(struct Customer *Customer);
/*Retorna Telefone do Customer*/
double getCustomerPhone(struct Customer *Customer);
/*Retorna Genero do Customer*/
int getCustomerGenre(struct Customer *Customer);

/*Seta ID do Customer*/
int setCustomerID(struct Customer *Customer, double ID);
/*Seta Nome do Customer*/
int setCustomerName(struct Customer *Customer, char* Name);
/*Seta Dia do Nascimento do Customer*/
int setCustomerBirthDay(struct Customer *Customer, int BirthDay);
/*Seta Mês do Nascimento do Customer*/
int setCustomerBirthMonth(struct Customer *Customer, int BirthMonth);
/*Seta Ano do Nascimento do Customer*/
int setCustomerBirthYear(struct Customer *Customer, int BirthYear);
/*Seta CPF do Customer*/
int setCustomerCPF(struct Customer *Customer, char* CPF);
/*Seta Telefone do Customer*/
int setCustomerPhone(struct Customer *Customer, double Phone);
/*Seta Genero do Customer*/
int setCustomerGenre(struct Customer *Customer, char Genre);


int setNewCustomer(struct Customer *customer,double ID, char *name,struct Birth *Birth, char* cpf, double phone, char genre);

void printNewCustomer(struct Customer *Customer);

struct Birth* addBirth(int day, int month, int year);
#endif // Customer_H
