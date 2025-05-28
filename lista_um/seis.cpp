#include <iostream>
using namespace std;

int main()
{
    float base, altura;

    cout<<"Base: ";
    cin>>base;

    cout<<"Altura: ";
    cin>>altura;

    float area = base*altura;
    float perimetro = 2*(base+altura);

    cout<<"\n\nArea: "<<area<<endl;
    cout<<"Perimetro: "<<perimetro;

    return 0;
}
