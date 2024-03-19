#include<iostream>

using namespace std;

class Persona{

    private:
        string nombre,direccion;
        int edad, dia,mes,anio;

    public:
        void asignarValores(string _nombre,string _direccion,int _edad, int _dia, int _mes, int _anio);
        void mostrarPersona();

};

void Persona::asignarValores(string _nombre,string _direccion,int _edad, int _dia, int _mes, int _anio){

    nombre = _nombre;
    direccion = _direccion;
    edad=_edad;
    dia=_dia;
    mes = _mes;
    anio = _anio;
}

void Persona::mostrarPersona(){
    cout<<""<<endl;
    cout<<"Datos de la persona: "<<endl;
    cout<<"nombre: "<<nombre<<endl;
    cout<<"Direccion: "<<direccion<<endl;
    cout<<"Edad: "<<edad<<endl;
    cout<<"Fecha de nacimiento: "<<dia<<"/"<<mes<<"/"<<anio<<endl;
    cout<<""<<endl;

}

int main(){

    //Instancioando la clase persona

    Persona persona;
    Persona persona2;

    persona.asignarValores("Luis","direccion 1",20,27,01,2004);
    persona2.asignarValores("Luiss","direccion 1",20,27,01,2004);

    persona.mostrarPersona();
    persona2.mostrarPersona();
    

    return 0;
}