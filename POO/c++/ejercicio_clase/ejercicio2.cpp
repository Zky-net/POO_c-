#include<iostream>
using namespace std;

int main(){
    int opcio = 0, numero1, numero2;
    cout<<"ingrese un numero: ";
    cin>>numero1;
    cout<<"ingrese otro numero: ";
    cin>>numero2;

    cout<<endl<<"MENU DE OPCIONES"<<endl;
    cout<<"1 ---- suma"<<endl;
    cout<<"2 ---- resta"<<endl;
    cout<<"3 ---- multiplicacion"<<endl;
    cout<<"4 ---- divizion"<<endl;
    cin>>opcio;

    if (opcio == 1){
        cout<<"El resultado es: "<<numero1+numero2;
    }
    if (opcio == 2){
        cout<<"El resultado es: "<<numero1-numero2;
    }
    if (opcio == 3){
        cout<<"El resultado es: "<<numero1*numero2;
    }
    if (opcio == 4){

        if (numero2 != 0){
            cout<<"El resultado es: "<<numero1/numero2;
        }else{
            cout<<"el denominador no puede ser cero";
        }

    }

    return 0;
}