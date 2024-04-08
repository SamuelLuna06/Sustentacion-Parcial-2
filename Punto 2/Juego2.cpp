#include "Videojuego.cpp"
/*2. Crear una lista en la que haya 2 opciones de objetos,
 el usuario va a ingresar el objeto y el sistema le dice cuantas veces esta repetido el objeto en la lista.*/
using namespace std;

class Juego2
{
private:
    int opcionJuego2;
    int vecesRepite;
    int numeroRandom;
    list<string> objetos = {"pantalla, pantalla, pantalla, pantalla, pantalla, lapiz, lapiz, lapiz, lapiz, raton, raton, raton, teclado, teclado, silla"};

public:
    void objetosRepetidos()
    {
        cout << "De que objeto deseas saber cuantas veces se repite?\n1. Pantalla.\n2. Lapiz.\n3. Raton.\n4. Teclado.\n5. Silla.\n6. Salir." << endl;
        cin >> opcionJuego2;
        switch (opcionJuego2)
        {
        case 1:
            for (auto i = 0; i < objetos.size; i++)
            {
                if ("pantalla" = objetos[i])
                {
                    vecesRepite++;
                }
            }
            cout << "El objeto se repite " << vecesRepite << " en la lista." << endl;
            break;
        case 2:
            for (auto i = 0; i < objetos.size; i++)
            {
                if ("lapiz" = objetos[i])
                {
                    vecesRepite++;
                }
            }
            cout << "El objeto se repite " << vecesRepite << " en la lista." << endl;
            break;
        case 3:
            for (auto i = 0; i < objetos.size; i++)
            {
                if ("raton" = objetos[i])
                {
                    vecesRepite++;
                }
            }
            cout << "El objeto se repite " << vecesRepite << " en la lista." << endl;
            break;
        case 4:
            for (auto i = 0; i < objetos.size; i++)
            {
                if ("teclado" = objetos[i])
                {
                    vecesRepite++;
                }
            }
            cout << "El objeto se repite " << vecesRepite << " en la lista." << endl;
            break;
        case 5:
            for (auto i = 0; i < objetos.size; i++)
            {
                if ("silla" = objetos[i])
                {
                    vecesRepite++;
                }
            }
            cout << "El objeto se repite " << vecesRepite << " en la lista." << endl;
            break;
        case 6:
            Salir();
            break;
        default:
            cout << "Opcion invalida." << endl;
            break;
        }
    }
};