#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL,"");

    float media;
    float mediaMin = 6.0;

    cout<<"Digite sua m�dia: ";
    cin>>media;

    if (media<mediaMin){
        cout<<"\nVoc� n�o passou :(\n";
    }
    else{
        cout<<"\nVoc� pasou :)\n";
    }

    return 0;
}
