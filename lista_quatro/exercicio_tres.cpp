#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL,"");

    int opcao;
    float celsius = 0, fahrenheit = 0, metros = 0, kiloMetros = 0;

    cout<<"=============== MENU ===============\n";
    cout<<"1. Converter Celsius para Fahrenheit\n";
    cout<<"2. Converter Fahrenheit para Celsius\n";
    cout<<"3. Converter Km para Metros\n";
    cout<<"4. Converter Metros para Km\n";
    cout<<"====================================\n";

    cout<<"Escolha uma op��o: ";
    cin>>opcao;

    switch(opcao)
    {
    case 1:
        cout<<"Digite o grau em Celsius: ";
        cin>>celsius;

        cout<<"Convers�o em Fahrenheit: "<<(9*celsius/5)+32<<endl;
    break;
    case 2:
        cout<<"Digite o grau em Fahrenheit: ";
        cin>>fahrenheit;

        cout<<"Convers�o em Celsius: "<<5*(fahrenheit-32)/9<<endl;
    break;
    case 3:
        cout<<"Digite a quantidade de Km: ";
        cin>>kiloMetros;

        cout<<"Convers�o para Metro: "<<kiloMetros*1000<<endl;
    break;
    case 4:
        cout<<"Digite a quantidade de Metros: ";
        cin>>metros;

        cout<<"Convers�o para Km: "<<metros/1000<<endl;
    break;
    default:
        cout<<"Valor inv�lido!!!";
    }

    return 0;
}
