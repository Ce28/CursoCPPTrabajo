#include <iostream>
#include <exception>
#include <vector>

using namespace std;

class CMiExcepcion: public exception
{
    virtual const char* what() const throw()
    {
        return "Ocurrio mi excepcion";
    }
}myexcep;

int dividir(int a, int b)
{
    if (b == 0)    
    {
        throw "No es posible dividir por 0";
    }
    return a / b;
}

int main(int argc, char const *argv[])
{
    //Variables.
    try
    {
        std::cout << "antes de lanzar " << std::endl;
        // codigo...
        vector<int> vec;
        vec.push_back(1);
        std::cout << vec[0] << std::endl;  
        std::cout << vec.at(0) << std::endl;  
        std::cout << vec.at(10) << std::endl;  
        std::cout << vec.at(10) << std::endl;  

        throw myexcep;
        dividir(2, 6);
        //throw 'o';

        std::cout << "despues de lanzar " << std::endl;        
    }
    catch(exception &e)
    {
        std::cout << "excepcion tipo: " << e.what() << std::endl;
    }
    catch(int e)
    {
        std::cout << "excepcion tipo entero: " << e << std::endl;
    }
    catch(double e)
    {
        std::cout << "excepcion tipo double: " << e << std::endl;
    }
    catch(const char* e)
    {
        std::cout << "ERROR: " << e << std::endl;
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