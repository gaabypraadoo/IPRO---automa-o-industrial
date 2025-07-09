#include <iostream>
#include <locale.h>
#include <ctime>
using namespace std;

void menuPrincipal()
{
    cout<<"\t+----------------------------------+"<<endl;
    cout<<"\t+ Bem-Vindo ao Sistema Naughty Dog +"<<endl;
    cout<<"\t+----------------------------------+"<<endl;

    //colocar um siwcht e escolha: 1 realizar operação e 2 sair do sitmea
}

void avisoBloqueio()
{
    cout<<"\t+***************************+"<<endl;
    cout<<"\t+ AVISO: sistema bloqueado, +"<<endl;
    cout<<"\t+     chame seu Gerente     +"<<endl;
    cout<<"\t+***************************+"<<endl;
}

string novoUsuario()
{

}

string novaSenha()
{

}

string entrar()
{
    string usuarioPrincipal, senhaPrincipal;
    int tentativas = 0;

    while (tentativas < 3)
    {
        cout << "\tUSUÁRIO: ";
        cin >> usuarioPrincipal;
        cout << "\tSENHA: ";
        cin >> senhaPrincipal;

        if (usuarioPrincipal == "admin" && senhaPrincipal == "ad125")
        {
            cout << "\n\n";
            menuPrincipal();
            break;
        }
        else
        {
            tentativas++;
            if (tentativas == 3)
            {
                cout << "\n\n";
                avisoBloqueio();
            }
            else
            {
                cout << "\n\tUSUÁRIO OU SENHA INVÁLIDOS!!! Você só tem mais " << (3 - tentativas) << "\n\n";
            }
        }
    }
}

int main()
{
    int i = 0;
    string usuarioPrincipal = {"admin"}, senhaPrincipal = {"ad125"}, usuarioNovo [5], senhaNova [5];

    setlocale(LC_ALL,"") ;

    cin.get();

    //fazer um menu de escolha onde: 1 é para o admin ja existente e o 2 é para criar um novo admin

    cout<<"\t+--------------------+"<<endl;
    cout<<"\t+ ESCOLHA SEU USUÁRIO +"<<endl;
    cout<<"\t+--------------------+"<<endl;



    string resultado = entrar();

}
