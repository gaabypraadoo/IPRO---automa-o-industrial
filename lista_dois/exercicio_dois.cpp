#include <iostream>
#include <iomanip>  // Para ter sa�da com duas casas decimais
using namespace std;

int main()
{
    float pecaReal;
    int pecaLote;
    setlocale(LC_ALL,"");

    cout << "BEM-VINDO!\n";

    cout << "Digite o valor da pe�a em real: ";
    cin >> pecaReal;

    cout << "Quantas pe�as s�o produzidas em um lote? ";
    cin >> pecaLote;

    float custoBruto = pecaReal * pecaLote;
    float custoOperacional = custoBruto * 0.15f;
    float custoFinal = custoBruto + custoOperacional;

    cout << fixed << setprecision(2);

    cout << "\nTotal bruto do lote: R$ " << custoBruto << endl;
    cout << "Custo operacional (15%): R$ " << custoOperacional << endl;
    cout << "Custo total deste lote: R$ " << custoFinal << endl;

    return 0;
}
