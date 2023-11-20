using namespace std;
#include <iostream>
void Log(const char *mensaje);

long variable = 666;
const char *PROGRAMA = "Globales> ";

int main() {
    Log("Vamos a probar los operadores");

    double a, b, c;
    // Tomamos el valor a
    cout << "Dame valores. \na=";
    if (!(cin >> a)) {
        cout << "Error en la entrada para a." << endl;
        return 1;
    }

    // Tomamos el valor b
    cout << "b=";
    if (!(cin >> b)) {
        cout << "Error en la entrada para b." << endl;
        return 1;
    }

    cout << "Y ahora son estos: b=" << b << " a=" << a << " global:" << variable << " Y el resultado de la funcion c=" << c << endl;

    Log("Venga va vamos");
    return 0;
}

void Log(const char *mensaje) {
    cout << PROGRAMA << mensaje << endl;
}
