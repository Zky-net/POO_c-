#include <iostream>
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

        float perimetro(float r){
            return 3.14*(r*2);
        }

        float Area(float r){
            return (3.14*radio*radio);
        }
};
