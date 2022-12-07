/*un programma che da 4 opzioni su 5
valori che mostri a schermo le operazioni matematiche*/
//all'interno di ogni metodo la varibile sono locali main or void


#include <iostream>
//#include <cstdlib>

using namespace std;
//variabili globali inserite nei tipi "int +-*!" e "float /"
//s
int ris;
//cambio il nome della variabile per non mandarle in conflitto tra loro
//ex:(float ris:: conflict declared float ris)
float risflo;

//(void:addizione = tipo metodo e firma)
void addizione(int &a, int &b)
{
 cout<<"Inserisci il primo valore \n";
 cin>>a;
 cout<<"Inserisci il secondo valore\n";
 cin>>b;
 ris=a+b;
 cout<<"\nIl risultato dell'addizione: " <<ris;
}

void sottrazione(int &a, int &b)
{
 cout<<"Inserisci il primo valore: \n";
 cin>>a;
 cout<<"Inserisci il secondo valore: \n";
 cin>>b;
 ris=a-b;
  cout << "\n Il risultato della sottrazione e':  "<<ris;
}
void moltiplicazione(int &a, int &b)
{
 cout<<"Inserisci il primo valore: \n";
 cin>>a;
 cout<<"Inserisci il secondo valore: \n";
 cin>>b;
 ris=a*b;
 cout << "\n Il risultato della moltiplicazione e':  "<<ris;
}
void divisione(float &c, float &d)
{
 cout<<"Inserisci il primo valore: \n";
 cin>>c;
 cout<<"Inserisci il secondo valore: \n";
 cin>>d;
 ris=c/d;
   cout << "\n Il risultato della divisione e':  "<<risflo;
}

int main()
{
//addizione,sottrazione,moltiplicazione
int a, b;
//solo per la divisione
float c,d;
//variabile scelta per lo switch
int scelta;

do{
    cout<< "\nDigita uno dei numeri tra (1-5) per eseguire l'operazione scelta \n";
    cout<< "\n1- Per l'addizione\n";
    cout<< "\n2- Per la sottrazione\n";
    cout<< "\n3- Per la moltiplicazione\n";
    cout<< "\n4- Per la divisione\n";
    cout<< "\n5-Chiudi il programma\n";
    cout<< "\nFAI LA TUA SCELTA BASTA CHE CLICCHI ------> ";
    cin>>scelta;

    switch(scelta)
{

case 1:
addizione(a,b);
  break; //<--PAUSA DAL PROSSIMO CASE
  //all'interno non ho inserito i cout che sono riportati nel "do while"
  //ex:addizione(a,b) richiamo del metodo e firma

case 2:
sottrazione(a,b);
  break;

case 3:
 moltiplicazione(a,b);
  break;

case 4:
divisione(c,d);
  break;

case 5:
return 0;
default:
  cout << "\n Errore per l'operazzione scelta" ;
  break;

}
  }while (scelta !=5);

 return 0;
}
