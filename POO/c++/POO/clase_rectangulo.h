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
