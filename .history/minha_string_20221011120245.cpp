#include "minha_string.h"


MinhaString::MinhaString(const char* s):
tamanho(strlen(s))
{
    cout << "setando string..." << endl;
    strcpy(str,s);
}

MinhaString::~MinhaString(){cout << "destruindo..."<<endl;}

char* MinhaString::Get_string(){
    return str;
}