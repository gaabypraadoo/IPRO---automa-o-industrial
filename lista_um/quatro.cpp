#include <iostream>
using namespace std;

int main()
{
    int numUm;
    int numDois;

    setlocale(LC_ALL,"");
    system("color F1");

    cout<<"======== CALCULADORA ========="<<endl;
    cout<<"Digite o primeiro número: ";
    cin>>numUm;
    cout<<"Digite o segundo número: ";
    cin>>numDois;

    int soma = numUm+numDois;
    int subtracao = numUm-numDois;
    int multiplicacao = numUm*numDois;
    float divisao = numUm/numDois;
    float modulo = numUm%numDois;

    cout<<"\n\nSoma: "<<soma;
    cout<<"\nSubtração: "<<subtracao;
    cout<<"\nMultiplicação: "<<multiplicacao;
    cout<<"\nDivisão: "<<divisao;
    cout<<"\nResto da divião: "<<modulo;

    return 0;
}
