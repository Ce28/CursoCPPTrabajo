#include "CPunto.h"

CPunto::CPunto(int x, int y)
:y(y)
{
    this->x = x;
}

void CPunto::print()
{
    std::cout << "Punto: (" << x << ", " << y << ")" << std::endl;
}

CPunto CPunto::operator+(CPunto p)
{
    CPunto temp;
    temp.x = p.x + x;
    temp.y = p.y + y;
    return temp;
}

CPunto CPunto::operator-(CPunto p)
{
    CPunto temp;
    temp.x = this->x - p.x ;
    temp.y = this->y - p.y;
    return temp;
}