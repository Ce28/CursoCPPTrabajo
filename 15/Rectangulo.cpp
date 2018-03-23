#include <iostream>
#include "CRectangulo.h"

class CCuadrado
{
public:
    void convertir(CRectangulo &rec)
    {
        rec.base = rec.altura;
    }
    void printRectangulo(CRectangulo const &rec)
    {
        std::cout << "Desde cuadrado: " << rec.nombre << " " << rec.base;
        std::cout << "x" << rec.altura << std::endl;        
    }
};

void reducir(CRectangulo &r) //-> Por parametro por referencia
{
    r.base /= 2;
    r.altura /= 2;
}

void reducir(CRectangulo &r, int a)
{
    r.base /= a;
    r.altura /= a;
}

int main(int argc, char const *argv[])
{
    //Variables.
    {
        std::cout << "Existen: " << CRectangulo::getContador() << std::endl;
        CRectangulo rec2(5, 10);    
        CRectangulo rec3("Tres");
        CRectangulo rec4("Cuatro", 20, 25);

        std::cout << "Existen: " << CRectangulo::getContador() << std::endl;
        CRectangulo * prec = new CRectangulo("cinco");
        prec->print();
        prec->getContador();
        std::cout << "Existen: " << CRectangulo::getContador() << std::endl;
        delete prec;
        
        std::cout << "Existen: " << prec->getContador() << std::endl;
        {
            CRectangulo rec;    
            std::cout << "Existen: " << CRectangulo::getContador() << std::endl;
            rec.print();
        }    
        std::cout << "Existen: " << CRectangulo::getContador() << std::endl;

        rec2.print();
        rec3.print();
        rec4.print();
        std::cout << std::endl;
        reducir(rec2);
        rec2.print();

        reducir(rec4);
        rec4.print();

        CCuadrado cuad;
        cuad.convertir(rec4);
        rec4.print();
        cuad.printRectangulo(rec4);

        std::cin.get();
    }
    //Pausa.
    std::cin.get();

    return 0;
}