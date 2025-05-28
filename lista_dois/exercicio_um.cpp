#include <iostream>
using namespace std;

int main()
{
    int tipoA;
    int tipoB;
    setlocale(LC_ALL,"");
    cout<<"\nBEM-VINDO!"<<endl;

    cout<<"Digite a quatidade de peças do tipo A: ";
    cin>>tipoA;
    cout<<"Digite a quatidade de peças do tipo B: ";
    cin>>tipoB;

    cout<<"\n\nO total das peças é: "<<tipoA+tipoB<<endl;
};
