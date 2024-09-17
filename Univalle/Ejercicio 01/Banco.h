#include <iostream>
#include <vector>
#include "Cuenta.h"

using namespace std;

class Banco {
  private:
    vector<Cuenta> cuentas;
    vector<Cliente> clientes;
};
