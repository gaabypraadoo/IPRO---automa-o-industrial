#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL,"");

    int idade;

    cout<<"Digite sua idade: ";
    cin>>idade;

    if (idade>=16){
        cout<<"\nVoc� pode votar!\n";
    }
    else {
        cout<<"\nVoc� n�o pode votar!\n";
    }

    return 0;
}
