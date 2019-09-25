#include <iostream>

using namespace std;

    double calculo (double rendaPortfolio, double rendaPassiva, double despesasTotais) {
        int taxaDeRiqueza = (rendaPortfolio + rendaPassiva) / despesasTotais;
        return taxaDeRiqueza;
    };

int main()
{

    double rendaPortfolio = 0.0;
    double rendaPassiva = 0.0;
    double despesasTotais = 0.0;
    int taxaDeRiqueza = {};

    cout << "Digite sua renda de portfólio: " << endl;
    cin >> rendaPortfolio;
    cout << "Digite sua renda passiva: " << endl;
    cin >> rendaPassiva;
    cout << "Digite suas despesas totais (mensais): " << endl;
    cin >> despesasTotais;
    taxaDeRiqueza = calculo(rendaPortfolio, rendaPassiva, despesasTotais);
    cout << "Sua taxa de riqueza é: " << taxaDeRiqueza << endl;
    cout << "A porcentagem é: " << (taxaDeRiqueza * 100) << "%" << endl;
    cout << "É necessário 100% para cobrir gastos mensais e 200% para não corroer patrimônio." << endl;
    return 0;
}
