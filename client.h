#if !defined(CLIENT_H)
#define CLIENT_H


typedef struct Client
{
    char Name[50];
    int Birth;
    double Phone;

}Client;

void setNewClient(Client *client, char name[50], int birth, double phone);
void printNewClient(Client *Client);

#endif // CLIENT_H
