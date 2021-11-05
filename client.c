#include "client.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>


void setNewClient(Client *client, char name[50], int birth, long long int phone)
{   
    strcpy(client->Name, name);
    client->Birth = birth;
    client->Phone = phone;
}

void printNewClient(Client *Client)
{   
  printf("Nome: %s\n", Client->Name);
  printf("Aniversario: %d\n", Client->Birth);
  printf("telefone: %d\n", Client->Phone);
}