#ifndef DMSA_H
#define DMSA_H

#include "pessoa.h"

class Dmsa
{
public:
    Dmsa();
    ~Dmsa();

    void setPessoa(Pessoa pessoa);
    Pessoa getPessoa();

    void setPadrao(int padrao);
    int  getPadrao();
    void setPadraoBG(int padraoBG);
    int  getPadraoBG();
    void setPadraoArea(int padraoArea);
    int  getPadraoArea();
    void setPadraoBGArea(int padraoBGArea);
    int  getPadraoBGArea();
    void setPadraoTempo(int padraoTempo);
    int  getPadraoTempo();

    void setPadraoSeringaCheia(int padraoSeringaCheia);
    int  getPadraoSeringaCheia();
    void setPadraoSeringaVazia(int padraoSeringaVazia);
    int  getPadraoSeringaVazia();
    void setPacienteSeringaCheia(int pacienteSeringaCheia);
    int  getPacienteSeringaCheia();
    void setPacienteSeringaVazia(int pacienteSeringaVazia);
    int  getPacienteSeringaVazia();

    void setRimDireito(int rimDireito);
    int  getRimDireito();
    void setRimDireitoBG(int rimDireitoBG);
    int  getRimDireitoBG();
    void setRimDireitoArea(int rimDireitoArea);
    int  getRimDireitoArea();
    void setRimDireitoBGArea(int rimDireitoBGArea);
    int  getRimDireitoBGArea();
    void setRimDireitoTempo(int rimDireitoTempo);
    int  getRimDireitoTempo();

    void setRimEsquerdo(int RimEsquerdo);
    int  getRimEsquerdo();
    void setRimEsquerdoBG(int RimEsquerdoBG);
    int  getRimEsquerdoBG();
    void setRimEsquerdoArea(int RimEsquerdoArea);
    int  getRimEsquerdoArea();
    void setRimEsquerdoBGArea(int RimEsquerdoBGArea);
    int  getRimEsquerdoBGArea();
    void setRimEsquerdoTempo(int rimEsquerdoTempo);
    int  getRimEsquerdoTempo();

    //void calculaCaptacao();



private:
    Pessoa pessoa;

    int padrao;
    int padraoBG;
    int padraoArea;
    int padraoBGArea;
    int padraoTempo;  // em segundos

    int padraoSeringaCheia;
    int padraoSeringaVazia;
    int pacienteSeringaCheia;
    int pacienteSeringaVazia;

    int rimDireito;
    int rimDireitoBG;
    int rimDireitoArea;
    int rimDireitoBGArea;
    int rimDireitoTempo; // em segundos

    int rimEsquerdo;
    int rimEsquerdoBG;
    int rimEsquerdoArea;
    int rimEsquerdoBGArea;
    int rimEsquerdoTempo; // em segundos

};

#endif // DMSA_H
