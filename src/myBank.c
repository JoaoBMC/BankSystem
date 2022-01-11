
/*
    Mini Projeto pra estudo: Bank System
    Site: https://www.codewithc.com/mini-project-in-c-bank-management-system/

*/

#include <stdio.h>
//#include "customer.h"
#include "bank.h"
#include <string.h>

void teste(char *cc)
{
    char ch[] = "55",c ;
    int i = 8;
    c = i+'0';
    ch[0] = c;
    memcpy(cc,ch,2);
}

int main(int argc, char const *argv[])
{
    char *c;
    struct Account* acc = createNewAccount();
     
    addNewAccount(acc ,setNewCustomer(20325649941,"menezes",addBirth(7,3,1996),"016.979.703-11",999714002,'M'), 1000,"456-1",University);
    addNewAccount(acc ,setNewCustomer(44326649942," almeida" ,addBirth(6,7,1998),"061.433.882-41",988641235,'f'), 5500,"9982-5",Salary);
    addNewAccount(acc ,setNewCustomer(20325649943," chagas",addBirth(7,3,1996),"016.979.703-11",999714002,'M'), 1000,"456-1",University);
    addNewAccount(acc ,setNewCustomer(44326649944,"Carlos",addBirth(6,7,1998),"061.433.882-41",988641235,'f'), 5500,"9982-5",Salary);
    teste(c);
    printf("%s",c);
    viewListAccunt();
    
    return 0;
}
