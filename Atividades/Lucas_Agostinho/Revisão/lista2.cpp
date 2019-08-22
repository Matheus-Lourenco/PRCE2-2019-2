/**********************************************************
- Autor:     Lucas Agostinho de Sousa
- Descri��o: M�dia de nota e sistema de aprova��o
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <string>

using namespace std;

class Estoque
{
public:
    void setNome(string n)
    {
        Nome = n;
    }

    void setQuantidade(int q)
    {
        Quantidade = q;
    }

    void setValor(float v)
    {
        Valor = v;
    }

    string getNome()
    {
        return Nome;
    }

    int getQuantidade()
    {
        return Quantidade;
    }

    float getValor()
    {
        return Valor;
    }

private:
    string Nome;
    int Quantidade;
    float Valor;

};

int main()
{
    ///Declara��o de vari�veis
    Estoque prod;

    string sNome;
    int iQtd = 0;
    float fValor = 0;

    ///Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    ///C�digo do programa
    cout << "Insira o nome do produto: ";
    getline(cin, sNome);

    prod.setNome(sNome);

    cout << "\nINFORMA��ES DO ESTOQUE";
    cout << "\n\nNome do produto: " << prod.getNome() << endl;


    return 0;
}

