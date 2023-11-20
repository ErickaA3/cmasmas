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
if (!(a == b))
cout << "a y b no son iguales" << endl;
else
cout << "a y b son iguales" << endl;
// Veamos otra sentencia if-else sencilla
if ((a == b) || (b == c))
cout << "A y B son iguales o B y C son iguales" << endl;
else
cout << "ni A y B son iguales ni B y C son iguales" << endl;
// Nota. Ley de De Morgan
// !(A && B) == !A || !B
// !(A || B) == !A && !B
return 0;
}