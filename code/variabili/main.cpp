#include <iostream>

using namespace std;

int main()
{
 //VARIABILI
    int primoNumero;
    int secondoNumero;
    int somma;

    cout << "Inserisci il primo numero: ";
    cin >> primoNumero;
    //cout << endl <<"Hai inserito il numero: " << primoNumero;
    //14.19.Questa istruzione puoi vedere cos'è stato inserito nella cout a schermo

    cout << endl << "Inserisci il secondo numero: ";
    cin >> secondoNumero;
    //cout << endl <<"Hai inserito il numero: " <<secondoNumero;

    somma = primoNumero + secondoNumero;
    cout <<endl  << "La somma tra i due numeri inseriti equivale a: " <<somma ;


    return 0;
}

//dobbiamo far inserire all'utente due numeri



//Come si utilizza una variabile
/* Obbiettivo:
Realizzare un programma che faccia la somma tra due numeri e ne stampi il risultato*/
//Creiamo una variabile che utilizza num. Interi scrivendo int
/* Annotazzione camelCase:
la prima lettera è la varibile,verrà scritta in minuscolo dalla seconda in poi si inizia con la lettera Maiuscola*/
/*Istruzioni:
cout<< Per visualizzare le variabili a schermo
 cin >> varibile:"primoNumero"; permette di far inserire il numero all'utente*/
