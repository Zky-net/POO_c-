#include<iostream>
using namespace std;

class Persona{

    private:
        string nombre,direccion;
        int edad, dia,mes,anio;

    public:
        void asignarValores(string _nombre,string _direccion,int _edad, int _dia, int _mes, int _anio){
            nombre = _nombre;
            direccion = _direccion;
            edad=_edad;
            dia=_dia;
            mes = _mes;
            anio = _anio;
        }

        void setNombre(string _nombre){
            nombre = _nombre;
        }

        void setDireccion(string _direccion){
            direccion = _direccion;
        }

        void setEdad(int _edad){
            edad = _edad;
        }

        void setDia(int _dia){
            dia = _dia;
        }

        void setMes(int _mes){
            mes = _mes;
        }

        void setAnio(int _anio){
            anio = _anio;
        }

        //metodos get

        string getNombre(){
            return nombre;
        }
        string getDireccion(){
            return direccion;
        }
        int getEdad(){
            return edad;
        }

        int getMes(){
            return mes;
        }

        int getAnio(){
            return anio;
        }

        void mostrarPersona(){
            cout<<""<<endl;
            cout<<"Datos de la persona: "<<endl;
            cout<<"nombre: "<<nombre<<endl;
            cout<<"Direccion: "<<direccion<<endl;
            cout<<"Edad: "<<edad<<endl;
            cout<<"Fecha de nacimiento: "<<dia<<"/"<<mes<<"/"<<anio<<endl;
            cout<<""<<endl;
        }
};

int main(){

    Persona persona;
    Persona persona2;

    persona.asignarValores("Luis","direccion 1",20,27,01,2004);
    persona2.asignarValores("Luiss","direccion 1",20,27,01,2004);


    persona.mostrarPersona();
    persona2.mostrarPersona();

    persona2.setDia(5);

    cout<<"nombre: "<<persona2.getNombre();
    
    return 0;
}