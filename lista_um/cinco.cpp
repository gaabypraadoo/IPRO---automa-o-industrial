#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float notaUm, notaDois, notaTres;

    cout<<"Nota 1: ";
    cin>>notaUm;
    cout<<"Nota 2: ";
    cin>>notaDois;
    cout<<"Nota 3: ";
    cin>>notaTres;

    float media = (notaUm+notaDois+notaTres)/3.0f;

    cout << fixed << setprecision(2);
    cout<<"\n\nMedia: "<<media;

    return 0;
}
