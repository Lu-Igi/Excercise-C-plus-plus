//Record casuali e ordinamento https://www.youtube.com/watch?v=iHcVO6zm8PQ&t=8s
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

typedef struct Prodotto

{
string nome;
float prezzo;
int codice;
};
    void comunicaProdotto (Prodotto p, int i);/*protoripo della funzione*/
    void bubblesort

    int main()
{

Prodotto prodotti[5];
    string nomi[5]={"uova","farina","zucchero","sale","lievito"};
        int numeroProdotto;
        int estratto;
        int indice;
        int i;

    cout<<"Inserisci numero dei prodotti: "<<endl;
    cin>>numeroProdotto;

    srand (time(NULL));
        for(int i=0;i<numeroProdotto;i++){
//cout<<rand()%10;
        int indice=rand()%5;
        prodotti[i].nome=nomi[indice];
            prodotti[i].prezzo=(rand()%100)*0.3;
                prodotti[i].codice=rand()%10;
                                         }

        for(int i=0;i<numeroProdotto;i++){
            comunicaProdotto(prodotti[i],i+1);
                cout<<"\n \n";
                                         }
return 0;
}
    void comunicaProdotto (Prodotto p, int n)
{
cout<<"Prodotto numero: "<<n<<endl;
    cout<<"Nome prodotto: "<<p.nome<<endl;
        cout<<"Prezzo: "<<p.prezzo<<endl;
            cout<<"Il codice del prodotto e': "<<p.codice<<endl;

}

