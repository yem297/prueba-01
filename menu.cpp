#include <iostream>
#include "menu.h"

using namespace std;

void menu(){
    int opcion;

    cout << "Menu Principal" << endl;
    cout << "1 -- Un jugador" << endl;
    cout << "2 -- Dos jugadores" << endl;
    cout << "3 -- Estadisticas" << endl;
    cout << "4 -- Creditos" << endl;
    cout << "0 -- Salir" << endl;

    cin >> opcion;

    switch(opcion){
case 0:
    return;
    break;
    }

}
