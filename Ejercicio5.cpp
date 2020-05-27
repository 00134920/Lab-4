#include <iostream>
#include <cstdlib>
#include <string.h>
using namespace std;
/* Realizar un programa en c++ que verifique si la palabra ingresada inicia y
finaliza con la misma letra.*/
int main(){
    int longi;
    char palabra[100];

    cout << "Ingrese una palabra" << endl;
    cin >> palabra;
    if (palabra[0]==palabra[longi-1])
    {
        cout << "La palabra inicia y termina con la misma letra" << endl;
        system ("pause");
        return 0;
    }
    cout << "La palabra no inicia ni termina con la misma letra" << endl;
    system ("pause");
    return 0;
}

