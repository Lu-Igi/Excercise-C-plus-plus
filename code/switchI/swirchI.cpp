#include <iostream>

using namespace std;

int main()
{
int opzioneScelta;

do{
cout << "Scegli un opzione " << endl;
cout << "1-Stampa un numero " << endl;
cout << "2-Programma che stiamo eseguendo " << endl;
cout << "3-Nome del programmatore " << endl;
cout << "4-Link YouTube " << endl;
cout << "5-Chiudi il programma " << endl;
cout << "Scelta: ";
cin>>opzioneScelta;

switch(opzioneScelta)
{
case 1:
  cout << "Numero :" <<25 <<endl; //si potrebbe inserire una data che cambia progressivamente?
  break; //<--PAUSA DAL PROSSIMO CASE

case 2:
  cout << "Switch case " <<endl;
  break;

case 3:
  cout << " Luigi Guernelli nickName LuI-Gi "<<endl;
  break;

case 4:
  cout << "https://www.youtube.com/watch?v=GQX_bP2ejbQ&t=202s " <<endl;
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

// Istruione Switch: si può usare il numero di una variabile e agire in base a quel valore
// Valori predefiniti vengono scelti dal programmatore per il programma e poi usati dall'utente
// I Case posson essere numerati in qualisiasi modo 12 15 14 77 88.
// In questo caso io ho messo I numeri in sequanza Case 1 2 3 4 5.
// Questi valori hanno la loro funzione inserita nell case con cout". . ."
// Il break viene utilizzato per far partire un case alla volta.
// Tranne nel caso 5 che diciamo al programma di terminare con un retourn=0.
// Il default che viene eseguito quando l'utente inserisce un operazione non riconosciuta.
/*Tutte le istruzione possiamo inserirle nel ciclo do while così il programma potrà
riesugire il programma fino all'inseriento del numero di chiusra '5'*/
