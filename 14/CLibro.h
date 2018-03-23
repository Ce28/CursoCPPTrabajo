#ifndef CLIBRO_H
#define CLIBRO_H

#include <iostream>

class CLibro
{
private:
    std::string titulo;
    std::string genero;
    int numPaginas;
public:
    void setTitulo(std::string str);
    std::string getTitulo();
    void setGenero(std::string str);
    std::string getGenero();
    void setNumPaginas(int a);
    int getNumPaginas();
    void print();
};

#endif