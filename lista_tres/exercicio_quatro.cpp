#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL,"");

    float num;

    cout<<"Digite um n�mero: ";
    cin>>num;

    if(num<0){
        cout<<"\nN�mero negativo -\n";
    }
    else if(num>0){
        cout<<"\nN�mero poitivo +\n";
    }
    else {
        cout<<"\nO n�mero � zer0\n";
    }

    return 0;
}
