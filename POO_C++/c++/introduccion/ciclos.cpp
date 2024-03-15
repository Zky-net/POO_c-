#include<iostream>

using namespace std;

int main(){
    int numeroDado = 0,i = 1;
    
    do{
        cout<<"Ingrese un numero del 1-10: ";
        cin>>numeroDado;

    } while (numeroDado <= 0 || numeroDado >= 11);

    cout<<endl<<"Usando el ciclo do-while"<<endl;
    do{
        cout<<numeroDado<<" X "<<i<<" = "<<numeroDado*i<<endl;
        i++;
    } while (i<= 10);

    cout<<endl<<"Usando el ciclo for"<<endl;

    for (int i = 1; i <= 10; i++){
        cout<<numeroDado<<" X "<<i<<" = "<<numeroDado*i<<endl;
    }
    
    cout<<endl<<"Usando el ciclo while"<<endl;

    i=1;
    while (i<= 10){
        cout<<numeroDado<<" X "<<i<<" = "<<numeroDado*i<<endl;
        i++;
    }
    
    return 0;
}

