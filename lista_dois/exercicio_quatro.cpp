#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int numUm;
    int numDois;
    int numTres;

    cout<<"Digite o numero um: ";
    cin>>numUm;
    cout<<"Digite o numero dois: ";
    cin>>numDois;
    cout<<"Digite o numero tres: ";
    cin>>numTres;

    int soma = numUm+numDois+numTres;
    int produto = numUm*numDois*numTres;
    float media = soma/3.0f;
    cout << fixed << setprecision(1);

    cout<<"\nA soma dos tres numeros e: "<<soma;
    cout<<"\nO produto dos tres numeros e: "<<produto;
    cout<<"\nA media dos tres numeros e: "<<media;

    return 0;
}
