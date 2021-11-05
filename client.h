#if !defined(CLIENT_H)
#define CLIENT_H

typedef struct Client
{
    char Name[50];
    int Birth;
    unsigned int Phone;

}Client;

void setNewClient(Client *client, char name[50], int birth,long long int phone);
void printNewClient(Client *Client);

#endif // CLIENT_H
