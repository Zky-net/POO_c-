#include <iostream>

using namespace std;

int main()
{

    int tam;

    cout << "Ingrese el tamaño del arreglo: ";
    cin >> tam;

    int *arrNumeros;
    arrNumeros = new int[tam];
    cout << "Ingrese los datos del arreglo: " << endl;

    for (int i = 0; i < tam; i++)
    {
        cout << "numeros[" << i << "] = ";
        cin >> arrNumeros[i];
    }

    cout << "" << endl;

    cout << "[";
    for (int i = 0; i < tam; i++)
    {
        cout << " " << arrNumeros[i];
    }
    cout << "]" << endl;

    return 0;
}