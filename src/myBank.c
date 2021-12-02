
/*
    Mini Projeto pra estudo: Bank System
    Site: https://www.codewithc.com/mini-project-in-c-bank-management-system/

*/

#include <stdio.h>
//#include "customer.h"
#include "bank.h"

int main(int argc, char const *argv[])
{
    
    struct Account* acc = createNewAccount();
     
    setNewAccount(acc ,
     setNewCustomer(20325649942,"joao batista menezes chagas",addBirth(7,3,1996),"016.979.703-11",999714002,'M'), 1000,"0003123","456-1",University);
    viewDataAccunt(acc);

    return 0;
}
