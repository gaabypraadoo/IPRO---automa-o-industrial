#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    int numero=0, i=0, par=0, impar=0;

    setlocale(LC_ALL, "");

    while(i < 4){
        cout<<"Digite um número: ";
        cin>>numero;

        if(numero %2 == 0){
            par = par + 1;
        }
        else{
            impar = impar + 1;
        }

        i += 1;
        //i++;
        //i = i + 1;
    }

    cout<<"Quantidade de pares: "<< par<< endl;
    cout<<"Quantidade de ímpares: "<<impar;

    return 0;

}
