#include <iostream>
#include "colors.h"
#include <math.h>
#include <algorithm>
using namespace std;

int main() {
    double x = 0;
    double y = 0;
    double z = 0;
    cout << ROSE << ":: Suma, el promedio, el producto, el número más pequeño y el más grande  ::" << endl;    
    cout << "Ingrese el primer valor: ";
    cin >> x;
    cout << "Ingrese el segundo valor: ";
    cin >> y;
    cout << "Ingrese el tercer valor: ";
    cin >> z;
    //suma
    double suma = x + y + z;
    //promedio
    double promedio = (x + y + z) / 3;
    //producto
    double producto = x * y * z;
    //numero más pequeño
    double mayor = max({x, y, z});
    //numero más grande
    double menor = min({x, y, z});
    cout << "La suma es: " << suma << endl;
    cout << "El promedio es: " << promedio << endl;
    cout << "El producto es: " << producto << endl;
    cout << "El número más grande es: " << mayor << endl;
    cout << "El número más pequeño es: " << menor << endl;
    
    return 0;
   
}