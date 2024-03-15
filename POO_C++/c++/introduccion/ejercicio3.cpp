#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    //?Verificar si la letra ingresada es una vocal o no
    char letra[1];

    cout << "Ingrese una  letra: ";
    cin >> letra;
    letra[0] = tolower(letra[0]); //!Convierte en minusculas las letras

    switch (letra[0]){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout << "La letra "<<letra<<" es minuscula";
        break;
        default:
            cout << "La letra "<<letra<<" no es minuscula";
        break;
    }

    return 0;
}
