
/*
    Mini Projeto pra estudo: Bank System
    Site: https://www.codewithc.com/mini-project-in-c-bank-management-system/

*/

#include <stdio.h>
#include "client.h"

int main(int argc, char const *argv[])
{
    Client c;
    Birth bir;
    bir.day = 07;
    bir.month = 03;
    bir.year = 1996;
    setNewClient(&c,20325649942,"joao batista menezes chagas",&bir,"016.979.703-11",999714002,'m');
    printNewClient(&c);
    printf("test: %.0lf\n\n",c.ID);
    return 0;
}
