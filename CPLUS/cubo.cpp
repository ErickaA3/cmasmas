#include <iostream>
#include "colors.h"
#include <math.h>
using namespace std;

int main() {
    double x = 0;
    
    cout << ORANGE << ":: Calcular el volumen de un cubo ::" << endl;    
    cout << "Ingrese el lado: ";
    cin >> x;
    double elevado = pow(x, 3);
    cout << "EL VOLUMEN DEL CUBO ES: " << elevado << endl;
    return 0;
}
