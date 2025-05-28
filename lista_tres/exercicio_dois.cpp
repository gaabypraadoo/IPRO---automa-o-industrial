#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL,"");

    float media;
    float mediaMin = 6.0;

    cout<<"Digite sua média: ";
    cin>>media;

    if (media<mediaMin){
        cout<<"\nVocê não passou :(\n";
    }
    else{
        cout<<"\nVocê pasou :)\n";
    }

    return 0;
}
