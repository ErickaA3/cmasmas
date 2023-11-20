#include <iostream>
#include "colors.h"
#include <math.h>
using namespace std;

int main() {
    double x = 0;
    
    cout << LGREEN << ":: El cuadrado de un valor ingresado por el usuario. ::" << endl;    
    cout << "Ingrese el valor: ";
    cin >> x;
    double cuadrado = x*x;
    cout << "El cuadrado del valor ingresado es: " << cuadrado << endl;
    return 0;
}