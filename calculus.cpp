/*A fórmula básica para calcular o valor dos juros simples é J = C × i × t. [1] 
O Significado de Cada LetraJ: Juros (o valor total que será pago ou recebido).
C: Capital (o valor inicial emprestado ou investido).
i: Taxa de juros (o percentual cobrado por período, usado em formato decimal, como 5% = 0,05).
t: Tempo (o período em que o dinheiro fica aplicado ou emprestado).*/

#include "calculus.hpp"
#include <iostream>
#include <cmath>
using namespace std;

void menu(){
    int opcao;
    
    do{
        cout << "CALCULADORA FINANCEIRA\n" <<endl;
        cout << "1. Encontrar taxa" << endl;
        cout << "2. Encontrar tempo" << endl;
        cout << "3. Encontrar valor inicial" << endl;
        cout << "4. Encontrar valor final" << endl;
        cout << "ESCOLHA UM TIPO DE OPERACAO: ";
        cin >> opcao;
        switch (opcao)
        {
        case 1:{
            cout << "Informe o valor inicial:\n";
            double valor_inicial; cin >> valor_inicial;

            cout << "Informe o valor final:\n";
            double valor_final; cin >> valor_final;

            struct tempo periodo;
            cout << "Informe o tempo:\n";

            cout << "Anos: ";
            cin >> periodo.anos;

            cout << "Meses: ";
            cin >> periodo.meses;

            cout << "Dias: ";
            cin >> periodo.dias;
    
            double taxa = calcular_taxa(valor_inicial, valor_final, converter_tempo(periodo));
            cout << "\nTaxa: " << taxa*100 <<"% ao mes\n";
            break; 
        }
            
        case 2:{
            cout << "Informe o valor inicial:\n";
            double valor_inicial; cin >> valor_inicial;

            cout << "Informe o valor final:\n";
            double valor_final; cin >> valor_final;

            cout << "Informe a taxa (%)";
            double taxa; cin >> taxa;

            struct taxa indice;

            cout << "1. Ao dia \n2. Ao mes \n3. Ao ano\n";
            int op; cin >> op;

            if(op == 1) indice.dia = true;
            else if(op == 2) indice.mes = true;
            else indice.ano = true;

            indice.percentual = taxa /100.0;

            double taxa_convertida = converter_taxa(indice);
            double tempo = calcular_tempo(valor_inicial, valor_final, taxa_convertida);

            int dias = static_cast<int>(round(tempo * 30));
            int anos = dias / 360;
            int meses = (dias % 360) / 30;
            dias = dias % 30;
            cout << anos << " anos, "
            << meses << " meses e "
            <<dias << " dias" << endl;
            break;

            
        }
        default:
            break;
        }
    }while(opcao != 0);
    return;
}

//primeira parte juros simples
double converter_taxa(struct taxa indice){
    //a unidade base será meses
    if(indice.dia){ //dia para mes
        double indice_convertido = indice.percentual * 30;
        return indice_convertido;
    } 

    else if(indice.ano){ //ano para mes
        double indice_convertido = indice.percentual / 12;
        return indice_convertido;
    }

    else return indice.percentual;
}

double converter_tempo(struct tempo periodo){ 
    //converter para a base de meses
    double anos_meses = periodo.anos * 12.0;
    double meses_dias = periodo.dias / 30.0;
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

double calcular_taxa(double valor_inicial, double valor_final, double periodo){
    double taxa = (valor_final / valor_inicial - 1) / periodo;
    return taxa;
}

double calcular_tempo(double valor_inicial, double valor_final, double indice){
    double tempo = (valor_final/valor_inicial - 1) / indice;
    return tempo;
}
