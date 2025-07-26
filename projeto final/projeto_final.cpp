#include <iostream>
#include <locale.h>
#include <ctime>
using namespace std;

struct Usuario;
void organizando(const Usuario& admin, const Usuario& novo);
void menuPrincipal(const Usuario& admin, const Usuario& novo);
void avisoBloqueio(const Usuario& admin, const Usuario& novo);
Usuario usuarioNovo();
void entrar(const Usuario& admin, const Usuario& novo);

struct Usuario
{
    string nome;
    string senha;
};

void menuPrincipal(const Usuario& admin, const Usuario& novo)
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
            organizando(admin, novo);
            break;
        case 2:
        {
            entrar(admin, novo);
            break;
        }
        default:
            cout << "Opção inválida!" << endl;
    }


}

void avisoBloqueio(const Usuario& admin, const Usuario& novo)
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
            entrar(admin, novo);
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

Usuario usuarioNovo()
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
        usuario.nome += numeros[rand() % numeros.size()];
    }
    for(int i = 0; i < tamanhoSenha; i++)
    {
        usuario.senha += caracteres[rand() % caracteres.size()];
    }

    cout << "\nNovo usuario gerado: " << usuario.nome << endl;
    cout << "Nova senha gerada: " << usuario.senha << endl;
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
        cout<<"\t+-------+"<<endl;
        cout<<"\t+ LOGIN +"<<endl;
        cout<<"\t+-------+"<<endl;
        cout << "\tUSUÁRIO: ";
        cin >> usuarioPrincipal;
        cout << "\tSENHA: ";
        cin >> senhaPrincipal;

        if (usuarioPrincipal == "admin" && senhaPrincipal == "ad125" )
        {
            cout << "\n\n";
            menuPrincipal(admin, novo);
            break;
        }
        else if(usuarioPrincipal == novo.nome && senhaPrincipal == novo.senha)
        {
            cout << "\n\n";
            menuPrincipal(admin, novo);
            break;
        }
        else
        {
            tentativas++;
            if (tentativas == 3)
            {
                cout << "\n\n";
                avisoBloqueio(admin, novo);
            }
            else
            {
                cout << "\n\tUSUÁRIO OU SENHA INVÁLIDOS!!! Você só tem mais " << (3 - tentativas) << "\n\n";
            }
        }
    }
}

void organizando(const Usuario& admin, const Usuario& novo)
{
    int i, materiais = 0, opcao = 0;
    string nome;
    int quantidade[1000];
    string material[1000];

    cout<<"\t\nNome do projeto: ";
    cin.ignore();
    getline(cin, nome);
    cout<<"\t\nQuantos materiais serão usados? ";
    cin>>materiais;

    for(i=0;i<materiais;i++)
    {
        cout<<"Material "<<i+1<<": ";
        cin.ignore();
        getline(cin, material[i]);
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
        organizando(admin, novo);
    }
    else
    {
        menuPrincipal(admin, novo);
    }

}

int main()
{
    Usuario admin;
    admin.nome = "admin";
    admin.senha = "ad125";

    string gerente = {"gerente"}, senhaGerente = {"ger3nt3"};
    int escolha = 0;

    //setlocale(LC_ALL,"");

    cout<<"\t+---------------------+"<<endl;
    cout<<"\t+ ESCOLHA SEU USUÁRIO +"<<endl;
    cout<<"\t+---------------------+"<<endl<<endl;
    cout << "\t1 - Login como admin padrao" << endl;
    cout << "\t2 - Criar novo usuario e senha" << endl;
    cout << "\tEscolha: ";
    cin >> escolha;

    Usuario novo;
    Usuario vazio = {"", ""};

    switch(escolha)
    {
        case 1:
            entrar(admin, vazio);
            break;
        case 2:
        {
            novo = usuarioNovo();
            cout << "\n\nNovo usuário e senha criados com sucesso!" << endl;
            entrar(admin, novo);
            break;
        }
        default:
            cout << "Opção inválida!" << endl;
    }
}
