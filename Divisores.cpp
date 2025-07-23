#include <iostream>


void Divisores(int lista[], int size);

int main(int argc, char const *argv[])
{
    int lista1[16] = {75,32,44,54,33,67,54,77,80,99,78,54,33,67,82,1};
    Divisores(lista1, 16);
    return 0;
}

void Divisores(int lista[], int size){
    int divisores;
    for (int i = 0; i < size; i++)
    {
        divisores = 0;
        for (int j = 0; j < size; j++)
        {
            if(lista[i] % lista[j] == 0){
                divisores++;
            }
        }
        std::cout << lista[i] << " tem " << divisores << " divisores na lista." << "\n";
        
    }
    
}

//pegar um numero da lista, pegar outros numeros  da lista, e ver quantos divisores ele tem
