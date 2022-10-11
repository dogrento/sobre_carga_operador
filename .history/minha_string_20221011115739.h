#ifndef _MINHA_STRING_H_
#define _MINHA_STRING_H_

#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

class MinhaString{
    private:
        int tamanho;
        char str[300];

    public:
        MinhaString(){
            tamanho = 0;
            strcpy(str, "");
        }

        MinhaString(const char* s);
        ~MinhaString();

        char* Get_string();
};
    
#endif