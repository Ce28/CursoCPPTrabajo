#include <iostream>
#include "CLibro.h"
#include "CLibrero.h"

int main(int argc, char const *argv[])
{
    //Variables.
    CLibro lib;

    lib.setTitulo("ready player one");
    lib.setGenero("ciencia ficcion");
    lib.setNumPaginas(250);
    //lib.print();
    
    {
    CLibrero librero;
    librero.setColor("Rojo");
    librero.setLibro(&lib);
    librero.print();
    librero.getLibro()->setNumPaginas(900);
    librero.print();
    }

    //std::cout << librero.getLibro();
    lib.print();

    //Pausa.
    std::cin.get();

    return 0;
}