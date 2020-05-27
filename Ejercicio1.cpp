#include <iostream>
#include <cstdlib>
using namespace std;
//Realizar un programa en c++ que verifique si un número es divisible entre otro
int main(){
    int numero,divisor;
    cout << "Ingrese un numero" << endl;
    cin >> numero;
    cout << "Ingrese el divisor a verificar" << endl;
    cin >> divisor;
    if (numero%divisor == 0)
    {
        cout << "El numero es divisible" << endl;
        system ("pause");
        return 0;
    }
    cout << "El numero no es divisible" << endl;
    system ("pause");
    return 0;
}
    