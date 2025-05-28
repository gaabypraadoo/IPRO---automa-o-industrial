#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float meta;
    float qntPecaProd;

    cout<<"Meta da producao do dia: ";
    cin>>meta;

    cout<<"Quantidade de pecas produzidas no dia: ";
    cin>>qntPecaProd;

    float eficiencia = (qntPecaProd/meta)*100.0f;
    cout << fixed << setprecision(1);

    cout<<"\nMeta: "<<meta;
    cout<<"\nPecas produzidas: "<<qntPecaProd;
    cout<<"\nEficiencia da maquina: "<<eficiencia<<"%";

    return 0;
}
