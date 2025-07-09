#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    int idade[5];
    int maiorIdade = 0, menorIdade = 0;

    setlocale(LC_ALL, "");


    for(int i = 0; i < 5; i++){
        cout << "Digite a idade para verificação: ";
        cin >> idade[i];
        if(idade[i] < 18){
            menorIdade++;
        }
        else{
            maiorIdade++;
        }
    }

    cout << "Quantidade de pessoas menores de idade: " << menorIdade << endl;
    cout << "Quantidade de pessoas maiores de idade: " << maiorIdade << endl;
}
