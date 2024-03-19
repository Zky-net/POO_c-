#include <iostream>

using namespace std;

int main(){
    //937 2569 3117
    //Sala08
    int tam;

    cout << "Ingrese el tamano del arreglo: ";
    cin >> tam;

    int *arrNumeros;
    arrNumeros = new int[tam];

    cout << "Ingrese los datos del arreglo: " << endl;

    for (int i = 0; i < tam; i++){
        cout << "numeros[" << i << "] = ";
        cin >> arrNumeros[i];
    }

    cout << "" << endl;
    for (int i = 0; i < tam; i++){
        cout << " " << arrNumeros[i];
    }
    cout<<"--->";

    for (int i = tam-1; i >= 0; i--){
        cout << " " << arrNumeros[i];
    }
    return 0;
}