#include <iostream>
using namespace std;

int main()
{
    int tipoA;
    int tipoB;
    setlocale(LC_ALL,"");
    cout<<"\nBEM-VINDO!"<<endl;

    cout<<"Digite a quatidade de pe�as do tipo A: ";
    cin>>tipoA;
    cout<<"Digite a quatidade de pe�as do tipo B: ";
    cin>>tipoB;

    cout<<"\n\nO total das pe�as �: "<<tipoA+tipoB<<endl;
};
