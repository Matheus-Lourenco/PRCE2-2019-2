/**********************************************************
- Autor:     Lineu Lima
- Descri��o: Estrutura
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
using namespace std;

struct Cliente
{
    string sNome;
    int iIdade;
    string sCpf;
};


int main()
{
    //Declara��o de vari�veis
    Cliente c1[3] =
    {
        {"Maria",20,"123"},
        {"Ana",20,"123"},
        {"Pedro",20,"123"},
    };
    int i;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    /*
    // imprimindo registros
    for (i = 0; i < 3; i++)
    {
        cout << "Digite o nome do cliente: ";
        cin >> c1[i].sNome;

        cout << "Digite o CPF do cliente: ";
        cin >> c1[i].sCpf;

        cout << "Digite a idade do cliente: ";
        cin >> c1[i].iIdade;
    }
    */

    // busca por palavra
    for (i = 0; i < 3; i++)
    {
        if (c1[i].sNome == "Ana")
        {
            cout << "Digite o nome do cliente: "
                << c1[i].sNome << endl;
            cout << "Digite o CPF do cliente: "
                << c1[i].sCpf << endl;
            cout << "Digite a idade do cliente: "
                << c1[i].iIdade << endl;
        }

    }

    return 0;
}
