#include <iostream>
#include "colors.h"
using namespace std;

int main() {
    int y = 0;
    
    cout << MAGENTA << ":: Suma de 10 enteros ingresados por el usuario ::" << endl;
    for (int i = 0; i < 10; i++) {
        int x;
        
        cout << "Ingresa un numero: ";
        cin >> x;
        y += x;
    }
    cout << "La suma de los numeros es: " << y << endl;
    return 0;
}
