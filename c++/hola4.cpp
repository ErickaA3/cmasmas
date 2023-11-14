
using namespace std;
#include <iostream>
// Funcion: llamada
int llamada (int x, int y) {
cout << "Estamos en la funcion!!" << endl;
return (x+y);
}
int eriu (int x, int y) {
cout << "Estamos en la funcion!!" << endl;
return (x+y)*(x-y);
}
int main() {
cout << "Vamos a llamar a la funcion.." << endl;

int z = llamada(5,7);
cout << "Resultado:" << z << endl;
int u = eriu(4,7);
cout << "Resultado:" << u << endl;
cout << "Resultado:" << llamada(6,7) << endl;

cout << "Programa terminado \n" << endl;
return 0;
}