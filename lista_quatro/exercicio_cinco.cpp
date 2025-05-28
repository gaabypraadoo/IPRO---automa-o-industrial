#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL,"");

    float media, mediaMin = 6.0;
    string resposta;

    cout<<"Digite sua média: ";
    cin>>media;

    resposta = ((media>=mediaMin) ? "Você pasou :)\n" : "Você não passou :(\n");

    cout<<resposta;

    return 0;
}
