#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL,"");

    float media, mediaMin = 6.0;
    string resposta;

    cout<<"Digite sua m�dia: ";
    cin>>media;

    resposta = ((media>=mediaMin) ? "Voc� pasou :)\n" : "Voc� n�o passou :(\n");

    cout<<resposta;

    return 0;
}
