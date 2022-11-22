//Creare un programma che dati due numeri in input ci dica qual'è il grande tra i due
//Itruduzione if (se) (selezione) >> else (altri)>> else if (altrimenti se)
#include <iostream>

using namespace std;

int main()
{
int primoNumero;
int secondoNumero;
    cout << "Inserisci il primo numero: ";
    cin>> primoNumero;

    cout << "Inserisci il secondo numero: ";
    cin>> secondoNumero;
    //cout <<"Hai inserito " << primoNumero << "e" << secondoNumero;


    if (primoNumero > secondoNumero)
   {
    //se la risposta alla domanda e vera
    cout<<"il primo numemero e' maggiore ";
    }
    else if (primoNumero==secondoNumero)
    //altrimenti se
    //24.== il primoN è uguale al secondoN ?
    // Mentre se dovessi scrivere primoN=secondoN oppure =10 stiamo dicendo che queto valore viene ASSEGNATO al primoN
    {
    cout<<"Il primo numero e' uguale al secondo ";
    }


    else //se la risposta è falsa "oppure altri casi?"
    {
    cout<<"Il primo numero e' minore";
    // questo puo' essere inserito escludendo else if "...o uguale rispetto al secondo";
    }
    return 0;
}

    //16.Questa istruzione serve per vedere cos'è stato inserito nella cout a schermo.
    //Adesso si inerisce l'istruzione if per vedere quale dei due p-sNumero sono più grandi p-rimo\s-econdo
    //19.if\se() all'interno si scrive una condizione=domanda da fare al programma
    //19.if\se (domanda) "vera"


    //----->>>RIEPILOGO<<<<------
//else non ha parentesi quando tutte le altre condizioni sono false e
//Non si mette il punto e virgola dopo le condizioni del'if else if xke dopo non funziona
//if si scrive ponendo una condizione o facendo una domanda il primoNUmero e maggiore del secondoNumero?
//Se la risposta e una vera vengono eseguite SOLO le prime istruzioni (20.parentesi graffe dell'if)
//Altrimenti se la condizione if è falsa vengono controllati gli altri else if se anche questi sono falsi vengo controllati direttamentte dell'else-->
//<--
