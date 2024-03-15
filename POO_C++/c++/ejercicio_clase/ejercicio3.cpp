#include<iostream>
using namespace std;

int main(){
    int numeroDado;
    char letra[1];

    cout<<"Ingrese un numero del 1 al 5: ";
    cin>>numeroDado;

    cout<<"Ingrese una letra: ";
    cin>>letra[0];

    if (numeroDado == 1){
        cout<<letra[0];
    }
    if (numeroDado == 2){
        cout<<letra[0]<<endl;
        cout<<letra[0]<<endl;
    }
    if (numeroDado == 3){
        cout<<letra[0]<<endl;
        cout<<letra[0]<<endl;
        cout<<letra[0]<<endl;
    }
    if (numeroDado == 4){
        cout<<letra[0]<<endl;
        cout<<letra[0]<<endl;
        cout<<letra[0]<<endl;
    }
    if (numeroDado == 5){
        cout<<""<<letra[0]<<endl;
        cout<<""<<letra[0]<<endl;
        cout<<""<<letra[0]<<endl;
        cout<<""<<letra[0]<<endl;
        cout<<""<<letra[0]<<endl;
    }

    return 0;
}