#include <iostream>
#include "colors.h"
using namespace std;

int main() {
    cout << LBLUE << ":: CRÉDITO ::" << endl;

    double numCuenta = 0;
    double salIni = 0;
    double totCarg = 0;
    double totCre = 0;
    double limitCre = 0;
    while (numCuenta != -1) {
        cout << "Introduzca el número de cuenta (-1 para terminar): ";
        cin >> numCuenta;
        if (numCuenta == -1) {
            break;
        }

        cout << "Introduzca el saldo inicial: ";
        cin >> salIni;
        cout << "Introduzca el total de cargos: ";
        cin >> totCarg;
        cout << "Introduzca el total créditos: ";
        cin >> totCre;
        cout << "Introduzca el límite de crédito: ";
        cin >> limitCre;

   
        double saldo = salIni + totCarg - totCre;

        if (saldo > limitCre) {
            cout << "Cuenta: " << numCuenta << endl;
            cout << "Límite de crédito: " << limitCre << endl;
            cout << "Saldo: " << saldo << endl;
            cout << "Límite de crédito excedido." << endl;
        }
    }

    return 0;
}
