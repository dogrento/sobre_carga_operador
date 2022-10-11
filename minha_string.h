#ifndef _MINHA_STRING_H_
#define _MINHA_STRING_H_

#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

class MinhaString{
    private:
        // atributes
        int tamanho;
        char* pString;
        // char str[300];

        // methods
        void Set_string(const char* s);

    public:
        MinhaString(const char* s = "");
        ~MinhaString();

        const char* Get_string();

        // sobre carga de operador
        void operator=(char* s);
        void operator=(MinhaString& s);
        bool operator == (MinhaString& s);
};
    
#endif