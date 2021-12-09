
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
     
    addNewAccount(acc ,setNewCustomer(20325649941,"joao batista menezes chagas",addBirth(7,3,1996),"016.979.703-11",999714002,'M'), 1000,"1","456-1",University);
    addNewAccount(acc ,setNewCustomer(44326649942,"Carlos almeida",addBirth(6,7,1998),"061.433.882-41",988641235,'f'), 5500,"2","9982-5",Salary);
    addNewAccount(acc ,setNewCustomer(20325649943,"joao batista menezes chagas",addBirth(7,3,1996),"016.979.703-11",999714002,'M'), 1000,"3","456-1",University);
    addNewAccount(acc ,setNewCustomer(44326649944,"Carlos almeida",addBirth(6,7,1998),"061.433.882-41",988641235,'f'), 5500,"4","9982-5",Salary);
    for (int i = 0; i < lastAcc; i++)
    {
        viewDataAccunt(&accList[i]);
    }
    printf("\n\n\n\n");
    delAcconut("2");
    for (int i = 0; i < lastAcc; i++)
    {
        viewDataAccunt(&accList[i]);
    }
    
    return 0;
}
