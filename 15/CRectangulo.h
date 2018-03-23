#ifndef CRECTANGULO_H
#define CRECTANGULO_H

#include <iostream>

class CRectangulo
{
private:
    int base;
    int altura;
    std::string nombre;
    static int contador;
public:
    ~CRectangulo();
    CRectangulo();
    CRectangulo(int base, int altura);
    CRectangulo(std::string str);
    CRectangulo(std::string, int b, int a);
    void print();
    static int getContador();

    //Friends
    friend void reducir(CRectangulo &r);
    friend void reducir(CRectangulo &r, int a);

    friend void algo(); //<--No necesita existir.
    friend class CCuadrado;
};

#endif