#include <iostream>
using namespace std;

void exibirMensagemInicial()
{
    cout<<"\t+-------------------------------+"<<endl;
    cout<<"\t Bem-Vindo ao Sistema de Medidas "<<endl;
    cout<<"\t+-------------------------------+"<<endl;
}

double calcular(double metros)
{
    return metros * 100;
}

int main()
{
    double metros, centimetros;
    exibirMensagemInicial();

    cout<<"Digite o valor em metros: ";
    cin>>metros;

    centimetros = calcular(metros);

    cout<<"Valor em centimetros: " << centimetros << endl;
}
