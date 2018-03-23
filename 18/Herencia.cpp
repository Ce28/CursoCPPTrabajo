#include <iostream>

class CPadre{
public:
    std::string apellido;
    CPadre():apellido("uno"){};
};

class CMadre
{
public:
    int dinero;
    std::string apellido;
public:
    CMadre():apellido("dos"){std::cout << "Madre sin parametros: " << dinero << std::endl;};        //Solo se puede usar en private
    CMadre(int a):apellido("dos"){std::cout << "Madre con parametros: " << dinero << std::endl;};
};

class CHija: virtual private CMadre, public CPadre
{
public:
                    //Lista de inicalizacion.
    CHija(int a): CMadre(a){
        std::cout << "Hija con parametros: " << dinero << std::endl;  //Se puede utilizar si es public, protected, no se puede usar en private.
    };
};

class CHijo: public CMadre
{
public:
    CHijo(): CMadre(){std::cout << "Hijo sin parametros: " << dinero << std::endl;};
};

class CNieto: public CHija, virtual public CMadre{
public:
    CNieto():CHija(0){std::cout << "Nieto: " << dinero << std::endl;};
};

int main(int argc, char const *argv[])
{
    //Variables.
    CMadre madre;
    CHijo hijo;
    CHija hija(0);
    CNieto nieto;

    std::cout << hija.CPadre::apellido << std::endl;

    std::cout << madre.dinero << std::endl;
    //std::cout << hija.dinero << std::endl;   //<-- Funcionan con dinero en public, en protected y private no se pueden usar.
    //std::cout << hijo.dinero << std::endl;


    //Pausa.
    std::cin.get();

    return 0;
}