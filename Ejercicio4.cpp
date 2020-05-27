#include <iostream>
#include <cstdlib>
#include <string.h>
using namespace std;
/*Realizar un programa en c++ que verifique si la palabra ingresada es mayor a
10 caracteres o no y si la longitud es par o impar.*/
int main(){
    string palabra;
    int contador;
    cout << "Ingrese una palabra" << endl;
    cin >> palabra;
    contador = palabra.length();
    if (contador > 10)
    {
        if (contador % 2 == 0)
        {
            cout << "La palabra ingresada es mayor a 10 caracteres y es par" << endl;
            system ("pause");
            return 0;
        }
        cout << "La palabra ingresada es mayor a 10 caracteres y es impar" << endl;
        system ("pause");
        return 0;       
    }
    if (contador == 10)
    {
        cout << "La palabra ingresada tiene 10 caracteres y es par" << endl;
        system ("pause");
        return 0;       
    }
    if (contador % 2 == 0)
    {
        cout << "La palabra ingresada es menor a 10 caracteres y es par" << endl;
        system ("pause");
        return 0;
    }
    cout << "La palabra ingresada es menor a 10 caracteres y es impar" << endl;
    system ("pause");
    return 0;      
}