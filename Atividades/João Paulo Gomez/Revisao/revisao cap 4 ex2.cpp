/**********************************************************
- Autor:     Jo�o Paulo dos Santos Gomez
- Descri��o: Cap 4 revisao ex 3
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
float fNum1;
float fNum2;
float fSub;


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout<<"Digite o primeiro n�mero:";
    cin>>fNum1;

    cout<<"Digite o segundo n�mero:";
    cin>>fNum2;

    fSub=fNum1-fNum2;

    if(fSub<0){
    cout<<"O menor n�mero � o "<<fNum1;
    }
    else if(fSub>0){
    cout<<"O menor n�mero � o "<<fNum2;
    }
    else
    cout<<"Os n�meros s�o iguais!";




    return 0;
}
