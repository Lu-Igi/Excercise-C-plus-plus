#include <iostream>
using namespace std;
//https://youtu.be/8yLZbQLs4N4
//https:www.youtube.com/@LabsquareIT
/*IL PROGRAMMA È SIMILE A QUELLO DELLA SPIEGAZIONE NEL VIDEO CON AGGIUNTA DI QUALCHE COMMENTO A MIA INTERPRETAZIONE E CON MODIFICHE NEL CODICE*/
/*REALIZZAZIONE DI UN MENU DI SCELTA*/

void menu ();

void menu (){
cout << "Calcoli matematici by Lu-Igi "<<endl;
cout << "Scegli un opzione " << endl;
cout << "1-Somma " << endl;
cout << "2-Sottrazione " << endl;
cout << "3-Moltiplicazione " << endl;
cout << "4-Divisione" << endl;
cout << "5-Chiudi il programma " << endl;
}

int main(){
int a,b;
int somma, sottrazione, moltiplicazione, divisione;
/*con char si utilizza il singolo apice ''*/
char scelta;
do{

menu();

cout<<"Inserisci un opzioneScelta tra [1-5].------> ";
cin>>scelta;

/*inserendo il tipo char con variabile scelta si mette nel metodo
per far funzionare il case si scrivera'--->case'1' [...]*/
switch(scelta){

case '1':
    cout<< "Inserisci primo valore: "<< endl;
    cin>>a;
    cout<< "inserisci secondo valore: "<<endl;
    cin>>b;
    somma=a+b;
    cout<<"Il risultato e': "<<somma <<endl;
    //INTERVALLO--->system("pause");
    break; //<--PAUSA DAL PROSSIMO CASE

case '2':
    cout<< "inserisci primo valore "<< endl;
    cin>>a;
    cout<< "inserisci secondo valore "<<endl;
    cin>>b;
    sottrazione=a-b;
    cout<<"Il risultato e' "<<sottrazione<<endl;

  break;

case '3':
    cout<< "inserisci primo valore "<< endl;
    cin>>a;
    cout<< "inserisci secondo valore "<<endl;
    cin>>b;
    moltiplicazione=a*b;
    cout<<"Il risultato e' "<<moltiplicazione<<endl;

  break;

case '4':
    cout<< "inserisci primo valore "<< endl;
    cin>>a;
    cout << "inserisci secondo valore "<<endl;
    cin>>b;
    divisione=a/b;
    cout<<"Il risultato e' "<<divisione<<endl;
  break;


case '5': //Chiusura del programma.
    cout<<"Fine "<<endl;
    return 0;
    default:
    cout<<"Errore per l'operazione scelta "<<endl;
    break;
}
}while(scelta!=5);
    return 0;
}
