#include <iostream>
using namespace std;

int main()
{
    int soma = 0, num = 1;

    cout<<"NUMEROS IMPARES DE 1 A 20"<<endl;
    while(num <= 20)
    {
        if(num %2 != 0)
        {
            cout<<num<<endl;
            soma = soma + num;
        }
        num++;
    }
    cout<<"\n\n\tTotal da soma: "<<soma<<endl;

}
