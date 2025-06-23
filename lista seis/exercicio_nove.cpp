#include <iostream>
using namespace std;

int main()
{
    int num = 0, maior = 0, menor = 0, parar = -1;

    cout << "Digite um numero: ";
    cin >> num;
    maior = num;
    menor = num;

    while(num != parar)
    {
        if(num != parar) 
        {
            if(num > maior)
            {
                maior = num;
            }
            else if(num < menor)
            {
                menor = num;
            }
        }
        cout << "Digite um numero: ";
        cin >> num;
    }

    cout << "\tMaior numero: " << maior << endl;
    cout << "\tMenor numero: " << menor << endl;-

}
