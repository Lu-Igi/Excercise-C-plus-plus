#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
cout<<"Funzioni con procedura rand()";
cout<<"\n\n";
srand (time(NULL));
int i,j;
int opzioneScelta;
int numeriDaGenerare=10;
for (i=0;i<numeriDaGenerare;i++) {
for (j=0;j<numeriDaGenerare;j++) {

}}
do{
int numeroGenerato=(rand()%101);

cout << "Scegli un opzione " << endl;
cout<<"\n";
cout << "1-Addizione " << endl;
cout<<"\n";
cout << "2-Sottrazione" << endl;
cout<<"\n";
cout << "3-Moltiplicazione " << endl;
cout<<"\n";
cout << "4-Divisione" << endl;
cout<<"\n";
cout << "5-Chiudi il programma " << endl;
cout<<"\n";
cout << "Scelta: ";
cin>>opzioneScelta;

switch(opzioneScelta)
{
case 1:
  cout << "Addizione :" <<endl; //si potrebbe inserire una data che cambia progressivamente?
  cout<<numeroGenerato<<endl;
  break; //<--PAUSA DAL PROSSIMO CASE

case 2:
  cout << "Sottrazione" <<endl;
  cout<<numeroGenerato<<endl;
  break;

case 3:
  cout << "Moltiplicazione"<<endl;
  cout<<numeroGenerato<<endl;
  break;

case 4:
  cout << "Divisione " <<endl;
  cout<<numeroGenerato<<endl;
  break;


case 5: //Chiusura del programma.
  return 0;
default:
    cout<<"Errore per l'operazione scelta "<<endl;
    break;
}
} while (opzioneScelta !=5);

    return 0;
}
