#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL,"");

    int idade;
    int idadeMin = 18;

    cout<<"Qual � a sua idade? ";
    cin>>idade;

    if (idade<idadeMin)
    {
        cout<<"\nVoc� n�o pode dirigir!\n";
    }
    else
    {
        cout<<"\nVoc� pode dirigir!\n";
    }

    return 0;
}
