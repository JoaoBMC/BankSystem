#include "customer.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>


char genres[][GENRE_SIZE] = {"Male","Female"};

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
// ----------------------- Gets Customer -------------------------//
double getCustomerID(Customer *Customer)
{
  return Customer->ID;
}
char getCustomerName(Customer *Customer)
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
char getCustomerCPF(Customer *Customer)
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
// ----------------------- End Gets Customer -------------------------//


void printNewCustomer(Customer *Customer)
{   
  printf("ID: %.0lf\n",Customer->ID);
  printf("Name: %s\n",Customer->Name);
  printf("Birth: %d/ %d/%d\n", Customer->Birth.day,Customer->Birth.month,Customer->Birth.year);
  printf("CPF: %s\n",Customer->CPF);
  printf("Phone %.0lf\n",Customer->Phone);
  printf("Genre: %s\n", genres[Customer->Genre]);
}

int setNewCustomer(Customer *Customer,double ID, char name[NAME_SIZE], Birth *birth, char cpf[CPF_SIZE], double phone, char genre)
{   
 
  Customer->ID = ID;
  memcpy(Customer->Name,name,strlen(name));
  setBirth(Customer,birth);
  memcpy(Customer->CPF,cpf,strlen(cpf));
  Customer->Phone = phone;
  Customer->Genre = getGenre(genre);
  return SUCCESS;
}
