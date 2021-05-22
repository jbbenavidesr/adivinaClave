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
        int digito;
        do
        {
            digito = rand() % 10;
        } while (/* condition */);
        digits[i] = ;
    }
    for (int i = 0; i < numero_de_digitos; i++)
    {
        cout << digits[i];
    }
    cout << endl;

    // Pedir al usuario que adivine
    int intento[numero_de_digitos];
    cout << "Adivina: ";
    for (int i = 0; i < numero_de_digitos; i++)
    {
        intento[i] = cin.get() - '0';
    }

    for (int i = 0; i < numero_de_digitos; i++)
    {
        cout << intento[i];
    }
    cout << endl;

    // Comparar
    int digitos_bien = 0, posiciones_bien = 0;
    for (int i=0; i<numero_de_digitos; i++)
    {
        // el intento[i] esta en algun lado de digitos?
        for(int j=0; j<numero_de_digitos; j++)
        {
            if(intento[i] == digits[j])
            {
                digitos_bien += 1;

                // el intento[i] esta donde toca?
                if (i == j)
                {
                    posiciones_bien += 1;
                }
            }
        }
    }
    cout << "Tienes " << digitos_bien << " digitos bien y " << posiciones_bien << " en la posicion correcta." << endl;

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