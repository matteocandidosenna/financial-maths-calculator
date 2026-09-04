/*A fórmula básica para calcular o valor dos juros simples é J = C × i × t. [1] 
O Significado de Cada LetraJ: Juros (o valor total que será pago ou recebido).
C: Capital (o valor inicial emprestado ou investido).
i: Taxa de juros (o percentual cobrado por período, usado em formato decimal, como 5% = 0,05).
t: Tempo (o período em que o dinheiro fica aplicado ou emprestado).*/

#ifndef CALCULUS_HPP
#define CALCULUS_HPP
using namespace std;

struct tempo{
    int dias = 0;
    int meses = 0; 
    int anos = 0;
};

double converter_tempo(struct tempo periodo);
double valor_final(double valor_inicial, double taxa, double tempo);
double valor_presente(double valor_final, struct tempo periodo);
double taxa(double valor_inicial, double valor_final, struct tempo perido);
double tempo(double valor_inicial, double valor_final, double taxa);

#endif
