#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    float valor[5];
    float soma=0;
    int i=0;

    setlocale(LC_ALL, "");

    for(i=0; i < 5; i++){
        cout<<"Digite um número: ";
        cin>>valor[i];

        soma = soma + valor[i];

    }

    cout<< "\nSoma: "<<soma<<endl;
}
