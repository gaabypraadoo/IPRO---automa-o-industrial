#include <iostream>
using namespace std;

int main()
{
    int numUm;
    int numDois;

    setlocale(LC_ALL,"");
    system("color F1");

    cout<<"======== CALCULADORA ========="<<endl;
    cout<<"Digite o primeiro n�mero: ";
    cin>>numUm;
    cout<<"Digite o segundo n�mero: ";
    cin>>numDois;

    int soma = numUm+numDois;
    int subtracao = numUm-numDois;
    int multiplicacao = numUm*numDois;
    float divisao = numUm/numDois;
    float modulo = numUm%numDois;

    cout<<"\n\nSoma: "<<soma;
    cout<<"\nSubtra��o: "<<subtracao;
    cout<<"\nMultiplica��o: "<<multiplicacao;
    cout<<"\nDivis�o: "<<divisao;
    cout<<"\nResto da divi�o: "<<modulo;

    return 0;
}
