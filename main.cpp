#include <iostream>
#include <random>
#include <ctime>

// Declarar funciones
int * escoger_clave(int numero_de_digitos);

int main(void)
{
    using namespace std;
    
    // Variables de configuración
    int numero_de_digitos = 4;

    // Escoger clave al azar.
    srand(time(0));
    int digits[numero_de_digitos];

    for (int i = 0; i < numero_de_digitos; i++)
    {
        digits[i] = rand() % 10;
    }

    // Pedir al usuario que adivine
    char intento[numero_de_digitos];
    cout << "Adivina: ";
    for (int i = 0; i < numero_de_digitos; i++)
    {
        intento[i] = cin.get();
    }

    for (int i = 0; i < numero_de_digitos; i++)
    {
        cout << intento[i];
    }
    cout << endl;
    return 0;
}

/*
// Implementar las funciones
int * escoger_clave(int numero_de_digitos)
{
    srand(time(0));
    int digits[numero_de_digitos];


    for (int i = 0; i < numero_de_digitos; i++)
    {
        digits[i] = rand() % 10;
    }

    return digits;
}*/