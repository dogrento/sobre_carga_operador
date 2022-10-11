#include <string>
#include <iostream>
using namespace std;

#include "minha_string.h"

int main(){
    string s1 ( "bom dia!" ), s2;
    s2 = s1;  // Atribui s1 a s2 com =

    cout << "S1: " << s1 << endl;
    cout << "S2: " << s2 << endl;
    cout << endl;

    s2[ 0 ] = 'C'; // modifica S2
    cout << "S1: " << s1 << endl;
    cout << "S2: " << s2 << endl;
    cout << endl;

    int tam = s2.length();
    for (int x = 0; x < tam; ++x)
    {
        cout << s2 [ x ]; // demonstrando o operador de colchetes
    }
    cout << endl;

    cout << "-------------COMEÇANDO MINHA STRING------------" << endl;

    MinhaString teste("cu buceta teste");

    cout << typeid(teste).name() << endl;
    cout << teste.Get_string() << endl;
}