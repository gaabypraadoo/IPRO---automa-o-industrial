#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL,"");

    int idade;
    int idadeMin = 18;

    cout<<"Qual é a sua idade? ";
    cin>>idade;

    if (idade<idadeMin)
    {
        cout<<"\nVocê não pode dirigir!\n";
    }
    else
    {
        cout<<"\nVocê pode dirigir!\n";
    }

    return 0;
}
