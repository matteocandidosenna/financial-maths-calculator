/*A fórmula básica para calcular o valor dos juros simples é J = C × i × t. [1] 
O Significado de Cada LetraJ: Juros (o valor total que será pago ou recebido).
C: Capital (o valor inicial emprestado ou investido).
i: Taxa de juros (o percentual cobrado por período, usado em formato decimal, como 5% = 0,05).
t: Tempo (o período em que o dinheiro fica aplicado ou emprestado).*/

#include <bits/stdc++.h>
#include <calculus.hpp>
using namespace std;

double converter_tempo(struct tempo periodo, double taxa){
    //a unidade base vai ser meses
    double tempo_convertido = 0.0;
    return tempo_convertido;
}

//juros simples
double converter_tempo(struct tempo periodo, double taxa){
    
}

double valor_final(double valor_inicial, double taxa, double periodo){
    double valor_final = valor_inicial*(1 + taxa * periodo);
    return valor_final;
}

double valor_presente(double valor_final, double taxa, double periodo){
    double valor_presente = valor_final / (1 +  taxa* periodo);
    return valor_presente;
}

double taxa(double valor_inicial, double valor_final, double periodo){
    double taxa = (valor_final / valor_inicial - 1) / periodo;
    return taxa;
}

double tempo(double valor_inicial, double valor_final, double taxa){

}