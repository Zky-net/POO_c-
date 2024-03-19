#include<iostream>

using namespace std;

int main() {

    int edad;
    float altura;
    double saldo;
    char nombre[10];

    cout<< "Introduza su edad: "; 
    cin >> edad;
    cout << "Introduzca su altura: ";
    cin >> altura;
    cout << "Introduzca su saldo: ";
    cin >> saldo;

    //mostrar datos

    cout<<"La edad ingresada es: "<<edad<<endl;
    cout<<"La altura ingresada es: "<<altura<<endl;
    cout<<"Su saldo ingresado es de: "<<saldo<<endl;


    return 0;
}



