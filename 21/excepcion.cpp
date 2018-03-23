#include <iostream>

int main(int argc, char const *argv[])
{
    //Variables.
    try
    {
        std::cout << "antes de lanzar " << std::endl;
        // codigo...
        throw 'o';

        std::cout << "despues de lanzar " << std::endl;        
    }
    catch(int e)
    {
        std::cout << "excepcion tipo entero: " << e << std::endl;
    }
    catch(double e)
    {
        std::cout << "excepcion tipo double: " << e << std::endl;
    }
    catch(...)
    {
        std::cout << "excepcion deconocida" << std::endl;    
        return -1;
    }

    std::cout << "continuando..." << std::endl;        

    //Pausa.
    std::cin.get();

    return 0;
}