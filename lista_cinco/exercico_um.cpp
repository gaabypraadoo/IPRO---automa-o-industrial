#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    float valor=0, soma=0, i=0;

    setlocale(LC_ALL, "");

    while(i < 5){
        cout<<"Digite um número: ";
        cin>>valor;

        soma = soma + valor;

        i = i + 1;
    }

    cout<< soma;

    return 0;
}
