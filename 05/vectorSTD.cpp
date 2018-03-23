#include <iostream>
#include <vector>   //Para usar vectores (listas).

int main(int argc, char const *argv[])
{
    /*Arreglo dinamico (listas).
    std::vector<int> array;
    std::vector<int> array2 = {9,7,5,3,1};
    //*/
    //En caso de marcar error
    //g++ -std=c++11 vector.cpp -o vector

    //Variables.
    std::vector<int> miVector = {1, 2};

    std::cout << "El tamaño del vector es: " << miVector.size() << std::endl;
    miVector.resize(5);
    std::cout << "El tamaño del vector es: " << miVector.size() << std::endl;
    miVector.push_back(11);
    std::cout << "El tamaño del vector es: " << miVector.size() << std::endl;

    std::cout << miVector[1] << std::endl;      //Forma no segura (puede traer basura en caso de pasar mal el indice)
    std::cout << miVector.at(5) << std::endl;   //Forma segura (si el indice supera la cantidad del tamaño del vector este tira un error)

    //Vector de vectores.
    std::vector<std::vector<int>> matriz;

    //Asignar
    for (int i = 0; i < 5; i++)
    {
        std::vector<int> temp;
        for (int j = 0; j < 5; j++)        
        {
            temp.push_back(i * j);
        }
        matriz.push_back(temp);
    }
    //Imprimir
    for (int i = 0; i < matriz.size(); i++)
    {
        for (int j = 0; j < matriz.at(i).size(); j++)        
        {
            std::cout << matriz.at(i).at(j) << "\t";
        }
        std::cout << std::endl;
    }


   
    //Pausa.
    std::cin.get();

    return 0;
}