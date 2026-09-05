#ifndef CALCULUS_HPP
#define CALCULUS_HPP
using namespace std;

struct taxa{
    bool dia = false;
    bool mes = false;
    bool ano = false;
    double percentual = 0.0;
};

struct tempo{
    int dias = 0;
    int meses = 0; 
    int anos = 0;
};

void menu();
double converter_taxa(struct taxa indice);
double converter_tempo(struct tempo periodo);
double valor_final(double valor_inicial, double indice, double periodo);
double valor_presente(double valor_final, double indice, double periodo);
double calcular_taxa(double valor_inicial, double valor_final, double periodo);
double calcular_tempo(double valor_inicial, double valor_final, double indice);

#endif
