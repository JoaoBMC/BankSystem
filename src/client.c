#include "client.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>


int setNewClient(Client *client,double ID, char name[50], Birth *birth, char cpf[14], double phone, int genre)
{   
  client->ID = ID;
  memcpy(&client->name,name,sizeof(name));
  memcpy(&client->birth, birth,sizeof(birth));
  memcpy(&client->cpf, cpf, sizeof(cpf));
  client->Phone = phone;
  client->genre = genre;
}

void printNewClient(Client *Client)
{   
  printf("ID: %d\n",Client->ID);
  printf("Name: %s\n",Client->name);
  printf("Birth: %d/%d/%d\n", Client->birth.day,Client->birth.month,Client->birth.year);
  printf("CPF: %s\n",Client->cpf);
  printf("Phone %lf\n");
 // printf("genre: %s\n"); TODO: função para retornar o genero em string
}



