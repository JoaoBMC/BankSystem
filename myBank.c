#include "menu.h"
#include "client.h"
#include <stdio.h>

int main(int argc, char const *argv[])
{
    Client c;
    setNewClient(&c,"Joao Batista",7031996, 999714002);
    printNewClient(&c);
    return 0;
}

 