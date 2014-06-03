#include "dmsa.h"
#include "pessoa.h"


Dmsa::Dmsa() :  padrao(100), padraoBG(0), padraoArea(1), padraoBGArea(1), padraoTempo(1),
                padraoSeringaCheia(100), padraoSeringaVazia(0), pacienteSeringaCheia(100), pacienteSeringaVazia(0),
                rimDireito(50), rimDireitoBG(0), rimDireitoArea(1), rimDireitoBGArea(1), rimDireitoTempo(1),
                rimEsquerdo(50), rimEsquerdoBG(0), rimEsquerdoArea(1), rimEsquerdoBGArea(1), rimEsquerdoTempo(1)
{
  /* It seems pessoa is not initialized. Does it need to be? */
}

Dmsa::~Dmsa(){
}


/**
  * getters and setters Pessoa
  */

void Dmsa::setPessoa(Pessoa pessoa){
    this->pessoa = pessoa;
}

Pessoa Dmsa::getPessoa(){
    return this->pessoa;
}

/**
  * getters and setters do padrao
  */

void Dmsa::setPadrao(int padrao){
    this->padrao = padrao;
}

int Dmsa::getPadrao(){
    return this->padrao;
}

void Dmsa::setPadraoBG(int padraoBG){
    this->padraoBG = padraoBG;
}

int Dmsa::getPadraoBG(){
    return this->padraoBG;
}

void Dmsa::setPadraoArea(int padraoArea){
    this->padraoArea = padraoArea;
}

int Dmsa::getPadraoArea(){
    return this->padraoArea;
}

void Dmsa::setPadraoBGArea(int padraoBGArea){
    this->padraoBGArea = padraoBGArea;
}

int Dmsa::getPadraoBGArea(){
    return this->padraoBGArea;
}

void Dmsa::setPadraoTempo(int padraoTempo){
    this->padraoTempo = padraoTempo;
}

int Dmsa::getPadraoTempo(){
    return this->padraoTempo;
}

/**
  * getters and setters das seringas
  */

void Dmsa::setPadraoSeringaCheia(int padraoSeringaCheia){
    this->padraoSeringaCheia = padraoSeringaCheia;
}

int Dmsa::getPadraoSeringaCheia(){
    return this->padraoSeringaCheia;
}

void Dmsa::setPadraoSeringaVazia(int padraoSeringaVazia){
    this->padraoSeringaVazia = padraoSeringaVazia;
}

int Dmsa::getPadraoSeringaVazia(){
    return this->padraoSeringaVazia;
}

void Dmsa::setPacienteSeringaCheia(int pacienteSeringaCheia){
    this->pacienteSeringaCheia = pacienteSeringaCheia;
}

int Dmsa::getPacienteSeringaCheia(){
    return this->pacienteSeringaCheia;
}

void Dmsa::setPacienteSeringaVazia(int pacienteSeringaVazia){
    this->pacienteSeringaVazia = pacienteSeringaVazia;
}

int Dmsa::getPacienteSeringaVazia(){
    return this->pacienteSeringaVazia;
}

/**
  * getters and setters do Rim Direito
  */

void Dmsa::setRimDireito(int rimDireito){
    this->rimDireito = rimDireito;
}

int Dmsa::getRimDireito(){
    return this->rimDireito;
}

void Dmsa::setRimDireitoBG(int rimDireitoBG){
    this->rimDireitoBG = rimDireitoBG;
}

int Dmsa::getRimDireitoBG(){
    return this->rimDireitoBG;
}

void Dmsa::setRimDireitoArea(int rimDireitoArea){
    this->rimDireitoArea = rimDireitoArea;
}

int Dmsa::getRimDireitoArea(){
    return this->rimDireitoArea;
}

void Dmsa::setRimDireitoBGArea(int rimDireitoBGArea){
    this->rimDireitoBGArea = rimDireitoBGArea;
}

int Dmsa::getRimDireitoBGArea(){
    return this->rimDireitoBGArea;
}

void Dmsa::setRimDireitoTempo(int rimDireitoTempo){
    this->rimDireitoTempo = rimDireitoTempo;
}

int Dmsa::getRimDireitoTempo(){
    return this->rimDireitoTempo;
}


/**
  * getters and setters do Rim Esquerdo
  */

void Dmsa::setRimEsquerdo(int rimEsquerdo){
    this->rimEsquerdo = rimEsquerdo;
}

int Dmsa::getRimEsquerdo(){
    return this->rimEsquerdo;
}

void Dmsa::setRimEsquerdoBG(int rimEsquerdoBG){
    this->rimEsquerdoBG = rimEsquerdoBG;
}

int Dmsa::getRimEsquerdoBG(){
    return this->rimEsquerdoBG;
}

void Dmsa::setRimEsquerdoArea(int rimEsquerdoArea){
    this->rimEsquerdoArea = rimEsquerdoArea;
}

int Dmsa::getRimEsquerdoArea(){
    return this->rimEsquerdoArea;
}

void Dmsa::setRimEsquerdoBGArea(int rimEsquerdoBGArea){
    this->rimEsquerdoBGArea = rimEsquerdoBGArea;
}

int Dmsa::getRimEsquerdoBGArea(){
    return this->rimEsquerdoBGArea;
}

void Dmsa::setRimEsquerdoTempo(int rimEsquerdoTempo){
    this->rimEsquerdoTempo = rimEsquerdoTempo;
}

int Dmsa::getRimEsquerdoTempo(){
    return this->rimEsquerdoTempo;
}


float Dmsa::calculaProfundidadeRenal(int idade, int peso, int altura){

    float a(0), b(0), c(0);

    if ((idade > 0) && (idade <= 9)) {
            a =  2.364F;
            b =  0.083F;
            c = -0.281F;
    } else if ((idade > 9) && (idade <= 19)) {
            a =  3.686F;
            b =  0.028F;
            c = -0.248F;
    } else {
            a = -1.017F;
            b =  0.049F;
            c =  2.198F;
    }

    // ?????? A altura deve passar de cm para metro ???????
    return a + (b * peso) + (c * (altura / 100.0F) );
}

float Dmsa::calculaFatorK(float profundidadeRenal){
    return ( 0.00023F * (profundidadeRenal * profundidadeRenal * profundidadeRenal) )
             + ( 0.0012F * ( profundidadeRenal * profundidadeRenal) )
             - ( 0.1332F * profundidadeRenal) + 1.5015F;
}

