#include <iostream>

// class IAlgo
// {
// public:
//     virtual void metodoUno() = 0;
//     virtual int metodoDos(int a) = 0;
// };                                           //Ejemplo: En CImplementa se debe implementar metodoUno y metodoDos(int a) 

// class CImplementa: public IAlgo
// {

// };

class CPoligono
{
protected:
    int base;
    int altura;
public:
    CPoligono():base(0), altura(0){};
    CPoligono(int b, int a):base(b), altura(a){};
    virtual int area() = 0; //Metodo virtual puro hace que la clase sea abstracta y obliga a remplazar en la clase heredada.
    //virtual int area(){return 0;};    //Metodo virtual no obliga a remplazar en la clse heredada.
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
    // void printArea(){
    //     std::cout << base << "x" << altura << " ";
    //     std::cout << "Area: " << area() << std::endl;};
};

class CTriangulo: public CPoligono
{
public:
    CTriangulo(int b, int a): CPoligono(b, a){};
    int area(){return base * altura / 2;};
    // void printArea(){
    //     std::cout << base << "x" << altura << " ";
    //     std::cout << "Area: " << area() << std::endl;};
};

// void funAlgo(CPoligono &p) //Se crea un alias
// {
//     std::cout << "Desde funcion area: " << p.area() << std::endl;
// };
void funAlgo(CPoligono * p) //Se crea un puntero
{
    std::cout << "Desde funcion area: " << p->area() << std::endl;
};

int main(int argc, char const *argv[])
{
    //Variables.
    //CPoligono pol;            //No se pueden crear objetos de metodos abstractos
    CRectangulo rec(3, 4);
    CTriangulo tri(5, 6);

    CPoligono * ppol;           //Si se pueden crear punteros
    //ppol = &pol;


    //pol.printArea();          //No se pueden crear objetos de metodos abstractos
    rec.printArea();
    tri.printArea();

    std::cout << "objeto" << std::endl;
    std::cout << "rec area: " << rec.area() << std::endl;
    std::cout << "tri area: " << tri.area() << std::endl;

    std::cout << std::endl;
    std::cout << "puntero " << std::endl;
    //ppol->printArea();        //No se pueden crear objetos de metodos abstractos
    ppol = &rec;
    ppol->printArea();
    ppol = &tri;
    ppol->printArea();

    // std::cout << std::endl;      //
    // funAlgo(rec);                //Por alias
    // funAlgo(tri);                //

    std::cout << std::endl;         //
    funAlgo(&rec);                  //Por puntero
    funAlgo(&tri);                  //

    //Pausa.
    std::cin.get();

    return 0;
}