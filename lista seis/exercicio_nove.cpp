#include <iostream>
using namespace std;

int main()
{
    int num = 0, maior = 0, menor = 0;

    while(num != -1)
    {
        cout<<"Digite um numero: ";
        cin>>num;
        if(num > maior)
        {
            maior = num;
        }
        else if(num < menor)
        {
            menor = num;
        }
    }
    num++;

    cout<<"\n\n\tMaior numero: "<<maior<<endl;
    cout<<"\n\n\tMenor numero: "<<menor<<endl;

}
