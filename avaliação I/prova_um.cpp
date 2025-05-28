#include <iostream>
#include <locale.h>
#include <iomanip>
using namespace std;

int main()
{
    float total_questoes = 0, quant_acertada = 0;
    float percentual = 0;

    setlocale(LC_ALL,"");

    cout<<"\n===========================================================================\n";
    cout<<"\n=============== CLASSIFICAÇÃO DE DESEMPENHO EM QUESTIONÁRIO ===============\n";
    cout<<"\n===========================================================================\n";

    cout<<"\nQual é o total de questões do questionário realizado? ";
    cin>>total_questoes;

    cout<<"Quantas questões você acertou? ";
    cin>>quant_acertada;

    percentual = (quant_acertada/total_questoes)*100.0f;
    cout << fixed << setprecision(2);

    //cout<<"Desempenho "<<((quant_acertada/total_questoes)*100)<<"%";

    if(percentual >= 70.0f){
        cout<<"\nSeu desempenho, em porcentagem, foi: "<<percentual<<"%";
        cout<<"\nÓTIMO :)!!!\n\n";
    }
    else{
        cout<<"\nSeu desempenho, em porcentagem, foi: "<<percentual<<"%";
        cout<<"\nPRECISA MELHORAR!!!\n\n";
    }
    return 0;
}
