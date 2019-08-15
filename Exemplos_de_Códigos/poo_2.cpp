/**********************************************************
- Autor:     Lineu Lima
- Descri��o: POO
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
using namespace std;

class Produto
{
public:
    void setNome(string n)
    {
        Nome = n;
    }

    void setValor(double v)
    {
        Valor = v;
    }

    string getNome()
    {
        return Nome;
    }

    double getValor()
    {
        return Valor;
    }

private:
    string Nome;
    double Valor;
};


int main()
{
    //Declara��o de vari�veis

    // p1 � uma inst�ncia da classe Produto
    // p1 � um objeto
    Produto p1;

    string sNome;
    double dValor = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << "Digite o nome do produto: ";
    cin >> sNome;
    p1.setNome(sNome);

    cout << "Digite o valor do produto: ";
    cin >> dValor;
    p1.setValor(dValor);

    cout << "Nome do produto: " << p1.getNome() << endl;
    cout << "Valor do produto: " << p1.getValor() << endl;





    return 0;
}
