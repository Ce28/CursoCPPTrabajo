#include <iostream>
#include "CBloque.h"

int main(int argc, char const *argv[])
{
    //Variables.
    CBloque b1;
    CBloque b2("rojo");
    CBloque b3("rojo", 10);
    CBloque b4(20);

    b1.print();
    b2.print();
    b3.print();
    b4.print();

    //Pausa.
    std::cin.get();

    return 0;
}