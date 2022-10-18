#include <iostream>

using namespace std;

int main()

{//1 Variabili
int i, n_pro_gg, n_somm_gg;
float prezzo [20], tot_scon, tot_gg;
char fg;

cout << "Scontrino Luigi market" << endl;
do{//1.1
    i=0; tot_scon=0;

    do{//1.2 Prima parte del ciclo
    cout<<"Importo "<<i+1 <<" prodotto (digita 0 per chiudere )" <<endl;
    cin>> prezzo[i];
    tot_scon=tot_scon+prezzo[i];
    i++;
    }while (prezzo[i-1]!=0);//1.2
    //Il cassiere per chiudere lo scomtrino devo digitare 0.
    cout<<"Lo scontrino totale e' " <<tot_scon <<endl;
    tot_gg=tot_gg+tot_scon;
    n_pro_gg=n_pro_gg+i-1;
    //for(i=0;i<prezzo[i];i++) Questo ciclo levandolo dal commento fa una ripetizione del cout
    {
    cout <<"Il totale della giornata e' " <<tot_gg<<endl;
    cout <<"Il totale dei prodotti e' " <<n_pro_gg<<endl;
    }

    cout<<"Per terminare digita 'X' ";
    cin>>fg;



}while (fg!='X');  //1.1

return 0;
}
