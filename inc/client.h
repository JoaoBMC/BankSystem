#if !defined(CLIENT_H)
#define CLIENT_H

typedef enum genre
{
    male = 0,
    felmale = 1,
}Genre;

typedef struct Birth
{
    int day;
    int month;
    int year;

}Birth;

typedef struct Client
{
    double ID;
    char name[50];
    Birth birth;
    char cpf[14];
    double Phone;
    Genre genre;

}Client;

int setNewClient(Client *client,double ID, char name[50], Birth *birth, char cpf[14], double phone, int genre);
void printNewClient(Client *Client);

#endif // CLIENT_H
