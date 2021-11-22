
/*
    Mini Projeto pra estudo: Bank System
    Site: https://www.codewithc.com/mini-project-in-c-bank-management-system/

*/

#include <stdio.h>
#include "customer.h"

int main(int argc, char const *argv[])
{
    Customer* c;
    c = newCustomer();
    Birth bir;
    bir.day = 07;
    bir.month = 03;
    bir.year = 1996;
    setNewCustomer(c,20325649942,"joao batista menezes chagas",&bir,"016.979.703-11",999714002,'m');
    printNewCustomer(c);
    delCustomer(c);
    
    return 0;
}
