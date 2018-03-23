#include <iostream>

class CPoligono
{
protected:
    int base;
    int altura;
public:
    CPoligono():base(0), altura(0){};
    CPoligono(int b, int a):base(b), altura(a){};
    int area(){return 0;};
    void printArea(){
        std::cout << base << "x" << altura << " ";
        std::cout << "Area: " << area() << std::endl;};
};

class CRectangulo: public CPoligono
{
public:
    CRectangulo(int b, int a)
    {
        base = b;
        altura = a;
    };
    int area(){return base * altura;};
    void printArea(){
        std::cout << base << "x" << altura << " ";
        std::cout << "Area: " << area() << std::endl;};
};

class CTriangulo: public CPoligono
{
public:
    CTriangulo(int b, int a): CPoligono(b, a){};
    int area(){return base * altura / 2;};
    void printArea(){
        std::cout << base << "x" << altura << " ";
        std::cout << "Area: " << area() << std::endl;};
};

int main(int argc, char const *argv[])
{
    //Variables.
    CPoligono pol;
    CRectangulo rec(3, 4);
    CTriangulo tri(5, 6);

    pol.printArea();
    rec.printArea();
    tri.printArea();

    std::cout << "objeto" << std::endl;
    std::cout << "rec area: " << rec.area() << std::endl;
    std::cout << "tri area: " << tri.area() << std::endl;

    //Pausa.
    std::cin.get();

    return 0;
}