#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL,"");

    int idade, idadeMin = 18;
    string resposta;

    cout<<"Qual é a sua idade? ";
    cin>>idade;

    resposta = ((idade>=idadeMin) ? "Você pode dirigir :)\n" : "Você não pode dirigir :(\n");

    cout<<resposta;

    return 0;
}
