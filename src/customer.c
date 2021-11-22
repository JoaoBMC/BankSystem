#include "customer.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>


char genresStg[][GENRE_SIZE] = {"Male","Female"};

static int getGenre(char setGenre);
static int setBirth(Customer *Customer, Birth *birth);

static int setBirth(Customer *Customer, Birth *birth)
{
  Customer->Birth.day = birth->day;
  Customer->Birth.month = birth->month;
  Customer->Birth.year = birth->year;
}

static int getGenre(char setGenre)
{
  if (setGenre == 'M' || setGenre == 'm') 
    return male;
  else if (setGenre == 'F' || setGenre == 'f')
    return female;
  else
    return -1;
}
Customer* newCustomer(void)
{
 Customer* customer;
 customer = malloc(sizeof(Customer));
 return customer;
}
int delCustomer(Customer *customer)
{
  free(customer);
  return SUCCESS;
}
// ----------------------- Gets Customer -------------------------//
double getCustomerID(Customer *Customer)
{
  return Customer->ID;
}
char* getCustomerName(Customer *Customer)
{
  return Customer->Name;
}
int getCustomerBirthDay(Customer *Customer)
{
  return Customer->Birth.day;
}
int getCustomerBirthMonth(Customer *Customer)
{
  return Customer->Birth.month;
}
int getCustomerBirthYear(Customer *Customer)
{
  return Customer->Birth.year;
}
char* getCustomerCPF(Customer *Customer)
{
  return Customer->CPF;
}
double getCustomerPhone(Customer *Customer)
{
  return Customer->Phone;
}
int getCustomerGenre(Customer *Customer)
{
  return Customer->Genre;
}
// ----------------------- End Gets Customer ---------------------//

// ----------------------- Sets Customer -------------------------//
int setCustomerID(Customer *Customer, double ID)
{
  Customer->ID = ID;
  return SUCCESS; 
}
int setCustomerName(Customer *Customer, char* Name)
{
  Customer->Name = Name;
  return SUCCESS;
}
int setCustomerBirthDay(Customer *Customer, int BirthDay)
{
  Customer->Birth.day = BirthDay;
  return SUCCESS;
}
int setCustomerBirthMonth(Customer *Customer, int BirthMonth)
{
  Customer->Birth.month = BirthMonth;
  return SUCCESS;
}
int setCustomerBirthYear(Customer *Customer, int BirthYear)
{
  Customer->Birth.year = BirthYear;
  return SUCCESS;
}
int setCustomerCPF(Customer *Customer, char* CPF)
{
  Customer->CPF = CPF;
  return SUCCESS;
}
int setCustomerPhone(Customer *Customer, double Phone)
{
  Customer->Phone = Phone;
  return SUCCESS;
}
int setCustomerGenre(Customer *Customer, char Genre)
{
  Customer->Genre = getGenre(Genre);
  return SUCCESS;
}
// ----------------------- End Sets Customer -------------------------//


void printNewCustomer(Customer *Customer)
{   
  printf("ID: %.0lf\n",getCustomerID(Customer));
  printf("Name: %s\n",getCustomerName(Customer));
  printf("Birth: %d/%d/%d\n", getCustomerBirthDay(Customer),getCustomerBirthMonth(Customer),getCustomerBirthYear(Customer));
  printf("CPF: %s\n",getCustomerCPF(Customer));
  printf("Phone %.0lf\n",getCustomerPhone(Customer));
  printf("Genre: %s\n", genresStg[getCustomerGenre(Customer)]);
}

int setNewCustomer(Customer *customer,double ID, char *name, Birth *birth, char* cpf, double phone, char genre)
{   
  if( 
      setCustomerID(customer,ID) &&
      setCustomerName(customer,name) &&
      setCustomerBirthDay(customer, birth->day) &&
      setCustomerBirthMonth(customer,birth->month) &&
      setCustomerBirthYear(customer, birth->year) &&
      setCustomerCPF(customer, cpf) &&
      setCustomerPhone(customer, phone) &&
      setCustomerGenre(customer, genre)
    )
    {
      return SUCCESS;
    }else
      return ERROR;
}
