#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n(5);   //Inicializacion por constructor.
    int x = 0;  //Inicializacion por asignacion.
    std::cout << "Ingrese un valor: ";
    std::cin >> x;
    std::cout << "El doble de " << x << " es " << x * 2 << std::endl;
    
    //*Forma del profesor.
    string nombre;
    cout << "Ingrese su nombre: ";    
    cin.get();
    getline(cin, nombre);
    cout << "Su nombre es: " << nombre << endl;
    //*/

    /*//Mi forma
    char nombre[40];
    std::cout << "Ingrese su nombre: ";
    std::cin.get();
    std::cin.getline(nombre, 40);
    std::cout << "Su nombre es: " << nombre << std::endl;
    //*/

    std::cin.get();
    std::cin.get();
    
    return 0;
}