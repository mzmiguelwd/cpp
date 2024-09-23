#include <iostream>
#include <vector>
#include "Avión.h"

using namespace std;

class Aerolinea {
    private:
        vector<Pasajero> pasajeros;
        vector<Avion> aviones;
    public:
    // Constructor
    Aerolinea() {};

    // Métodos
    void addPasajero(Pasajero p);
    void deletePasajero(string id);
    void addAvion(Avion a);
    void deleteAvion(string numVuelo);
    void imprimirDatosPasajeros();
    void imprimirDatosAviones();
    void imprimirDatos();
};

void Aerolinea::addPasajero(Pasajero p) {
    pasajeros.push_back(p);
}

void Aerolinea::deletePasajero(string id) {
    for (int i = 0; i < pasajeros.size(); i++) {
        if (pasajeros[i].getId() == id) {
            pasajeros.erase(pasajeros.begin() + i);
            cout << "Pasajero eliminado" << endl;
        }
    }
}

void Aerolinea::addAvion(Avion a) {
    aviones.push_back(a);
}

void Aerolinea::deleteAvion(string numVuelo) {
    for (int i = 0; i < aviones.size(); i++) {
        if (aviones[i].getNumVuelo() == numVuelo) {
            aviones.erase(aviones.begin() + i);
            cout << "Avión eliminado" << endl;
        }
    }
}

void Aerolinea::imprimirDatosPasajeros() {
    cout << "Pasajeros: " << endl;
    cout << "Id\tNombre\tTipo de viajero\tNúmero de silla" << endl;
    for (int i = 0; i < pasajeros.size(); i++) {
        cout << pasajeros[i].getId() << "\t" << pasajeros[i].getNombre() << "\t" << pasajeros[i].getTipoViajero() << "\t" << pasajeros[i].getNumSilla() << endl;
    }
}

void Aerolinea::imprimirDatosAviones() {
    cout << "Aviones: " << endl;
    cout << "Vuelo #\tSillas - Turista\tSillas - Ejecutiva" << endl;
    for (int i = 0; i < aviones.size(); i++) {
        cout << aviones[i].getNumVuelo() << "\t" << aviones[i].getNumSillasTurista() << "\t" << aviones[i].getNumSillasEjecutiva() << endl;
    }
}

void Aerolinea::imprimirDatos() {
    cout << "Datos completos: " << endl;
    for (int i = 0; i < aviones.size(); i++) {
        aviones[i].imprimirDatos();
        cout << "-------------------------" << endl;
    }
}