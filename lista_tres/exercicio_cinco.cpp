#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL,"");

    int num;

    cout<<"Digite um n�mero: ";
    cin>>num;

    if(num %2==0){
        cout<<"\nN�mero par\n";
    }
    else {
        cout<<"\nN�mero �mpar\n";
    }

    return 0;
}
