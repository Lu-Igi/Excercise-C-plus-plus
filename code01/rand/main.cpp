#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void addizione (int&add)
{
cout<<"L'addizione del numero genrato è: ";
cin>>add;
cout<<
}
void sottrazione (int&sott)
{
cout<<"La sottrazione del numero genrato è: ";
cin>>sott;
}
void moltiplicazione (int&mol)
{
cout<<"La moltiplicazione del numero genrato è: ";
cin>>mol;
}
void divisione (float&div)
{
cout<<"La divisione del numero genrato è: ";
cin>>div;

int numeroGenerato=(rand()%101);
int opzioneScelta;
do{
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

default:
    cout<<"Errore per l'operazione scelta "<<endl;
    break;
}
} while (opzioneScelta !=5);

}

int main()
{
int add, sott, mol;
float div;
int contatore=0;
cout<<"Funzioni con procedura rand()";
cout<<"\n\n";
srand (time(NULL));
int i,j;

int numeriDaGenerare=10;
for (i=0;i<numeriDaGenerare;i++) {
for (j=0;j<numeriDaGenerare;j++) {

}}

do{addizione(add);
sottrazione(sott);
moltiplicazione(mol);
divisione(div);
contatore=contatore+1;
}while(contatore<10);

    return 0;
}
