using namespace std;
#include <iostream>
// las funciones en CPP las debemos declarar antes de invocar
// aqui tenemos el prototipo. Si no se pone tendremos ERROR de compilador
// Declaramos la funcion como inline
inline double Calcula (double a, double b);
// Log : saca un mensaje por pantalla
void Log(char *mensaje);
// Variables globales
long variable = 666;
char *PROGRAMA = "Globales> ";
int main () {
// Sacamos por salida standar un mensaje
Log("Vamos a probar los operadores");
unsigned int test = 0;
double a = 23, b = 21, c = 34;
// Tomamos el valor a
Log("Dame valores. \na=");
cin >> a;
// Tomamos el valor b
cout << "b=";
cin >> b;
cout << "Y ahora son estos: b=" << b << " a=" << a << " global:" << variable << "Y el resultado de la funcion c=" << c << endl;
// Probamos la funcion
Log("Venga va vamos");
return 0;
}
double Calcula (double a, double b) {
a *= 35462;
b *=32546 + a;
return (a / b) * variable;
}
/**
* Log
* parametros: char *mensaje
* devuelve void
*/
void Log (char *mensaje) {
cout << PROGRAMA << mensaje << endl;
}