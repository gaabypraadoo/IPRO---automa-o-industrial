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
    cout<<"\n=============== CLASSIFICA��O DE DESEMPENHO EM QUESTION�RIO ===============\n";
    cout<<"\n===========================================================================\n";

    cout<<"\nQual � o total de quest�es do question�rio realizado? ";
    cin>>total_questoes;

    cout<<"Quantas quest�es voc� acertou? ";
    cin>>quant_acertada;

    percentual = (quant_acertada/total_questoes)*100.0f;
    cout << fixed << setprecision(2);

    //cout<<"Desempenho "<<((quant_acertada/total_questoes)*100)<<"%";

    if(percentual >= 70.0f){
        cout<<"\nSeu desempenho, em porcentagem, foi: "<<percentual<<"%";
        cout<<"\n�TIMO :)!!!\n\n";
    }
    else{
        cout<<"\nSeu desempenho, em porcentagem, foi: "<<percentual<<"%";
        cout<<"\nPRECISA MELHORAR!!!\n\n";
    }
    return 0;
}
