#include"bank.h"
#include "menu.h"
#include "client.h"
#include <stdio.h>

int option;
void initBank()
{
   operation(init_menu());
}


void addNewAccount()
{

}
void transact()
{

}
void editAcconut()
{

}
void deletAcconut()
{

}
void viewListAccunt()
{

}
void viewDataAccunt()
{

}

void operation(int option)
{
    switch (option)
    {
    case 1:
        addNewAccount();
        printf("new client : %d",option);
        break;
    
    default:
        break;
    }
}
