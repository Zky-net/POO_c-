#include<iostream>
using namespace std;

int main(){
    //verificar si un numero es par o impar
    int numeroDado;

    cout<<"Ingrese un numero: ";
    cin>>numeroDado;

    if (numeroDado == 0){
        cout<<"El numero es cero";
        return 0;
    }
    (numeroDado%2 == 0) ?cout<<"El numero es par" : cout<<"El numero es impar";
    
    

    return 0;
}
