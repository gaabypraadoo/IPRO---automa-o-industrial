#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL,"");

    int idade, idadeMin = 18;
    string resposta;

    cout<<"Qual � a sua idade? ";
    cin>>idade;

    resposta = ((idade>=idadeMin) ? "Voc� pode dirigir :)\n" : "Voc� n�o pode dirigir :(\n");

    cout<<resposta;

    return 0;
}
