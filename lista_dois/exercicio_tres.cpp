#include <iostream>
#include <iomanip> //para sair apenas uma casa decimal
using namespace std;

int main()
{
    float tempCelsius;
    setlocale(LC_ALL,"");

    cout<<"Qual a temperatura em Celsius? ";
    cin>>tempCelsius;

    float convercaoF = (tempCelsius*1.8f)+32;

    cout << fixed << setprecision(1);

    cout<<"O grau Celsius para Fahrenheit é: "<<convercaoF<<"F";

    return 0;
}
