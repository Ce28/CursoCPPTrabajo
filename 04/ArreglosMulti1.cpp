#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    /*Formas de declarar un arreglo multidimencial.    
    int arreglo[2][5];
    int arreglo[2][5] = {{16, 2, 77, 40, 12071}, {16, 2, 77, 40, 12071}};
    int arreglo[][5] = {{16, 2, 77, 40, 12071}, {16, 2, 77, 40, 12071}};
    //*/    
    
    //Variables.
    int arreglo[][5] = {
        {16, 2, 77, 40, 12071}, 
        {16, 2, 77, 40, 12071}, 
        {16, 2, 77, 40, 12071}, 
        {16, 2, 77, 40, 12071}
        };
    int total = 0;

    //Forma del profesor.
    /*Asigna.
    for (int k = 0; k < 4; k++)
    {
        for (int f = 0; f < 5; f++)
        {
            arreglo[k][f] = k * f;
            std::cout << arreglo[k][f] << "\t";
        }       
        std::cout << std::endl;
    }
    //*/
    //Imprime.
    for (int k = 0; k < 4; k++)
    {
        for (int f = 0; f < 5; f++)
        {
            std::cout << arreglo[k][f] << "\t";
        }       
        std::cout << std::endl;
    }
    //Suma.
    for (int k = 0; k < 4; k++)
    {
        for (int f = 0; f < 5; f++)
        {
            total += arreglo[k][f];
        }       
    }
    std::cout << "El total es: " << total << std::endl;

    //Pausa.
    std::cin.get();

    return 0;
}