#include <iostream>
#include <locale.h>
#include <ctime>
using namespace std;

void menuPrincipal()
{
    int organizar = 0;

    cout<<"\t+-----------------------------------------+"<<endl;
    cout<<"\t+ Vamos organizar o materiais do projeto? +"<<endl;
    cout<<"\t+-----------------------------------------+"<<endl;
    cout << "\t1 - Cadastrar materiais do projeto" << endl;
    cout << "\t2 - Sair" << endl;
    cout << "\tEscolha: ";
    cin>>organizar;

    switch(organizar)
    {
        case 1:
            organizando();
        case 2:
        {
            cout << "\nATÉ A PRÓXIMA... :)" << endl;
            break;
        }
        default:
            cout << "Opção inválida!" << endl;
    }


}

string avisoBloqueio()
{
    cout<<"\t+***************************+"<<endl;
    cout<<"\t+ AVISO: sistema bloqueado, +"<<endl;
    cout<<"\t+     chame seu Gerente     +"<<endl;
    cout<<"\t+***************************+"<<endl;

    string gerente, senhaGerente, entrar();
    int desbloqueio = 0;

    while (desbloqueio < 1)
    {
        cout << "\tGERENTE: ";
        cin >> gerente;
        cout << "\tSENHA: ";
        cin >> senhaGerente;

        if (gerente == "gerente" && senhaGerente == "ger3nt3")
        {
            cout << "\n\n";
            entrar();
            break;
        }
        else
        {
            desbloqueio++;
            if (desbloqueio == 1)
            {
                cout << "\n\tSISTEMA BLOQUEADO!!!";
            }
        }
    }

}

string novoUsuario()
{
    string nome, usuario;
    const int qtdNumeros = 4;
    string numeros = "0123456789";

    cout << "Digite o nome para o novo usuario: ";
    cin >> nome;

    usuario = nome;

    srand(time(0)); // inicializa o gerador aleatório

    for(int i = 0; i < qtdNumeros; i++)
    {
        usuario += numeros[rand() % numeros.size()];
    }

    cout << "\nNovo usuario gerado: " << usuario << endl;
    return usuario;
}

string novaSenha()
{
    string senha;
    const int tamanhoSenha = 6;
    string caracteres = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    srand(time(0)); // inicializa o gerador aleatório

    for(int i = 0; i < tamanhoSenha; i++)
    {
        senha += caracteres[rand() % caracteres.size()];
    }

    cout << "Nova senha gerada: " << senha << endl;
    return senha;
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

void organizando()
{
    int i, quantidade = 0, materiais = 0;
    string nome, material;

    cout<<"\t\nNome do projeto: ";
    cin>>nome;
    cout<<"\t\nQuantos materiais serão usados? ";
    cin>>materiais;

    for(i=0;i<materiais;i++)
    {
        cout<<"Material: ";
        cin>>material[i];
        cout<<"Quantidade: ";
        cin>>quantidade[i];
    }

    cout<<"\t+******************************+"<<endl;
    cout<<"\t+ LISTA COMPLETA DOS MATERIAIS +"<<endl;
    cout<<"\t+******************************+"<<endl;

    cout<<nome<<endl;


}

int main()
{
    int i = 0, escolha = 0;
    string usuarioPrincipal = {"admin"}, senhaPrincipal = {"ad125"}, gerente = {"gerente"}, senhaGerente = {"ger3nt3"}, usuario, senha, usuarioNovo [5], senhaNova [5];

    setlocale(LC_ALL,"") ;

    cin.get();

    cout<<"\t+--------------------+"<<endl;
    cout<<"\t+ ESCOLHA SEU USUÁRIO +"<<endl;
    cout<<"\t+--------------------+"<<endl<<endl;
    cout << "\t1 - Login como admin padrao" << endl;
    cout << "\t2 - Criar novo usuario e senha" << endl;
    cout << "\tEscolha: ";
    cin >> escolha;


    switch(escolha)
    {
        case 1:
            entrar();
            break;
        case 2:
        {
            usuario = novoUsuario();
            senha = novaSenha();
            cout << "\nNovo usuário e senha criados com sucesso!" << endl;
            cout << "USUÁRIO: " << usuario << endl;
            cout << "SENHA: " << senha << endl;
            break;
        }
        default:
            cout << "Opção inválida!" << endl;
    }
}
