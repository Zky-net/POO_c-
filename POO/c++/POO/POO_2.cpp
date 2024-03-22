#include <iostream>
//LUIS ANGEL DIAZ DIAZ
using namespace std;

class Rectangulo{
    private:
        float base, altura;
    public:
        void asignarValores(float _base, float _altura){
           
            if (_base > 0){
                base = _base;
            }else{
                base = 1;
            }
            
            if (_altura > 0){
                altura = _altura;
            }else{
                altura = 1;
            }
            
        }

        void mostrarRectangulo(){
            cout<<"Medidas del rectangulo"<<endl;
            cout<<"Base: "<<base<<endl;
            cout<<"Altura: "<<altura<<endl;
        }

        void  setAltura(float _altura){
            if (_altura <= 0){
                altura = 1;
            }else{
                altura = _altura;
            }
            
        }

        void setBase(float _base){
            if (_base <= 0){
                base = 1;
            }else{
                base = _base;
            }
            
        }

        float getAltura(){
            return altura;
        }

        float getBase(){
            return base;
        }

        void mastrarAreaCalculada(){
           cout<<altura<<" * "<<base<<" = "<<base*altura<<endl;
        }

};


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

