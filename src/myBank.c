
/*
    Mini Projeto pra estudo: Bank System
    Site: https://www.codewithc.com/mini-project-in-c-bank-management-system/

*/

#include <stdio.h>
//#include "customer.h"
#include "bank.h"

int main(int argc, char const *argv[])
{
    struct Customer* c = newCustomer();
    setNewCustomer(c,20325649942,"joao batista menezes chagas",addBirth(7,3,1996),"016.979.703-11",999714002,'M');
    
    printNewCustomer(c);
    delCustomer(c);

    return 0;
}
