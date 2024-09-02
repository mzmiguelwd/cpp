/* 1. Escribe un programa que lea de la entrada estándar dos números y muestre
en la salida estándar su suma, resta, multiplicación y división. */

#include <iostream>

using namespace std;

int main() {

    int numero_a;
    int numero_b;
    int suma;
    int resta;
    int multi;
    float divi;

    cout << "Digite el primer número: ";
    cin >> numero_a;

    cout << "Digite el segundo número: ";
    cin >> numero_b;

    suma = numero_a + numero_b;
    resta = numero_a - numero_b;
    multi = numero_a * numero_b;
    divi = numero_a / numero_b;

    cout << "Suma: " << suma << endl;
    cout << "Resta: " << resta << endl;
    cout << "Multiplicación: " << multi << endl;
    cout << "División: " << divi << endl;

    return 0;

}