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

    cout << "teste de conversao de tempo na base de anos" << endl;
}
