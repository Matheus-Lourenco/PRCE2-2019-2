/**********************************************************
- Autor:     Rodrigo Braz de Azevedo
- Descri��o:
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    int iNumero = 1;
    int iTabuada = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    while (iNumero <= 10)
    {
        cout << iNumero << " * " << iTabuada << " = " << iNumero * iTabuada << endl;
        iTabuada++;
        if (iTabuada > 10)
        {
            iNumero++;
            iTabuada = 0;
        }
    }


    return 0;
}
