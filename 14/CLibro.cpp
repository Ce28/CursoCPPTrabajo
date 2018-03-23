#include "CLibro.h"

void CLibro::setTitulo(std::string str)
{   
    titulo = str;
}

std::string CLibro::getTitulo()
{
    return titulo;
}

void CLibro::setGenero(std::string str)
{   
    genero = str;
}

std::string CLibro::getGenero()
{
    return genero;
}

void CLibro::setNumPaginas(int a)
{   
    numPaginas = a;
}

int CLibro::getNumPaginas()
{
    return numPaginas;
}

void CLibro::print()
{
    std::cout << titulo;
    std::cout << " - " << genero;
    std::cout << " # " << numPaginas;
    std::cout << std::endl;
}