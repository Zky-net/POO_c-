#include <iostream>
#include "clase_circulo.h"
//LUIS ANGEL DIAZ DIAZ
using namespace std;


int main(){
    Circulo c1,c2;

    c1.asignarValores(5);
    c2.asignarValores(-5);

    cout<<endl<<"valores de c1 y c2"<<endl;
    c1.mostartCirculo();
    c2.mostartCirculo();

    cout<<endl<<"Modificando el valor de c2"<<endl;
    c2.setRadio(5);
    cout<<"Nuevo valor de c2: "<<c2.getRadio()<<endl;

    return 0;
}