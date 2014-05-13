#ifndef PESSOA_H
#define PESSOA_H

class Pessoa
{
public:
    Pessoa();
    void setIdade(int idade);
    int getIdade();
    void setPeso(int peso);
    int getPeso();
    void setAltura(int altura);
    int getAltura();

private:
    int idade;  //anos
    int peso;   //kg
    int altura; //cm

};

#endif // PESSOA_H
