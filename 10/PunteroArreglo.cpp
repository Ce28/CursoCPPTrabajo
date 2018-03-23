#include <iostream>

void incremento(void *data, int size)
{
    if(size == sizeof(char))
    {
        (*(char*)data)++;        
    }
    else if(size == sizeof(int))
    {
        (*(int*)data)++;        
    }
}

int main(int argc, char const *argv[])
{
    //Variables.
    int numeros[6] = {0};
    int * pint;

    void * pvoid;
    int a = 10;
    char c = 'c';
    pvoid = &a;
    pvoid = &c;
    *(char*)pvoid = 'd';
    std::cout << *(char*)pvoid << std::endl;
    std::cout << *(int*)pvoid << std::endl;

    incremento(&a, sizeof(a));
    incremento(&c, sizeof(c));
    std::cout << a << std::endl;
    std::cout << c << std::endl;
    std::cout << "antes" << std::endl;
    
    


    /*/===================
    const int x = 10;
    #define X 10        //<-- Directiva de preprocesador
    int y = X;          //z-- Remplaza la X con 10 al compilar

    int  * pint;
    pint = &x;
    *pint = 10;

    const int * pint;
    pint = &x;
    *pint = 10;         //<-- No valido

    int * const pint;   //<-- Inicia con basura y no se puede modificar
    pint =  &x;         //<-- No valido
    *pint = 10;

    const int * const pint = &algo; //<-- Todo constante.
    pint = &x;          //<-- No valido
    *pint = 10;         //<-- No valido

    const int * const objeto::Metodo(const int* const &x) const{}
    //===================*/

    pint = numeros;
    *pint = 10;

    pint++;
    *pint = 20;

    pint = &numeros[2];
    *pint = 30;

    pint = numeros + 3;
    *pint = 40;
    
    pint = numeros;
    *(pint + 4) = 50;

    pint[5] = 60;

    for (int  f = 0; f < 6; f++)
    {
        std::cout << numeros[f] << std::endl;
    }

    //Pausa.
    std::cin.get();

    return 0;
}