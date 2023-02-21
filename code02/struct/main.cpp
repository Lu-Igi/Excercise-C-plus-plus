#include <iostream>

using namespace std;

struct Prodotto
{
char nome [20];
float prezzo;
int codice;
};

int main()
{
  Prodotto prod;
  cout<<"Quale prodotto vuoi inserire: ";
    cin>>prod.nome;
        prod.prezzo=10.5f;
            prod.codice=0;

  cout<<"Nome: "<<prod.nome<<endl;
    cout<<"Prezzo: "<<prod.prezzo<<endl;
        cout<<"Codice: "<<prod.codice<<endl;

return
}
