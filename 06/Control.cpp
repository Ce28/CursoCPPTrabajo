#include <iostream>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    //Variables.
    //int x = -9;

    //Llamar desde la consola como: 
    //             0     1   <-- Argumentos.
    //          Control -5   <-- Llamar de esta manera.

    //IF        -----------------------------
    if(argc < 2)
    {
        std::cout << "USO INCORRECTO: control <x>" << std::endl;
        return -1;
    }

    //IF - ELSE -----------------------------
    int x = atoi(argv[1]);
    if(x > 0)
    {
        std::cout << "X es positivo" << std::endl;
    }
    else if (x < 0)
    {
        std::cout << "X es negativo" << std::endl;        
    }
    else
    {
        std::cout << "X es nulo" << std::endl;    
    }

    //FOR       -----------------------------
    for (int i = 0; i < 10; i++)
    {
        std::cout << i << ", ";
    }
    std::cout << std::endl;

    //FOR EACH apartir de C++ 11
    int arr[] = {1, 2, 3, 4};
    for (int a :arr)
    {
        std::cout << a << ", ";
    }
    std::cout << std::endl;

    //WHILE     -----------------------------
    int n = 5;
    while (n > 0)
    {        
        //continue;
        //break;
        n--;
        if (n == 3)
        {
            continue;
        }
        std::cout << n << ", ";
    }
    std::cout << std::endl;

    //DO - WHILE-----------------------------
    do 
    {
        std::cout << "do while";
    } while(false);
    std::cout << std::endl;

    //SWITCH
    //int y = 2;
    enum colores{rojo, azul, blanco};
    colores y = azul;
    switch (y)
    {
        case rojo:
            std::cout << "y es rojo";
            break;
        case azul:
            std::cout << "y es azul";
            break;
        case blanco:
            std::cout << "y es blanco";
            break;
        default:
            std::cout << "Valor desconocido";
            break;
    }
    std::cout << std::endl;

    //switch en cascada
    switch (y)
    {
        case 1:
        case 2:
        case 3:
            std::cout << "y es 1 o 2 o 3";
            break;
        default:
            std::cout << "Valor desconocido";
            break;
    }
    std::cout << std::endl;


    //Pausa.
    std::cin.get();

    return 0;    
}