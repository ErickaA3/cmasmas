#include <iostream>
#include "colors.h"
using namespace std;
int main() {
    cout << CYAN << ":: ¿Es par o inpar? ::" << endl;  
    int opcion=0;
    
    while(opcion==0){
        int x = 0;
        cout << "Ingrese un entero: ";
        cin >> x;
        int a=x%2;
        if(a==0){
            cout << "Es par\n";
        }
        else{
            cout << "No es par \n";
        }
         cout << " ";
        cout << "***0 para continuar y 1 para cerrar***";
        cin >> opcion;
    }
    return 0;
}
