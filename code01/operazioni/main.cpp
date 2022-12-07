/*un programma che da 4 opzioni su 5
valori che mostri a schermo le operazioni matematiche*/
#include <iostream>
#include <cstdlib>
using namespace std;
void addizione (int &a, int &b, int &ris);
void sottrazione (int &a, int &b, int &ris);
void moltiplicazione (int &a, int &b, int &ris);
void divisione (float &a, float &b, float &ris);


int main()
{
int a, b;
int scelta,risultato;
int addizione,sottrazione,moltiplicazione;
float divisione;

    cout << "\n Digita uno dei numeri tra (1-5) per eseguire l'operazione scelta \n";

do{
//addizione=risultato;
    cout<< "\n1- Per l'addizione\n "<<risultato;
    cout<< "\n2- Per la sottrazione\n "<<risultato;
    cout<< "\n3- Per la moltiplicazione\n "<<risultato;
    cout<< "\n4- Per la divisione\n "<<risultato;
    cout<<"\n5-Chiudi il programma";
    cin>>scelta;

    switch(scelta)
{
case 1:

cout<<"\n Il risulato dell'addizione  " <<risultato;

  break; //<--PAUSA DAL PROSSIMO CASE

case 2:
  cout << "\n Il risultato della sottrazione e'  "<<risultato;;
  break;

case 3:
  cout << "\n Il risultato della moltiplicazione e'  "<<risultato;;
  break;

case 4:
  cout << "\n Il risultato della divisione e'  "<<risultato;;
  break;

case 5:
return 0;
default:
  cout << "\n Errore per l'operazzione scelta";
  break;

}
}while (scelta !=5);

return risultato;
}
