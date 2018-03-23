#include "CRectangulo.h"

int CRectangulo::contador = 0;

CRectangulo::~CRectangulo()
{
    std::cout << "Murio el objeto: " << this->nombre << std::endl;
    contador--;
}

CRectangulo::CRectangulo()
{
    this->base = 0;
    this->altura = 0;    
    this->nombre = "Sin nombre";
    contador++;
}

CRectangulo::CRectangulo(int base, int altura)
{
    this->base = base;
    this->altura = altura;    
    this->nombre = "Sin nombre";
    contador++;
}

CRectangulo::CRectangulo(std::string str)
:base(0), altura(0), nombre(str)    //<-- Forma de inicializar.
{
    contador++;
}

CRectangulo::CRectangulo(std::string str, int b, int a)
:nombre(str)            //
{                       //
    base = b;           //
    this->altura = a;   //<-- Otra forma de inicializar.
    contador++;
}

void CRectangulo::print()
{
    std::cout << "Nombre: " << this->nombre << " ";
    std::cout << this->base << "x" << this->altura << "=" << this->base * this->altura << std::endl;
}

int CRectangulo::getContador()
{
    //std::cout << this->nombre;  //<- no se pueden usa las demas variables por que es un metodo estatico, 
    //solo pueden usar elementos estaticos con metodos estaticos.
    return contador;
}