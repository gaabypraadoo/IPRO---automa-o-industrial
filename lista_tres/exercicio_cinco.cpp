#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL,"");

    int num;

    cout<<"Digite um número: ";
    cin>>num;

    if(num %2==0){
        cout<<"\nNúmero par\n";
    }
    else {
        cout<<"\nNúmero ímpar\n";
    }

    return 0;
}
