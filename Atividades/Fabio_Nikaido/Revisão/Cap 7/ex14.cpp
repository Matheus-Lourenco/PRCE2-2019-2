/**********************************************************
- Autor:     Fabio Augusto Nikaido
- Descri��o: Lista 7 - Exerc�cio 14
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis

    int matriz[2] [3];
    int i = 0;
    int j = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    while (i <= 1 && j <= 2)
    {
        cout << "Digite o n�mero que corresponda a posi��o desejada na matriz: ";
        cin >> matriz [i] [j];

        cout << endl;

        if(i==0)
        {
            j++;

            if(j==3)
            {
                j=0;
                i=1;
            }
        }

        else if(i==1)
        {
            j++;

            if(j==3)
            {
                j=0;
                i=2;
            }
        }

    }

    i=0;
    j=0;

    cout << "Os n�meros que n�o pertencem ao intervalo [5,15] s�o: ";

    while(i <= 1 && j <= 2)
    {



        if(matriz [i] [j] > 15 || matriz [i] [j] <5)
        {
            cout << matriz [i] [j] << " ";
        }


        if(i==0)
        {
            j++;

            if(j==3)
            {
                j=0;
                i=1;
            }
        }

        else if(i==1)
        {
            j++;

            if(j==3)
            {
                j=0;
                i=2;
            }
        }

    }


    return 1;
}
