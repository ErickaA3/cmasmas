#include <iostream>
#include "colors.h"
using namespace std;

int main() {
    cout << RESET << ":: SALARIO ::" << endl;

    double numCuenta = 0;
    
    while (numCuenta != -1) {
        cout << "Introduzca las ventas en pesos (-1 para terminar): ";
        cin >> numCuenta;
        double a=numCuenta*0.09;
        a= a+200;
        if (numCuenta == -1) {
            break;
        }
        cout << "Es Salario es : $" << a << endl;

   
        
    }

    return 0;
}