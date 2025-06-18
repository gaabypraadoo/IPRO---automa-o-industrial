#include <iostream>
using namespace std;

int main()
{
    int num = 0, soma = 0;

    while(num != -1){
        cout<<"Digite um numero: ";
        cin>>num;
        if(num != -1){
        soma = soma + num;
        num++;
        }
    }

    cout<<"\n\n\tTotal da soma: "<<soma<<endl;
}
