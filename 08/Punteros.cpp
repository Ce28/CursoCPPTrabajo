#include <iostream>

int main(int argc, char const *argv[])
{
    //Buscar que es un Puntero
    //Buscar que es una Referencia(&) ejem: &andy Obtiene el espacio en memoria
    //Buscar que es un dereferencia(*) ejem: *ted Obtiene o cambia el valor almacenado en un espacio de memoria

    //Variables.
    int primero = 0;
    int segundo = 1;
    int * pint = NULL;  //Puntero simple.
    int ** pintd;       //Puntero doble.
    //int * pint = nullptr; //<----Despues de g++11

    if (pint != NULL)
    {
        std::cout << "Direccion de pint: " << pint << std::endl; 
        std::cout << "Valor de pint: " << *pint << std::endl;    
        //*pint = 10;
        std::cout << std::endl;
    }

    pint = &primero;

    std::cout << "Direccion de pint: " << &pint << std::endl;
    std::cout << "Direccion de primero: " << &primero << std::endl;
    std::cout << "Direccion de segundo: " << &segundo << std::endl;
    std::cout << std::endl;

    std::cout << "Valor de pint: " << pint << std::endl;
    std::cout << "Valor de primero: " << primero << std::endl;
    std::cout << "Valor de segundo: " << segundo << std::endl;
    std::cout << std::endl;

    *pint  = 10;
    std::cout << "Valor de pint: " << pint << std::endl;
    std::cout << "Valor de primero: " << primero << std::endl;
    std::cout << "Valor de segundo: " << segundo << std::endl;
    std::cout << std::endl;

    pint = &segundo;
    *pint = 20;
    std::cout << "Valor de pint: " << pint << std::endl;
    std::cout << "Valor de primero: " << primero << std::endl;
    std::cout << "Valor de segundo: " << segundo << std::endl;
    std::cout << std::endl;


    //Pausa.
    std::cin.get();

    return 0;
}