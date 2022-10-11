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

    MinhaString teste1("cu buceta teste");
    MinhaString teste2;
    MinhaString teste3;

    teste3 = teste1;

    teste2 = "aqui estou usando sobre carga de operador.";

    cout << teste1.Get_string() << endl;
    cout << teste2.Get_string() << endl;

    if(teste1 == &teste3){
        cout << "entrei no if" << endl;
        cout << "teste1 é igual ao teste3." << endl;
    }
    else{
        cout << "entrei no else." << endl;
    }

    return 0;
}