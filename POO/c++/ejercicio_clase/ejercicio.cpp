#include<iostream>
using namespace std;

int main(){
    char letra[1];

    cout<<"ingrese una letra: ";
    cin>>letra;

    switch (letra[0]){
        case 'a':
           cout << "La letra A es minuscula";
        break;
        case 'e':
           cout << "La letra E es minuscula";
        break;
        case 'i':
           cout << "La letra I es minuscula";
        break;
        case 'o':
           cout << "La letra O es minuscula";
        break;
        case 'u':
            cout << "La letra U es minuscula";
        break;
        case 'A':
           cout << "La letra a es minuscula";
        break;
        case 'E':
           cout << "La letra e es minuscula";
        break;
        case 'I':
           cout << "La letra i es minuscula";
        break;
        case 'O':
           cout << "La letra o es minuscula";
        break;
        case 'U':
            cout << "La letra u es minuscula";
        break;
        default:
            cout << "La letra "<<letra<<" no es minuscula";
        break;
    }
    return 0;
}