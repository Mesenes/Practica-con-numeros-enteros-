#include <iostream>

using namespace std;

int main() {
int s1, m1, total;

cout << "suma de dos numeros \n";// descripcion de del problema.//
cout << "Escriba el primer dato  \n";// Digo al usuario que hacer.
cin >> s1; // ingreso datos a la variable altura
cout << "Escriba el segundo dato \n";
cin >> m1; // ingreso datos a la variable base 
total = s1 + m1; // ingreso datos a la variable area 
cout << "El resultado de la suma es: \n"<< total; // muestra el resultado del area 

return 0;
}