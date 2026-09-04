/*A fórmula básica para calcular o valor dos juros simples é J = C × i × t. [1] 
O Significado de Cada LetraJ: Juros (o valor total que será pago ou recebido).
C: Capital (o valor inicial emprestado ou investido).
i: Taxa de juros (o percentual cobrado por período, usado em formato decimal, como 5% = 0,05).
t: Tempo (o período em que o dinheiro fica aplicado ou emprestado).*/

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

double converter_taxa_mes(struct taxa indice);
double converter_tempo(struct tempo periodo);
double valor_final(double valor_inicial, double indice, double periodo);
double valor_presente(double valor_final, double indice, double periodo);
double taxa(double valor_inicial, double valor_final, double periodo);
double tempo(double valor_inicial, double valor_final, double indice);

#endif
