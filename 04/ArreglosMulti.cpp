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
    int ren = 7;
    int col = 7;
    int arreglo[ren][col];
    int total = 0;

    //Forma del profesor.
    //Asigna.
    for (int k = 0; k < ren; k++)
    {
        for (int f = 0; f < col; f++)
        {
            arreglo[k][f] = k * f;
            std::cout << arreglo[k][f] << "\t";
        }       
        std::cout << std::endl;
    }
    //Suma.
    for (int k = 0; k < ren; k++)
    {
        for (int f = 0; f < col; f++)
        {
            total += arreglo[k][f];
        }       
    }
    std::cout << "El total es: " << total << std::endl;

    //Pausa.
    std::cin.get();

    return 0;
}