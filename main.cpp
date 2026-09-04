#include <iostream>
#include "calculus.hpp"
using namespace std;
int main(){
    cout << "teste conversão de tempo" <<endl;
    int dias, meses, anos;
    cout << "dias, meses, anos: " <<endl;
    cin >> dias >> meses >> anos;

    struct tempo periodo;
    periodo.dias = dias;
    periodo.meses = meses;
    periodo.anos = anos;

    cout << "teste de conversao de tempo na base de meses" << endl;
    cout << "dias || meses || anos: " << endl;
    cout << periodo.dias << " " << periodo.meses << " " << periodo.anos <<endl;

    double tempo_convertido = converter_tempo(periodo);

    cout << "conversão para meses" << tempo_convertido << endl;
}
