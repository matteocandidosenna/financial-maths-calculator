/*A fórmula básica para calcular o valor dos juros simples é J = C × i × t. [1] 
O Significado de Cada LetraJ: Juros (o valor total que será pago ou recebido).
C: Capital (o valor inicial emprestado ou investido).
i: Taxa de juros (o percentual cobrado por período, usado em formato decimal, como 5% = 0,05).
t: Tempo (o período em que o dinheiro fica aplicado ou emprestado).*/

#include "calculus.hpp"
using namespace std;

double converter_tempo(struct tempo periodo){
    //a unidade base vai ser meses
    double periodo_convertido = 0.0;
}

//primeira parte juros simples
double converter_taxa_mes(struct taxa indice){
    //a unidade base será meses
    if(indice.dia){
        double indice_convertido = indice.dia * 30;
        return indice_convertido;
    } 

    else if(indice.ano){
        double indice_convertidp = indice.ano / 360;
    }

    else return indice.mes;
}

double converter_tempo(struct tempo periodo){ 
    //converter para a base de meses
    double anos_meses = periodo.anos / 12;
    double meses_dias = periodo.dias * 30;
    double total = anos_meses + meses_dias + periodo.meses;
    return total;
}

double valor_final(double valor_inicial, double indice, double periodo){
    double valor_final = valor_inicial * (1 + indice * periodo);
    return valor_final;
}

double valor_presente(double valor_final, double indice, double periodo){
    double valor_presente = valor_final / (1 + indice * periodo);
    return valor_presente;
}

double taxa(double valor_inicial, double valor_final, double periodo){
    double taxa = (valor_final / valor_inicial - 1) / periodo;
    return taxa;
}

double tempo(double valor_inicial, double valor_final, double indice){
    double tempo = (valor_final/valor_inicial - 1) / indice;
    return tempo;
}
