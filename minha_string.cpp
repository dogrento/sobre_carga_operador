#include "minha_string.h"

// metodo construtora 
MinhaString::MinhaString(const char* s):
tamanho(strlen(s))
{
    cout << "construindo string..." << endl;
    Set_string(s);
}

MinhaString::~MinhaString(){
    cout << "destruindo..."<<endl;
    // operador para destruir um array e ponteiros 
    delete[]pString;
    // provavelmente, não a necessidade de atribuir NULL ao ponteiro
    pString = NULL;
}

void MinhaString::Set_string(const char* s){
    cout << "setando string..." << endl;
    cout << "criando vetor dinamicamente." << endl;
    pString = new char[tamanho + 1];
    // copiando string para o novo ponteiro 
    strcpy(pString, s);
}

const char* MinhaString::Get_string(){
    return pString;
}

// sobre carga de operador e criando regra para operador receber
void MinhaString::operator=(const char* s){
    //se conteudo do parametro for diferente do atributo
    if(s!=pString){
        // destroi ponteiro
        delete[]pString;
        // atributo tamanho receber o tamanho do que parametro
        tamanho = strlen(s);
        // set nova string e coloca seu conteudo no atributo pString
        Set_string(s);
    }
}

void MinhaString::operator=(MinhaString& s){
    operator=(s.Get_string());
}

bool MinhaString::operator ==(MinhaString& s){
    if(0 == strcmp(pString, s.Get_string())){
        return true;
    }
    return false;
}