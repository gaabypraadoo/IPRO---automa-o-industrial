#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL,"");

    float notaUm, notaDois, notaTres, notaQuatro, media;

    cout<<"Digite a nota um: ";
    cin>>notaUm;
    cout<<"Digite a nota dois: ";
    cin>>notaDois;
    cout<<"Digite a nota tr�s: ";
    cin>>notaTres;
    cout<<"Digite a nota quatro: ";
    cin>>notaQuatro;

    media = (notaUm+notaDois+notaTres+notaQuatro)/4;

    cout<<"\nSua m�dia final �: "<<media;

    if(media>=6){
        cout<<"\n\nVoc� est� aprovado!!! :)\n\n";
    }
    else {
        cout<<"\n\nVoc� est� reprovado!!! :(\n\n";
    }

    return 0;
}
