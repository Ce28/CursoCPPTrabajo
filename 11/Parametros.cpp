#include <iostream>

// void doble(int a)    //<-- Paso por valor
// {
//     a *= 2;
// }

/*int&*/ void doble(int &a)  //<-- Pasar por referencia y retorna por referencia
{
    a *= 2;
    std::cout << "desde ref" << std::endl;
    // int y = a;
    // return y;
}

/*int* */void doble(int * p) //<-- Por puntero
{
    *p *= 2;    
    std::cout << "desde punt" << std::endl;
    // return p;
}

int main(int argc, char const *argv[])
{
    //Variables.
    int x = 4;

    doble(x);   //<-- Se usa de igual manera en caso de ser por valor o por referencia.
    std::cout << x << std::endl;
    doble(&x);  //<-- Llama a la sobrecarga.
    std::cout << x << std::endl;

    //Pausa.
    std::cin.get();

    return 0;
}