#include "client.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>


char genres[][GENRE_SIZE] = {"Male","Female"};

static int getGenre(char setGenre);
static int setBirth(Client *client, Birth *birth);



int setNewClient(Client *client,double ID, char name[NAME_SIZE], Birth *birth, char cpf[CPF_SIZE], double phone, char genre)
{   
 
  client->ID = ID;
  memcpy(client->Name,name,strlen(name));
  setBirth(client,birth);
  memcpy(client->CPF,cpf,strlen(cpf));
  client->Phone = phone;
  client->Genre = getGenre(genre);
  return 1;
}
static int setBirth(Client *client, Birth *birth)
{
  client->Birth.day = birth->day;
  client->Birth.month = birth->month;
  client->Birth.year = birth->year;
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
void printNewClient(Client *Client)
{   
  printf("ID: %.0lf\n",Client->ID);
  printf("Name: %s\n",Client->Name);
  printf("Birth: %d/ %d/%d\n", Client->Birth.day,Client->Birth.month,Client->Birth.year);
  printf("CPF: %s\n",Client->CPF);
  printf("Phone %.0lf\n",Client->Phone);
  printf("Genre: %s\n", genres[Client->Genre]);
}

double getID(Client *Client)
{
  return Client->ID;
}
char getName(Client *Client)
{
  return *Client->Name;
}



