/**********************************************************
- Autor:     Fabio Augusto Nikaido
- Descri��o: Lista 6 - Exerc�cio 12
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis

    int vetor [5];
    int iSoma = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    cout << "Digite o primeiro n�mero: ";
    cin >> vetor[0];

    cout << "Digite o segundo n�mero: ";
    cin >> vetor[1];

    cout << "Digite o terceiro n�mero: ";
    cin >> vetor[2];

    cout << "Digite o quarto n�mero: ";
    cin >> vetor[3];

    cout << "Digite o quinto n�mero: ";
    cin >> vetor[4];

    cout << "Os n�meros digitados foram: ";


    for(int i=0;i<=4;i++)
    {
        if(i<4)
        {
            cout << vetor[i] << " + ";
        }
        else
        {
            cout << vetor[i];
        }
            iSoma = vetor[i] + iSoma;
    }

    cout << " = " << iSoma << endl;


    return 1;
}
