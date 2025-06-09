//Gabrielly Prado - H�lio J�nior

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

    srand(time(NULL));// Evita que o n�mero sorteado seja sempre o mesmo a cada execu��o

    //sorteado = rand() % 30 + 1;// Gera um n mero aleat rio entre 1 e 30

    cout<<"\t\t+************************************************************+\n";
    cout<<"\t\tO JOGO: voc� � capaz de advinhar o n�mero em at� 5 tentativas?\n";
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
            cout<<"\t\nDigite um n�mero de 1 a 45: ";
            cin>>escolhido;

            tentativas++; //contador para saber em qual tentativa o jogador se encontra caso n o acerte o n�mero

            if(sorteado > escolhido)
            {
                cout<<"\tPensei em um n�mero MAIOR... "<<endl;
            }
            else if(sorteado < escolhido)
            {
                cout<<"\tPensei em um n�mero MENOR... "<<endl;
            }
            /*else if (sorteado != escolhido)
            {
                cout << "\t\nPoxa... voc�  usou todas as tentativas :(" << endl;
                cout << "\t\tO n�mero sorteado era: " << sorteado << endl;



            }*/
            else
            {
                cout<<"\t\tPARAB�NS!!!! VOC� � MUITO INTELIGENTE :)"<<endl;
                cout<<"O n�mero sorteado foi: "<<sorteado<<endl;
                break;
            }



        }

        if (escolhido != sorteado)
        {
            cout << "\t\nPoxa... voc� usou todas as tentativas :(" << endl;
            cout << "\t\tO n�mero sorteado era: " << sorteado << endl;
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
            cout << "Poxaa... Obrigada por jogar!!! Volte mais tarde: )" << endl;

            break;

        }

    }
    while (novoJogo == 's' || novoJogo == 'S');
}
