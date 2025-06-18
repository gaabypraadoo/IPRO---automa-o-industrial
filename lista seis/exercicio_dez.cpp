#include <iostream>
using namespace std;

int main()
{
    int num = 0, quadrado = 0, i = 1;

    cout<<"Digite um numero: ";
    cin>>num;

    while(i <= num)
    {
        quadrado = i * i;
        i++;
        cout<<"\t"<<quadrado<<endl;
    }
}
