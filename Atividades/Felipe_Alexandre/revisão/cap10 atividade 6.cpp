/**********************************************************
- Autor:     Felipe Alexandre
 cap 10 atividade 6
 Descri��o:
**********************************************************/

#include<iostream>
#include<stdio.h>
#include<cstdlib>

struct client
{
    int Numcli[4];
    int Numcont[4];
    int Numtel[4];
    char lug[80];
    float saldo[4];
    int Numad=0;

};
int main()
{
    using namespace std;
    setlocale(LC_ALL,"");
    client ficha;
    char choi='0';
    string nome[4];
     cout<<"Benvindo ao sistema de cadastro:\nDeseja adicionar cadastro?(s/n)"<<endl;
     cin>>choi;
     switch(choi)
     {
     case 's':
        cout<<"Digite os seguintes dados:\nQuantos clientes a serem adicionados:";
        cin>>ficha.Numad;
        for(int i=0;i<ficha.Numad;i++)
        {
        cout<<"N�mero do clinete:";
        cin>>ficha.Numcli[i];
        for(int p=0;p<4;p++){if(ficha.Numcli[i]==ficha.Numcli[p]&& i!=p){cout<<"Clinet j� cadastrado."<<endl;}}
        cout<<"N�mero da conta:";
        cin>>ficha.Numcont[i];
        cout<<"Nome do cliente:";
        cin>>nome[i];
        cout<<"Telefone para contato:";
        cin>>ficha.Numtel[i];
        cout<<"Saldo:";
        cin>>ficha.saldo[i];
        cout<<"Endere�o:";
        cin>>ficha.lug[i];
        }
        break;
        case 'S':
        cout<<"Digite os seguintes dados:\nQuantos clientes a serem adicionados:(a capacidade do sistema � de 4 clientes)";
        cin>>ficha.Numad;
        for(int i=0;i<ficha.Numad;i++)
        {
        cout<<"N�mero do clinete:";
        cin>>ficha.Numcli[i];
        for(int p=0;p<4;p++){if(ficha.Numcli[i]==ficha.Numcli[p]&& i!=p){cout<<"Clinet j� cadastrado."<<endl;}}
        cout<<"N�mero da conta:";
        cin>>ficha.Numcont[i];
        cout<<"Nome do cliente:";
        cin>>nome[i];
        cout<<"Telefone para contato:";
        cin>>ficha.Numtel[i];
        cout<<"Saldo:";
        cin>>ficha.saldo[i];
        cout<<"Endere�o:";
        cin>>ficha.lug[i];
        }
        break;
        case 'n':
        cout<<"Obrigado por utilizar nosso sistema:";
        break;
        case 'N':
        cout<<"Obrigado por utilizar nosso sistema:";
        break;


        }
        cout<<"Deseja mostrar as contas cadastradas(s/n):";
        cin>>choi;
        switch(choi)
        {
        case 's':
         for(int i=0;i<4;i++)
        {
        if(ficha.Numcli!=0)
        {
        cout<<"N�mero do clinete: "<<ficha.Numcli[i]<<endl;
        cout<<"N�mero da conta:"<<ficha.Numcont[i];
        cout<<"Nome do cliente:"<<nome[i];
        cout<<"Telefone para contato:"<<ficha.Numtel[i];
        cout<<"Saldo:"<<ficha.saldo[i];
        cout<<"Endere�o:"<<ficha.lug[i];

        }

        }//final do for
         break;
        }
}
