#include <iostream>
#include <cstdlib>
using namespace std;
//Realizar un programa en c++ que verifique si un número es positivo, negativo o cero.
int main(){
    int numero;
    cout << "Ingrese su numero" << endl;
    cin >> numero;
    if (numero > 0)
    {
        cout << "El numero es positivo" << endl;
        system ("pause");
        return 0;
    }
    if (numero == 0)
    {
        cout << "El numero es 0" << endl;
        system ("pause");
        return 0;
    }
    cout << "El numero es negativo" << endl;
    system ("pause");
    return 0;
}