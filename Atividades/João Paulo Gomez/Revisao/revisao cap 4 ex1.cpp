/**********************************************************
- Autor:     Jo�o Paulo dos Santos Gomez
- Descri��o: Cap 4. Revis�o
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    float fNota1;
    float fNota2;
    float fNota3;
    float fNota4;
    float fMedia;


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout<<"Digite a nota da primeira prova:";
    cin>>fNota1;

    cout<<"Digite a nota da segunda prova:";
    cin>>fNota2;

    cout<<"Digite a nota da terceira prova:";
    cin>>fNota3;

    cout<<"Digite a nota da quarta prova:";
    cin>>fNota4;

    fMedia=(fNota1+fNota2+fNota3+fNota4)/4;
    cout<<"Sua m�dia �:"<<fMedia<<endl;

    if(fMedia>=7){
    cout<<"Parab�ns, voc� foi aprovado!";
}
    else {
    cout<<"Voc� foi reprovado.";
    }



    return 0;
}
