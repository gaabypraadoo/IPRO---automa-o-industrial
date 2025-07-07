#include <iostream>
using namespace std;

void exibirMensagemInicial()
{
    cout<<"\t+------------------------------------+"<<endl;
    cout<<"\t Calcular horas e minutos em segundos "<<endl;
    cout<<"\t+------------------------------------+"<<endl;
}

int calcularHoras(int horas)
{
    return horas * 3600;
}

int calcularMinutos(int minutos)
{
    return minutos * 60;
}

int main()
{
    int horas, minutos, segundos;
    exibirMensagemInicial();

    cout<<"Digite as horas: ";
    cin>>horas;
    cout<<"Digite os minutos: ";
    cin>>minutos;

    segundos = calcularHoras(horas) + calcularMinutos(minutos);

    cout<<"Total em segundos: "<< segundos << endl;
}
