#ifndef CLIBRERO_H
#define CLIBRERO_H

#include <iostream>
#include "CLibro.h"

class CLibrero
{
private:
    std::string color;
    CLibro* libro;
public:
    void setColor(std::string str);
    std::string getColor();
    void setLibro(CLibro* lib);
    CLibro* getLibro();
    void print();
};

#endif