#ifndef CBLOQUE_H
#define CBLOQUE_H

#include <iostream>

class CBloque
{
private:
    std::string color;
    int dimencion;
public:
    CBloque();
    CBloque(std::string col);
    CBloque(int dim);
    CBloque(std::string col, int dim);
    ~CBloque();
    void print();
};

#endif