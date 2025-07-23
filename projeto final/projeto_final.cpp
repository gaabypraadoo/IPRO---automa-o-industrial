#include <iostream>
#include <locale.h>
#include <ctime>
using namespace std;

void organizando();
void menuPrincipal();
void avisoBloqueio();
string novoUsuario();
string novaSenha();
void entrar();

struct Usuario
{
    string nome;
    string senha;
};

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
            break;
        case 2:
        {
            entrar();
            break;
        }
        default:
            cout << "Opção inválida!" << endl;
    }


}

void avisoBloqueio()
{
    cout<<"\t+***************************+"<<endl;
    cout<<"\t+ AVISO: sistema bloqueado, +"<<endl;
    cout<<"\t+     chame seu Gerente     +"<<endl;
    cout<<"\t+***************************+"<<endl;

    string gerente, senhaGerente;
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

Usuario novoUsuario()
{
    Usuario usuario;
    string nome;
    string senhaNova;
    const int qtdNumeros = 4;
    const int tamanhoSenha = 6;
    string numeros = "0123456789";
    string caracteres = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    cout << "Digite o nome para o novo usuario: ";
    cin >> usuario.nome;

    srand(time(0)); // inicializa o gerador aleatório

    for(int i = 0; i < qtdNumeros; i++)
    {
        usuarioNovo += numeros[rand() % numeros.size()];
    }
    for(int i = 0; i < tamanhoSenha; i++)
    {
        senhaNova += caracteres[rand() % caracteres.size()];
    }

    cout << "\nNovo usuario gerado: " << usuario.nome << endl;
    cout << "Nova senha gerada: " << senha.nome << endl;
    return usuario;
}

/*string novaSenha()
{
    string senhaNova;
    const int tamanhoSenha = 6;
    string caracteres = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    srand(time(0)); // inicializa o gerador aleatório

    for(int i = 0; i < tamanhoSenha; i++)
    {
        senhaNova += caracteres[rand() % caracteres.size()];
    }

    cout << "Nova senha gerada: " << senhaNova << endl;
    return senhaNova;
}*/

void entrar(const Usuario& admin, const Usuario& novo)
{
    string usuarioPrincipal, senhaPrincipal;
    int tentativas = 0;

    while (tentativas < 3)
    {
        cout<<endl;
        cout<<endl;
        cout << "\tUSUÁRIO: ";
        cin >> usuarioPrincipal;
        cout << "\tSENHA: ";
        cin >> senhaPrincipal;

        if (usuarioPrincipal == "admin" && senhaPrincipal == "ad125" )
        {
            cout << "\n\n";
            menuPrincipal();
            break;
        }
        else if(usuarioPrincipal == novo.nome && senhaPrincipal == novo.senha)
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
    int i, materiais = 0, opcao = 0;
    string nome;
    int quantidade[1000];
    string material[1000];

    cout<<"\t\nNome do projeto: ";
    cin>>nome;
    cout<<"\t\nQuantos materiais serão usados? ";
    cin>>materiais;

    for(i=0;i<materiais;i++)
    {
        cout<<"Material "<<i+1<<": ";
        cin>>material[i];
        cout<<"Quantidade: ";
        cin>>quantidade[i];
    }

    cout<<"\t+******************************+"<<endl;
    cout<<"\t+ LISTA COMPLETA DOS MATERIAIS +"<<endl;
    cout<<"\t+******************************+"<<endl;

    cout<<nome<<endl;

    for(i = 0; i < materiais; i++)
    {
        cout << "- " << material[i] << ": " << quantidade[i] << endl;
    }
    cout << "\t\nPrecisa cadastrar mais algum projeto?" << endl;
    cout <<"\t1 - Sim"<<endl;
    cout<<"\t2 - Voltar ao menu"<<endl;
    cout<<"\t\nDigite sua escolha: ";
    cin >> opcao;

    if(opcao == 1)
    {
        organizando();
    }
    else
    {
        menuPrincipal();
    }

}

int main()
{
    Usuario admin;
    string usuarioPrincipal = {"admin"};
    string senhaPrincipal = {"ad125"};

    string gerente = {"gerente"}, senhaGerente = {"ger3nt3"};
    int escolha = 0;

    setlocale(LC_ALL,"");

    cin.get();

    cout<<"\t+---------------------+"<<endl;
    cout<<"\t+ ESCOLHA SEU USUÁRIO +"<<endl;
    cout<<"\t+---------------------+"<<endl<<endl;
    cout << "\t1 - Login como admin padrao" << endl;
    cout << "\t2 - Criar novo usuario e senha" << endl;
    cout << "\tEscolha: ";
    cin >> escolha;


    switch(escolha)
    {
        case 1:
            entrar(admin, vazio);
            break;
        case 2:
        {
            usuarioNovo = novoUsuario();
            senhaNova = novaSenha();
            cout << "\n\nNovo usuário e senha criados com sucesso!" << endl;
            entrar(admin, novo);
            break;
        }
        default:
            cout << "Opção inválida!" << endl;
    }
}
