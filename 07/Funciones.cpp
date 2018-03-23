#include <iostream>
#include "func.h"

//tipo nombre(parametros){}
//g++ Funciones.cpp func.cpp -o Funciones.exe

int main(int argc, char const *argv[])
{
    saludo();
    saludo(10);

    //Pausa.
    std::cin.get();

    return 0;
}
