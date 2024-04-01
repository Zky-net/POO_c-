#include <iostream>
#include "clase_rectangulo.h"
//LUIS ANGEL DIAZ DIAZ
using namespace std;

int main(){

    Rectangulo rect1;
    Rectangulo rect2;

    rect1.asignarValores(6,4);
    rect2.asignarValores(-5,-5);

    cout<<endl<<"---> rectangulo 1"<<endl;
    rect1.mostrarRectangulo();
    cout<<endl<<"---> rectangulo 2"<<endl;
    rect2.mostrarRectangulo();

    cout<<endl<<"Areas de los dos rectangulos: ";
    cout<<endl<<"rect1: "<<endl;
    rect1.mastrarAreaCalculada();
    cout<<"rect2: "<<endl;
    rect2.mastrarAreaCalculada();

    rect2.setAltura(5);
    rect2.setBase(3);

    cout<<endl<<"---> rectangulo 2 modificado"<<endl;
    rect2.mostrarRectangulo();
    cout<<endl<<"Area del rectangulo 2: "<<endl;
    rect2.mastrarAreaCalculada();

    return 0;
}

