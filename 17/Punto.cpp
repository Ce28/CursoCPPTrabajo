#include <iostream>
#include "CPunto.h"

CPunto operator*(CPunto p, int a)   //<--Sobrecarga de operador por funcion.
{
    CPunto temp;
    temp.x = p.x * a;
    temp.y = p.y * a;
    return temp;
}

CPunto operator*(int a, CPunto p)   //<--Sobrecarga de operador por funcion.
{
    CPunto temp;
    temp.x = p.x * a;
    temp.y = p.y * a;
    return temp;
}

std::ostream& operator<<(std::ostream &out, CPunto p)   //<--Sobrecarga de operador por funcion.
{
    out << "Punto: [" << p.x << ", " << p.y << "]";
    return out;
}

int main(int argc, char const *argv[])
{
    //Variables.
    CPunto p1(2, 3);
    CPunto p2(5, 5);
    p1.print();
    p2.print();

    (p1 + p2).print();
    //p1.operator+(p2);

    (p1 - p2).print();
    //p1.operator-(p2);

    (p1 * 3).print();
    //operator*(p1, 3);
    (3 * p1).print();


    std::cout << p1 << " -- mas contenido -- " << p2*5 << std::endl;


    //Pausa.
    std::cin.get();

    return 0;
}