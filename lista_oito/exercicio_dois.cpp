#include <iostream>
using namespace std;

void exibirMensagemInicial()
{
    cout<<"\t-------------------------------"<<endl;
    cout<<"\tBem-Vindo ao Sistema De Medidas"<<endl;
    cout<<"\t-------------------------------"<<endl;
}

int calcularTransformacao(int metro)
{
    return metro*100;
}

void exibirMensagemDoCalculo(int centimetro)
{
    cout<<"\t\tValor em centimetros: "<<centimetro<<endl;
}

int main()
{
    int metro = 0, centimetro = 0;

    exibirMensagemInicial();

    cout<<"\t\tValor em metros: ";
    cin>>metro;

    centimetro = calcularTransformacao(metro);
    exibirMensagemDoCalculo(centimetro);

}
