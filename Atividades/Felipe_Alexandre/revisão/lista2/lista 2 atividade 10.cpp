#include <iostream>
#include<cstdlib>
#include<stdio.h>
using namespace std;
class Produto
{
public:
    void setfPreco()
    {
        cout<<"Digite o valor do produto: R$";
        scanf("%f",&fPreco);
    }
    void setfPeso()
    {
        cout<<"Digite o peso do produto( em quilo gramas): ";
        scanf("%f",&fPeso);


    }
    float operacao()
    {

        fResult=fPeso*fPreco;
        return (fResult);
    }
    void exibirDados()
    {
        cout<<"Dados do produto:\n";
        cout<<"Peso: "<<fPeso<<endl;
        cout<<"Pre�o: R$"<<fPreco<<endl;
        cout<<"Valor do produto(pro�oxpeso): "<<fResult<<endl;
    }
private:
    float fPeso;
    float fPreco;
    float fResult;
};
int main()
{
    setlocale(LC_ALL,"");
    Produto p1;
    p1.setfPreco();
    p1.setfPeso();
    p1.operacao();
    p1.exibirDados();
    return 0;

}
 /**observa��o*****************************************
 utlizando o scanf o programa aceita colocar virgua ao env�s de ponto nas variaveis,
 com cin ele aceita ponto ao env�z de virgula.
 ******************************************************/
