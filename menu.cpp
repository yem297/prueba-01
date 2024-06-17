#include <iostream>
#include "menu.h"
#include "creditos.h"

using namespace std;

void menu(){
    int opcion;

    do{
        cout << "Menu Principal" << endl;
        cout << "1 -- Un jugador" << endl;
        cout << "2 -- Dos jugadores" << endl;
        cout << "3 -- Estadisticas" << endl;
        cout << "4 -- Creditos" << endl;
        cout << "0 -- Salir" << endl;

    cin >> opcion;

    switch(opcion){
    case 4:
        menuCreditos();
        break;
    case 0:
        return;
        break;
        }
    }while (opcion!=0);
}
