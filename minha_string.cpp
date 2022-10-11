#include "minha_string.h"


MinhaString::MinhaString(const char* s):
tamanho(strlen(s))
{
    cout << "construindo string..." << endl;
    Set_string(s);
}

MinhaString::~MinhaString(){
    cout << "destruindo..."<<endl;
    delete[]pString;
    pString = NULL;
}

void MinhaString::Set_string(const char* s){
    cout << "setando string..." << endl;
    pString = new char[tamanho + 1];
    strcpy(pString, s);
}

const char* MinhaString::Get_string(){
    return pString;
}

void MinhaString::operator=(char* s){
    delete[]pString;
    tamanho = strlen(s);
    Set_string(s);
}