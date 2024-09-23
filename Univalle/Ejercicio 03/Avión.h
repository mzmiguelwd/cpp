#include <iostream>
#include <vector>
#include "Pasajero.h"

using namespace std;

class Avion {
    private:
        string numVuelo;
        int numSillasTurista, numSillasEjecutiva;
        vector<Pasajero> pasajerosAvion;
    public:
        // Constructores
        Avion(): numVuelo(""), numSillasTurista(0), numSillasEjecutiva(0) {};
        Avion(string numVuelo, int numSillasTurista, int numSillasEjecutiva):
        numVuelo(numVuelo), numSillasTurista(numSillasTurista), numSillasEjecutiva(numSillasEjecutiva) {};

        // getters
        string getNumVuelo();
        int getNumSillasTurista();
        int getNumSillasEjecutiva();

        // setters
        void setNumVuelo(string numVuelo);
        void setNumSillasTurista(int numSillasTurista);
        void setNumSillasEjecutiva(int numSillasEjecutiva);

        // Métodos
        void addPasajero(Pasajero p);
        void imprimirDatos();
        void imprimirPasajerosPorTipo(string tipoViajero);
        void imprimirSillaPorId(string id);
};

string Avion::getNumVuelo() { return numVuelo; }
int Avion::getNumSillasTurista() { return numSillasTurista; }
int Avion::getNumSillasEjecutiva() { return numSillasEjecutiva; }

void Avion::setNumVuelo(string numVuelo) { this->numVuelo = numVuelo; }
void Avion::setNumSillasTurista(int numSillasTurista) { this->numSillasTurista = numSillasTurista; }
void Avion::setNumSillasEjecutiva(int numSillasEjecutiva) { this->numSillasEjecutiva = numSillasEjecutiva; }

void Avion::addPasajero(Pasajero p) {
    pasajerosAvion.push_back(p);
}

void Avion::imprimirDatos() {
    cout << "Vuelo #: " << numVuelo << endl;
    cout << "Sillas - Turista: " << numSillasTurista << endl;
    cout << "Sillas - Ejecutiva: " << numSillasEjecutiva << endl;
    cout << "Pasajeros del avión: " << endl;
    cout << "Id\t|Nombre\t|Tipo de viajero\t|Número de silla" << endl;
    for (int i = 0; i < pasajerosAvion.size(); i++) {
        cout << pasajerosAvion[i].getId() << "\t|" << pasajerosAvion[i].getNombre() << "\t|" << pasajerosAvion[i].getTipoViajero() << "\t|" << pasajerosAvion[i].getNumSilla() << endl;
    }
}

void Avion::imprimirPasajerosPorTipo(string tipoViajero) {
    cout << "Pasajeros en clase " << tipoViajero << ":" << endl;
    cout << "Id\t|Nombre\t|Tipo de viajero\t|Número de silla" << endl;
    for (int i = 0; i < pasajerosAvion.size(); i++) {
        if (pasajerosAvion[i].getTipoViajero() == tipoViajero) {
            cout << pasajerosAvion[i].getId() << "\t|" << pasajerosAvion[i].getNombre() << "\t|" << pasajerosAvion[i].getTipoViajero() << "\t|" << pasajerosAvion[i].getNumSilla() << endl;
        }
    }
}

void Avion::imprimirSillaPorId(string id) {
    cout << "Id\t|Número de silla" << endl;
    for (int i = 0; i < pasajerosAvion.size(); i++) {
        if (pasajerosAvion[i].getId() == id) {
            cout << pasajerosAvion[i].getId() << "\t|" << pasajerosAvion[i].getNumSilla() << endl;
        }
    }
}