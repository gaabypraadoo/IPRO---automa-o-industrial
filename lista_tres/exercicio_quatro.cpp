#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL,"");

    float num;

    cout<<"Digite um número: ";
    cin>>num;

    if(num<0){
        cout<<"\nNúmero negativo -\n";
    }
    else if(num>0){
        cout<<"\nNúmero poitivo +\n";
    }
    else {
        cout<<"\nO número é zer0\n";
    }

    return 0;
}
