#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float notaUm, notaDois, notaTres, notaQuatro, nota;
    float pesoUm, pesoDois, pesoTres, pesoQuatro, peso;

    cout<<"Nota Um: ";
    cin>>notaUm;
    cout<<"Peso da nota um: ";
    cin>>pesoUm;

    cout<<"\nNota Dois: ";
    cin>>notaDois;
    cout<<"Peso da nota dois: ";
    cin>>pesoDois;

    cout<<"\nNota Tres: ";
    cin>>notaTres;
    cout<<"Peso da nota tres: ";
    cin>>pesoTres;

    cout<<"\nNota Quatro: ";
    cin>>notaQuatro;
    cout<<"Peso da nota quatro: ";
    cin>>pesoQuatro;

    nota = (notaUm*pesoUm)+(notaDois*pesoDois)+(notaTres*pesoTres)+(notaQuatro*pesoQuatro);
    peso = pesoUm+pesoDois+pesoTres+pesoQuatro;

    cout << fixed << setprecision(2);
    cout<<"\n\nMedia ponderada eh: "<<nota/peso;

    return 0;
}
