#include "pessoa.h"

Pessoa::Pessoa() : idade(30), peso(70), altura(170)
{
}

void Pessoa::setIdade(int idade){
    this->idade = idade;
}

int Pessoa::getIdade(){
    return this->idade;
}

void Pessoa::setPeso(int peso){
    this->peso = peso;
}

int Pessoa::getPeso(){
    return this->peso;
}

void Pessoa::setAltura(int altura){
    this->altura = altura;
}

int Pessoa::getAltura(){
    return this->altura;
}
