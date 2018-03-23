#include <iostream>

struct Persona
{
    std::string nombre;
    int edad;
};

struct Pelicula
{
    std::string nombre;
    int year;
    Persona director;
};

void print(Pelicula p)
{
    std::cout << p.nombre;
    std::cout << " [ " << p.year << " ] ";
    std::cout << " - " << p.director.nombre;
    std::cout << ", " << p.director.edad;
    std::cout << std::endl;
}

int main(int argc, char const *argv[])
{
    //Variables.
    Pelicula peli;
    peli.nombre = "Avatar";
    peli.year = 2010;
    peli.director.nombre = "Fulanito";
    peli.director.edad = 50;
    Pelicula movies[2];

    Pelicula * ppeli;
    ppeli = &peli;

    std::cout << peli.nombre << "(" << peli.year << ")" << std::endl;

    (*ppeli).nombre = "La forma del agua";
    ppeli->year = 2017;
    print(peli);
    ppeli->director.nombre = "Guillermo del Toro";
    ppeli->director.edad = 55;
    print(peli);

    movies[0].nombre = "Minios";
    movies[0].year = 2017;
    movies[0].director.nombre = "Minios amarillo";
    movies[0].director.edad = 1122;
    movies[1].nombre = "Titanic";
    movies[1].year = 1997;

    print(movies[0]);
    print(movies[1]);
    

    //Pausa.
    std::cin.get();

    return 0;
}