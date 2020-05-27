#include <iostream>
#include <cstdlib>
using namespace std;
// *Realizar un programa en c++ que verifique si un número es par o impar
int main(){
    int numero;
    cout << "Ingrese el numero a verificar" << endl;
    cin >> numero;
    if (numero%2 == 0)
    {
        cout << "El numero es par" << endl;
        system ("pause");
        return 0;
    }
    cout << "El numero es impar" << endl;
    system ("pause");
    return 0;
}