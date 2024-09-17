#include <iostream>
#include "Cliente.h"
#include <vector>

using namespace std;

class Cuenta {
  private:
    string numero;
    long saldo;
    vector
  public:
    // Constructores
    Cuenta() : numero(""), saldo(0) {};
    Cuenta(string numero, long saldo) :
    numero(numero), saldo(saldo) {};

    // getters
    string getNumero();
    string getSaldo();

    // setters
    void setNumero(string numero);
    void setSaldo(long saldo);
    void addCliente(Cliente c);
    void imprimirDatos();
    void realizarConsignacion

};

string Cuenta::getNumero() { return numero; }
string Cuenta::getSaldo() { return saldo; }

void Cuenta::setNumero(string numero) { this->numero = numero; }
void Cuenta::setSaldo(long saldo) { this->saldo = saldo; }
