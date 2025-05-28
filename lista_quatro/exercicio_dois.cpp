#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL,"");

    int tipo_consumidor = 0, consumo = 0, valor_conta = 0;

    cout<<"Tipo de consumidor: ";
    cin>>tipo_consumidor;

    if(tipo_consumidor == 1){
        cout<<"Consumo em kWh: ";
        cin>>consumo;

        if(consumo <= 500){
            cout<<"Valor da conta: R$"<<consumo*0.50<<endl;
        }
        else{
            cout<<"Valor da conta: R$"<<consumo*0.65<<endl;
        }
    }

    else if(tipo_consumidor == 2){
        cout<<"Consumo em kWh: ";
        cin>>consumo;

        if(consumo <= 100){
            cout<<"Valor da conta: R$"<<consumo*0.55<<endl;
        }
        else{
            cout<<"Valor da conta: R$"<<consumo*0.60<<endl;
        }
    }

    else{
        cout<<"Tipo de consumidor inválido!";
    }

    return 0;

}
