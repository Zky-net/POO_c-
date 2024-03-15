#include<iostream>
using namespace std;

int main(){
    int numeros[5];

    cout<<"Ingrese los datos del arreglo: "<<endl;

    for (int i = 0; i < 5; i++){
        cout<<"numeros["<<i<<"] = ";
        cin>>numeros[i];
    }

    cout<<""<<endl;

    cout<<"[";
    for (int i = 0; i < 5; i++){
        cout<<" "<<numeros[i]<<", ";
    }
    cout<<"]"<<endl;

    return 0;
}

