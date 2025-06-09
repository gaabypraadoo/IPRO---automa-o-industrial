//Gabrielly Prado - Hélio Júnior

#include <iostream>
#include <cstdlib>
#include <locale.h>
#include <ctime> // srand precisa da biblioteca ctime
using namespace std;

int main()
{
    int sorteado = 0, escolhido = 0, tentativas = 0 ; //fun  o
    char novoJogo ;

    setlocale(LC_ALL,"") ;

    srand(time(NULL));// Evita que o número sorteado seja sempre o mesmo a cada execução

    //sorteado = rand() % 30 + 1;// Gera um n mero aleat rio entre 1 e 30

    cout<<"\t\t+************************************************************+\n";
    cout<<"\t\tO JOGO: você é capaz de advinhar o número em até 5 tentativas?\n";
    cout<<"\t\t+************************************************************+\n";

    cin.get();
    system("cls");



    do
    {
        tentativas = 0;
        sorteado = rand() % 45 + 1;

        while(tentativas < 5 && escolhido != sorteado)
        {


            cout<< "\tTentativa " << tentativas + 1<<" de 5";
            cout<<"\t\nDigite um número de 1 a 45: ";
            cin>>escolhido;

            tentativas++; //contador para saber em qual tentativa o jogador se encontra caso n o acerte o número

            if(sorteado > escolhido)
            {
                cout<<"\tPensei em um número MAIOR... "<<endl;
            }
            else if(sorteado < escolhido)
            {
                cout<<"\tPensei em um número MENOR... "<<endl;
            }
            /*else if (sorteado != escolhido)
            {
                cout << "\t\nPoxa... você  usou todas as tentativas :(" << endl;
                cout << "\t\tO número sorteado era: " << sorteado << endl;



            }*/
            else
            {
                cout<<"\t\tPARABÉNS!!!! VOCÊ É MUITO INTELIGENTE :)"<<endl;
                cout<<"O número sorteado foi: "<<sorteado<<endl;
                break;
            }



        }

        if (escolhido != sorteado)
        {
            cout << "\t\nPoxa... você usou todas as tentativas :(" << endl;
            cout << "\t\tO número sorteado era: " << sorteado << endl;
        }

        cout<<"\nDeseja jogar de novo? (S/N)";
        cin>>novoJogo;

        if (novoJogo == 's' || novoJogo == 'S')
        {

            cout << "Ok vamos tentar novamente!" << endl ;
            system("cls");
            tentativas = 0;
            //system("cls");


        }

        else if (novoJogo == 'n' || novoJogo == 'N')
        {
            system("cls");
            cout << "Poxaa... Obrigada por jogar!!! Volte mais tarde :)" << endl;

            break;

        }

    }
    while (novoJogo == 's' || novoJogo == 'S');
}
