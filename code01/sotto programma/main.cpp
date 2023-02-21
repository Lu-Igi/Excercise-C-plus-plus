#include <iostream>
#include <cstdlib>
using namespace std;


void apertura (float & fc, int & dt)
{
cout<<"Inserisci il fondo cassa ";
cin>> fc;
cout<<"Inserisci data ";
cin>> dt;
cout<<"\n";
}
/*void e un tipo di procedura una procedura non può iniziare cun un int o con float formali*/
void cliente(int &n_c, float &tt_sc, int &n_s)
{
float cons;
n_c=0; tt_sc=0; n_s;

cout<<"Per inziare un nuovo scontrino premi 0 "<<endl;
do
/*comparirà a schermo l'importo e in progressivo le consumazioni ogni volta dell'inserimento dei prezzi*/
{
cout<<"Importo "<<n_c+1<<" Consumazione "<<endl;
cin>> cons;
tt_sc=tt_sc+cons;
n_c++;
/*while all'inserimento di 0 cambiamo cliente e scontrino*/
}while(cons!=0);

cout<<"Tot.ale scon.trino progressivo "<<n_s+1<<endl;
n_s++;
cout<<"N.umero cons.umazioni "<<n_c-1<<endl;
/*n_c-1 una volta inserito lo 0 il sisteme calcolerà penultimo importo*/
cout<<"Tot.ale da pagare: "<<tt_sc<<endl;
}

void uscita (float&tg,int&nt,int&pn)
{
cout<<"Incasso totale:  "<<tg<<endl;
cout<<"Numero consumazione vendute "<<nt<<endl;
cout<<"Numero scontrini emessi "<<pn<<endl;
}


int main()
{
//globale
    int data;
    int n_cons=0, n_cons_tot=0, n_scon=0;
    //numero / totale di consumazioni - numero scontrino progressivi
    float fc; /*cons*/;
    //fondo cassa - consumazione0
    float tot_sc=0, tot_gg=0;
    //totale scontrino - totale incasso della giornata
    char fine;
    cout<<"BAR FERMI"<<endl;
/*apertura*/ /*parametri attuali delle variabili dichiarate passabilli al sottoprogramma*/
/*chiamata al sottoprogramma "attuali"*/
do{
apertura(fc,data);
cliente(n_cons,tot_sc,n_scon);
tot_gg=tot_gg+tot_sc;
n_cons_tot=n_cons_tot+n_cons-1;
cout<<"Per terminare digiata "<<'F' <<endl;
cin>>fine;
}while(fine!='F');
uscita (tot_gg,n_cons, n_scon);
/*& e un assegnazione della vaariabile fc data*/
    return 0;
}
