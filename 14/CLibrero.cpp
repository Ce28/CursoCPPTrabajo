#include "CLibrero.h" 

void CLibrero::setColor(std::string str)
{
    color = str;
}

std::string CLibrero::getColor()
{
    return color;
}

void CLibrero::setLibro(CLibro* lib)
{
    libro = lib;
}

CLibro* CLibrero::getLibro()
{
    return libro;
}

void CLibrero::print()
{
    std::cout << "Librero de color " << color << " libro: " << std::endl;
    libro->print();
}