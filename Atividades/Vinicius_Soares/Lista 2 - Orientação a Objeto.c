/**********************************************************
- Autor:     Vinicius Soares
- Descri��o: Lista 2 - Orienta��o a objeto
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
using namespace std;


struct Estoque
{
public:
    void setNome (string n) //m�todo setNome
    {
        Nome = n;
    }
    void setQuantidade (float q)
    {
      Quantidade = q;
    }
    void setValor (float v)
    {
      Valor = v;
    }
    string getNome ()
    {
      return Nome;
    }
    float getQuantidade ()
    {
      return Quantidade;
    }
    float getValor ()
    {
      return Valor;
    }
    private:
    string Nome; //atributo nome
    float Quantidade; //atributo quantidade
    float Valor; //atributo valor
};
int main()
{
  Estoque e1;

  string sNome;
  float fQuantidade;
  float fValor;

  setlocale(LC_ALL,"");
  system("color F1");


  {
    cout << "Informe o nome do produto: " << endl;
    cin >> sNome;
    e1.setNome(sNome);

    do
    {
      cout << "Informe a quantidade do produto: " << endl;
      cin >> fQuantidade;
      e1.setQuantidade (fQuantidade);
      if (fQuantidade <= 0)
      {
      cout << "Valor inv�lido. Digite um n�mero maior que 0" << endl;
      }
      else
      {}
    } while (fQuantidade <= 0);
    do
    {
      cout << "Informe o valor do produto: " << endl;
      cin >> fValor;
      e1.setValor (fValor);
      if (fQuantidade <= 0)
      {
      cout << "Valor inv�lido. Digite um n�mero maior que 0" << endl;
      }
      else
      {}
    } while (fValor <= 0);
  }

    {
        cout << "\n\n\nDados do produto:" << endl;

        cout << "Nome: " << e1.getNome() << endl;
        cout << "Quantidade: " << e1.getQuantidade() << endl;
        cout << "Valor: " << e1.getValor() << endl;
    }


}
