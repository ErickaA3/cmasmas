/**
* Tipos.cpp
* Programa para sacar el tamaÃ±o de cada tipo de datos
* Pello Xabier Altadill Izura
*
* Compilado: g++ Tipos.cpp -o Tipos
*/
using namespace std;
#include <iostream>
int main () {
// Sacamos el tamaÃ±o de cada tipo
cout << "El tamaÃ±o del int es:\t\t" << sizeof(int) << " bytes.\n";
cout << "El tamaÃ±o del short es:\t" << sizeof(short) << " bytes.\n";
cout << "El tamaÃ±o del long es:\t" << sizeof(long) << " bytes.\n";
cout << "El tamaÃ±o del char es:\t\t" << sizeof(char) << " bytes.\n";
cout << "El tamaÃ±o del float es:\t\t" << sizeof(float) << " bytes.\n";
cout << "El tamaÃ±o del double es:\t" << sizeof(double) << " bytes.\n";
// Sacamos por salida standar un mensaje
cout << "Termino el programa\n";
return 0;
}