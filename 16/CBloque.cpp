#include "CBloque.h"

CBloque::CBloque()
{
    color = "negro";
    dimencion = 0;
}

CBloque::CBloque(std::string col)
{
    color = col;
    dimencion = 0;
}

CBloque::CBloque(int dim)
{
    color = "negro";
    dimencion = dim;
}

CBloque::CBloque(std::string col, int dim)
{
    color = col;
    dimencion = dim;
}

CBloque::~CBloque()
{

}

void CBloque::print()
{
    std::cout << "bloque: " << color << ", " << dimencion << std::endl;
}