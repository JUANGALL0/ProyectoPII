//#FueraMalasVibras
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
system ("color 1E");
while (true) {
    	cout <<"\t=============== Aero Jet ===============" << endl;
        cout << "\t========= SISTEMA DE TRASLADO =========\n" << endl;
        cout << "\t=======================================" << endl;
        cout << "\t\t1. PASAJEROS" << endl;
        cout << "\t\t2. DESTINOS" << endl;
        cout << "\t\t3. CHOFERES" << endl;
        cout << "\t\t0. SALIR" << endl;
        cout << "\t=======================================" << endl;
        cout << "\t * INGRESE LA OPCION DESEADA:  " << endl;
        int opcion;
        cin >> opcion;
        system("cls");
        switch (opcion) {
            case 1: {
                while (true) {
   	cout <<"\n\t=============== Aero Jet ===============" << endl;
    cout << "\t=========== MENU DE PASAJEROS ===========" << endl;
    cout << "\t========================================\n" << endl;
    cout << "\t\t1. AGREGAR PASAJERO" << endl;
    cout << "\t\t2. ELIMINAR PASAJERO" << endl;
    cout << "\t\t3. MOSTRAR PASAJAEROS" << endl;
    cout << "\t\t0. SALIR" << endl;
    cout << "\n\t========================================" << endl;
    cout << "\t * INGRESE LA OPCION DESEADA:  " << endl;
        
int opcion;
    cin >> opcion;
    system("cls");
switch (opcion) {
    case 1: {
    cout << "INGRESE EL NOMBRE DEL PASAJERO: ";
    string nombre;
    cin >> nombre;
                
//                sistema.agregarPasajero(nombre, destino);
    break;
    }
    case 2: {
    cout << "INGRESE EL NOMBRE DEL PASAJERO A ELIMINAR: ";
    string nombre;
    cin >> nombre;
                
 //                sistema.eliminarPasajero(nombre);
    break;
    }
    case 3:{
    	 //                sistema.mostrarPasajeros();
		break;
	}

    break;
    case 0:
    cout << "SALIENDO DEL PROGRAMA..." << endl;
    return 0;
    default:
    cout << "Opción inválida. Intente nuevamente." << endl;
    break;
    }
        
    cout << endl;
    system("cls");
                break;
            }
            case 2: {
                cout << " ";
                string Destino;
                cin >> Destino;
                
 //                sistema.eliminarDestino(Destino);
                break;
            }
            case 3:
 //                sistema.mostrarDestinos();
                break;
            
            case 0:
                cout << "Saliendo del programa..." << endl;
                return 0;
            default:
                cout << "Opción inválida. Intente nuevamente." << endl;
                break;
        }
        
        cout << endl;
    }


    }
    while (true) {
    	cout <<"\t=============== Aero Jet ===============" << endl;
        cout << "\t========= Destinos de traslado =========\n" << endl;
        cout << "\t=======================================" << endl;
        cout << "\t\t1. Agregar Destinos" << endl;
        cout << "\t\t2. Eliminar Destino" << endl;
        cout << "\t\t3. Mostrar Destinos" << endl;
        cout << "\t\t0. Salir" << endl;
        cout << "\t=======================================" << endl;
        cout << "\t * Ingrese la opcion deseada: " << endl;
        int opcion;
        cin >> opcion;
        system("cls");
        switch (opcion) {
            case 1: {
                
                break;
            }
            case 2: {
                cout << "Ingrese el nombre del destino a eliminar: ";
                string Destino;
                cin >> Destino;
                
 //                sistema.eliminarDestino(Destino);
                break;
            }
            case 3:
 //                sistema.mostrarDestinos();
                break;
            
            case 0:
                cout << "Saliendo del programa..." << endl;
                return 0;
            default:
                cout << "Opción inválida. Intente nuevamente." << endl;
                break;
        }
        
        cout << endl;
    }

    return 0;
}


