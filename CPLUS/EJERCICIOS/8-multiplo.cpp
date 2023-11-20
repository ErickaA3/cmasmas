#include <iostream>
#include "colors.h"
using namespace std;
int main() {
    cout << YELLOW << ":: ¿Es Multiplo? ::" << endl;  
    
        int x = 0;
        int y = 0;
        cout << "Ingrese un 1° entero: ";
        cin >> x;
        cout << "Ingrese un 2° entero: ";
        cin >> y;
       
        if(x % y == 0){
            cout << "Es Multiplo\n";
        }
        else{
            cout << "No es Multiplo \n";
        }
         
    return 0;
}