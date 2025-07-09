#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    int numero[4];
    int par = 0, impar = 0, i = 0;

    setlocale(LC_ALL, "");

    for(i = 0; i < 4; i++)
    {
        cout << "Digite um número: ";
        cin >> numero[i];
        if(numero[i] % 2 == 0)
        {
            par = par + 1;
        }
        else
        {
            impar = impar + 1;
        }
    }

    cout << "Quantidade de pares: " << par << endl;
    cout << "Quantidade de ímpares: " << impar << endl;
}

