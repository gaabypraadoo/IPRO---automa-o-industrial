#include <iostream>
#include <locale.h>
#include <iomanip>
using namespace std;

int main()
{
    char codigoVenda;
    int i = 0;
    float valorVenda = 0, somaVista = 0, somaPrazo = 0, soma = 0;

    setlocale(LC_ALL, "");

    while(i < 5){
        cout<<"Código da venda: ";
        cin>>codigoVenda;
        cout<<"Valor da venda: R$ ";
        cin>>valorVenda;

        if(codigoVenda == 'v' || codigoVenda == 'V'){
            somaVista = somaVista + valorVenda;
        }
        else if(codigoVenda == 'p' || codigoVenda == 'P'){
            somaPrazo = somaPrazo + valorVenda;
        }

        soma = soma + valorVenda;
        //soma += valorVenda;
        i++;
    }
    cout << fixed << setprecision(2);
    cout<<"\nTotal de vendas a vista: R$ "<<somaVista<<endl;
    cout<<"Total de vendas a prazo: R$ "<<somaPrazo<<endl;
    cout<<"Total de vendas: R$ "<<soma<<endl;
    cout<<"Valor da primeira parcela, de três, de vendas a prazo: R$ "<<somaPrazo / 3<<endl;


    return 0;
}
