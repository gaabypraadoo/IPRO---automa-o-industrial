#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    int idade = 0, maiorIdade = 0, menorIdade = 0, i =0;

    setlocale(LC_ALL, "");

    while(i < 7){
        cout<<"Digite a idade para verificação: ";
        cin>>idade;

        if(idade<18){
            menorIdade = menorIdade + 1;
        }
        else{
            maiorIdade = maiorIdade + 1;
        }

        i++;
    }

    cout<<"Quantidade de pessoas menores de idade: "<<menorIdade<<endl;
    cout<<"Quantidade de pessoas maiores de idade: "<<maiorIdade;

    return 0;
}
