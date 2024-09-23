#include <iostream>
#include "Aerolínea.h"

using namespace std;

int main() {
    Aerolinea aerolinea;

    // Creamos 10 pasajeros.
    Pasajero pasajero1("123", "Juan", "turista", 12);
    Pasajero pasajero2("234", "Ana", "ejecutiva", 45);
    Pasajero pasajero3("345", "Carlos", "turista", 36);
    Pasajero pasajero4("456", "Carolina", "ejecutiva", 95);
    Pasajero pasajero5("567", "Miguel", "turista", 1);
    Pasajero pasajero6("678", "Sara", "ejecutiva", 4);
    Pasajero pasajero7("789", "Jose", "turista", 76);
    Pasajero pasajero8("890", "Daniela", "ejecutiva", 57);
    Pasajero pasajero9("901", "Jenny", "turista", 9);
    Pasajero pasajero10("012", "Natalia", "ejecutiva", 64);
    
    // Creamos 3 aviones.
    Avion avion1("AA123", 100, 20);
    Avion avion2("AA234", 50, 5);
    Avion avion3("AA345", 120, 30);
    
    // Agregamos los pasajeros a los aviones.
    avion1.addPasajero(pasajero1);
    avion1.addPasajero(pasajero2);
    avion2.addPasajero(pasajero3);
    avion2.addPasajero(pasajero4);
    avion3.addPasajero(pasajero5);
    avion3.addPasajero(pasajero6);
    avion3.addPasajero(pasajero7);
    avion3.addPasajero(pasajero8);
    avion3.addPasajero(pasajero9);
    avion3.addPasajero(pasajero10);

    // Agregamos los aviones a la aerolinea.
    aerolinea.addAvion(avion1);
    aerolinea.addAvion(avion2);
    aerolinea.addAvion(avion3);

    // Imprimir pasajeros dependiendo del tipo de silla.
    cout << "-------------------------" << endl;
    avion1.imprimirPasajerosPorTipo("turista");
    cout << "-------------------------" << endl;
    avion2.imprimirPasajerosPorTipo("turista");
    cout << "-------------------------" << endl;
    avion3.imprimirPasajerosPorTipo("ejecutiva");
    cout << "-------------------------" << endl;

    // Mostrar la silla que le corresponde a un pasajero dependiendo de su id.
    cout << "-------------------------" << endl;
    avion1.imprimirSillaPorId("234");
    cout << "-------------------------" << endl;
    avion2.imprimirSillaPorId("456");
    cout << "-------------------------" << endl;
    avion3.imprimirSillaPorId("901");
    cout << "-------------------------" << endl;

    // Mostrar todo.
    cout << "-------------------------" << endl;
    aerolinea.imprimirDatos();
}