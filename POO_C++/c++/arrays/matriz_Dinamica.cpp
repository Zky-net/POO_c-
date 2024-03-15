#include<iostream>

using namespace std;

int main(){
    int filas,columnas;
    cout<<"Ingrese el numero de filas: ";
    cin>>filas;
    cout<<"Ingrese el numero de columnas: ";
    cin>>columnas;

    int** matrizNumeros;
    matrizNumeros=new int*[filas];

    for (int i = 0; i < filas; i++){
        matrizNumeros[i] = new int[columnas];
    }

    for (int i = 0; i < filas; i++){
        for (int j = 0; j < columnas; j++){
            cout<<"matriz["<<i<<"]"<<"["<<j<<"] = ";
            cin>>matrizNumeros[i][j];
            
        }
        
    }

    for (int i = 0; i < filas; i++){
        for (int j = 0; j < columnas; j++){
            cout<<" "<<matrizNumeros[i][j]<<" ";
        }
        cout<<""<<endl;
        
    }



    return 0;
}