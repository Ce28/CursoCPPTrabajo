#include <iostream>

int main(int argc, char const *argv[])
{
    //Variables.
    int x;
    std::cout << "Ingrese el numero de elementos: ";
    std::cin >> x;

    int * const pint = new int[x];
    if (pint == NULL)
    {
        std::cout << "No se pudo reservar memoria" << std::endl;
    }
    else
    {
        for (int f = 0; f < x; f++)
        {
            pint[f] = f;
            std::cout << pint[f] << std::endl;
        }
        delete[] pint;        
    }

    //Pausa.
    std::cin.get();
    std::cin.get();

    return 0;
}