#ifndef CPUNTO_H
#define CPUNTO_H

#include <iostream>

class CPunto
{
private:
    int x;
    int y;
public:
    CPunto(){};
    CPunto(int x, int y);
    void print();
    CPunto operator+(CPunto p);  //<--Sobrecarga de operador por metodo.    
    CPunto operator-(CPunto p);  //<--Sobrecarga de operador por metodo.

    //Friend
    friend CPunto operator*(CPunto p, int a);  //<--Sobrecarga de operador por funcion.
    friend CPunto operator*(int a, CPunto p);  //<--Sobrecarga de operador por funcion.
    friend std::ostream& operator<<(std::ostream &out, CPunto p);    //<--Sobrecarga de operador por funcion.
};

#endif