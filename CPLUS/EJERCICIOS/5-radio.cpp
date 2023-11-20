#include <iostream>
#include "colors.h"
#include <math.h>
using namespace std;

int main() {
    double x = 0;
    const float PI = 3.1416;
    cout << BLUE << ":: El diámetro, la circunferencia y el área de un círculo. . ::" << endl;    
    cout << "Ingrese el Radio: ";
    cin >> x;
    //diametro//
    double diametro = x*2;
    //circunferencia//
    double circu = diametro * PI;
    //area//
    double area = PI * x * x;
    cout << "El Diametro es: " << diametro << endl;
    cout << "La Circunferencia es: " << circu << endl;
    cout << "El Area es: " << area << endl;
    return 0;
}