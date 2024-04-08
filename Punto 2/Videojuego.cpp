#include <iostream>
#include <list>
#include "Juego1.cpp"
#include "Juego2.cpp"

using namespace std;

class Videojuego
{
private:
    int opcion;

public:
    void JugarJuegos()
    {
        cout << "Que deseas jugar?\n1. Adivinar numeros.\n2. Objetos repetidos.\n3. Salir." << endl;
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            adivinarNumeros();
            break;
        case 2:
            objetosRepetidos();
            break;
        case 3:
            Salir();
            break;
        default:
            cout << "Opcion invalida." << endl;
            break;
        }
    }

    bool Gano(bool gano)
    {
        if (gano == true)
        {
            cout << "Felicidades!! Has ganado." << endl;
        }
        else
        {
            cout << "Upss!! Has perdido. Suerte a la proxima." << endl;
        }
    }

    void Salir()
    {

        cout << "Gracias por jugar!! Saliendo..." << endl;
    }
};