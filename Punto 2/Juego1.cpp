#include <stdlib.h>
#include <time.h>
#include "Videojuego.cpp"

using namespace std;

/*Numero random almacenado en una lista. el usuario debe adivinar los numeros de la lista. */

class Juego1
{
private:
    int opcionJuego1;
    int numeroRandom;
    list <int> numeros;

public:
    void adivinarNumeros()
    {
        cout << "Bienvenido. El numero generado es un numero entre 1 y 10." << endl;
        srand(time(NULL));
        while (opcionJuego1; != 2)
        {
            cout << "Por favor ingresa una opcion:\n1. Jugar.\n2. Salir." << endl;
            cin >> opcionJuego1;

            switch (opcionJuego1)
            {
            case 1:
                numeroRandom = 1 + rand() % 10;
                numeros.push_back(numeroRandom);
                cout << "Ingresa un numero:" << endl;
                cin >> opcionJuego1;
                for (auto i = 0; i < numeros.size; i++)
                {
                    if (opcionJuego1; = numeros[i])
                    {
                        gano = true;
                        Gano(gano);
                        cout << "El numero " << opcionJuego1 << " era el numero random." << endl;
                    }
                    else
                    {
                        gano = false;
                        Gano(gano);
                    }
                }
                break;
            case 2:
                Salir();
            default:
                cout << "Opcion invalida." << endl;
                break;
            }
        }
    }
};