#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    int media_final = 0;

    setlocale(LC_ALL,"");

    cout<<"Nota final: ";
    cin>>media_final;

    if(media_final >=90){
        cout<<"\nExcelente\n";
    }
    else if(media_final >=70 && media_final <=89){
        cout<<"\nBom\n";
    }
    else if(media_final >=50 && media_final <=69){
        cout<<"\nRegular\n";
    }
    else if(media_final >=30 && media_final <=49){
        cout<<"\nFraco\n";
    }
    else{
        cout<<"\nMuito fraco\n";
    }

    return 0;
}

