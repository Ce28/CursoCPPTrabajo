#include <iostream>

int main(int argc, char const *argv[])
{
    //Variables.
    char * pchar;
    short * pshort;
    int * pint;
    int numero = 10;

    pint = &numero;
    pchar = (char*)pint;
    pshort = (short*)pint;  //<-- Castear o convertir

    
    std::cout << "Direccion de pchar: " << &pchar << std::endl; 
    std::cout << "Direccion de pshort: " << &pshort << std::endl; 
    std::cout << "Direccion de pint: " << &pint << std::endl; 
    std::cout << "Direccion de numero: " << &numero << std::endl; 
    std::cout << std::endl;
    
    std::cout << "Valor de pchar: 0x" << std::hex << (int)pchar << std::endl; 
    std::cout << "Valor de pshort: " << pshort << std::endl; 
    std::cout << "Valor de pint: " << pint << std::endl; 
    std::cout << "Valor de numero: " << std::dec << numero << std::endl; 
    std::cout << std::endl;

    pchar++;
    pshort++;
    pint++;
    *pchar = 3;
    std::cout << "Valor de pchar: 0x" << std::hex << (int)pchar << std::endl; 
    std::cout << "Valor de pshort: " << pshort << std::endl; 
    std::cout << "Valor de pint: " << pint << std::endl; 
    std::cout << "Valor de numero: " << std::dec << numero << std::endl; 
    std::cout << std::endl;
        
    pchar += 3;
    pshort -= 3;
    pint += 2;
    std::cout << "Valor de pchar: 0x" << std::hex << (int)pchar << std::endl; 
    std::cout << "Valor de pshort: " << pshort << std::endl; 
    std::cout << "Valor de pint: " << pint << std::endl; 
    std::cout << "Valor de numero: " << std::dec << numero << std::endl; 
    std::cout << std::endl;

    //Pausa.
    std::cin.get();

    return 0;
}