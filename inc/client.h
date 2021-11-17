#if !defined(CLIENT_H)
#define CLIENT_H

#define NAME_SIZE 50
#define CPF_SIZE 13
#define GENRE_SIZE 6

typedef enum Genre
{
    male = 0,
    female = 1,
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
    char Name[NAME_SIZE];
    Birth Birth;
    char CPF[CPF_SIZE];
    double Phone;
    Genre Genre;
}Client;

int setNewClient(Client *client,double ID, char name[NAME_SIZE], 
                 Birth *birth, char cpf[CPF_SIZE], double phone, char genre);

void printNewClient(Client *Client);

#endif // CLIENT_H
