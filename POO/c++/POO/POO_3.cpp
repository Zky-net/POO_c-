#include <iostream>
//LUIS ANGEL DIAZ DIAZ
using namespace std;

class Circulo{
    private:
        float radio; 
    public:
        void asignarValores(float _radio){

            if (_radio >= 1){
                radio= _radio;
            }else{
                radio = 1;
            }      
        } 

        void mostartCirculo(){
            cout<<"El radio del circulo es: "<<radio<<endl;
        }

        void setRadio(float _radio){
            if (_radio >= 1){
                radio= _radio;
            }else{
                radio = 1;
            }      
        }
        
        float getRadio(){
            return radio;
        }
};

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