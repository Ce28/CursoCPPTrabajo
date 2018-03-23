#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    /*Formas de declarar un arreglo.    
    int arreglo[5];
    int arreglo[5] = {16, 2, 77, 40, 12071};
    int arreglo[] = {16, 2, 77, 40, 12071};
    //*/    
    
    //Variables.
    int arreglo[] = {1, 2, 3, 4, 5};
    int total = 0;

    //Forma del profesor.
    for (int f = 0; f < 5; f++)
    {
        total += arreglo[f];
    }
    std::cout << "El total es: " << total << std::endl;

    //Pausa.
    std::cin.get();

    return 0;
}