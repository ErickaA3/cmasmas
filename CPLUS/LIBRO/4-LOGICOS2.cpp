using namespace std;
#include <iostream>
int main () {
// Sacamos por salida standar un mensaje
cout << "Vamos a probar los operadores\n";
unsigned int test = 0;
int a = 23, b = 21, c = 34;
// Veamos el resto de valores
cout << "Valores: " << c << " " << b << " " << a << endl;
// Tomamos el valor a
cout << "Dame valores. \na=";
cin >> a;
// Tomamos el valor b
cout << "b=";
cin >> b;
// Tomamos el valor c
cout << "c=";
cin >> c;
cout << "Y ahora son estos: c=" << c << " b=" << b << " a=" << a << endl;
// Veamos una sentencia if-else sencilla
if (!a)
cout << "A es false (igual 0)" << endl;
else
cout << "A es true (distinto de 0)" << endl;
// Veamos una sentencia if-else sencilla
if (!b)
cout << "B es false (igual 0)" << endl;
else
cout << "B es true (distinto de 0)" << endl;
// Veamos una sentencia if-else sencilla
if (!c)
cout << "C es false (igual 0)" << endl;
else
cout << "C es true (distinto de 0)" << endl;
// Sentencia con operador logico o TERNARIO ()?:
c = (a == b)?0:1;
cout << "C es : " << c << endl;
return 0;
}