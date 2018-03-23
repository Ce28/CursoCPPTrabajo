#include <iostream>

template <typename T, typename U> T getMax(T a, U b) //se puede poner class o typename
{
    return a > b ? a : b;
}

template <typename T> class CPar
{
private:
    T a;
    T b;
public:
    CPar(T a, T b): a(a){this->b = b;};
    T getMax();
};

template <typename T>T CPar<T>::getMax()
{
    return a > b ? a : b;
};

// === especializacion
template <typename T> void saludo() //Generico
{
    std::cout << "Hola" << std::endl;
};

template <> void saludo<int>()  //Especializado
{
    std::cout << "Hola soy goku" << std::endl;
};

template <typename T> class CContenedor //clase Generica
{
private:
    T elemento;
public:
    CContenedor(T e):elemento(e){};
    T getElemento(){return elemento;};
};

template <> class CContenedor<char> //Clase Especializada
{
private:
    char elemento;
public:
    CContenedor(char e): elemento(e){};
    char upper(){
        if ((elemento >= 'a') && (elemento <= 'z'))
        {
            elemento += 'A' - 'a';
        }
        return elemento;
    };
};

template <typename T> void incremento(T &a)
{
    a++;
}

int main(int argc, char const *argv[])
{
    //Variables.
    int x = 5;
    int y = 10;
    char a = 'e';
    char b = 'h';
    CPar<int> par(15, 20);    
    std::cout << par.getMax() <<std::endl;

    CContenedor<int> numero(8);
    CContenedor<char> letra('g');
    std::cout << numero.getElemento() << std::endl; //Llamada a generica
    std::cout << letra.upper() << std::endl;        //Llamada a especializacion
    
    std::cout << getMax<int>(x, y) <<std::endl; //Original si los dos typename son del mismo tipo y sa nada mas un typename.
    std::cout << getMax(a, y) <<std::endl; // convierte "a" a numero 
    std::cout << getMax(a, y) <<std::endl; // convierte y a char

    saludo<char>(); //Llamada a generico
    saludo<int>();  //Llamada a especializacion

    std::cout << a << std::endl;
    incremento(a);
    std::cout << a << std::endl;
    


    //Pausa.
    std::cin.get();

    return 0;
}