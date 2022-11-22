#include <iostream>

using namespace std;
//Funzioni
int somma (int a, int b)
{
/*la variabile dichiarata nell'int somma' esiste
solo in questa prima parte del programma*/
int risultato;
risultato=a+b;
return risultato;
}

int main()
{
/*Questa funzione esiste solo nell'int main
Richiamando la varibie somma inserendo il suo nome e dandogli
dei parametri per eseguirla
Si possono inserire altre varibili */
    int risultato=somma (10,5);
    int secondoRisultato =somma (20,30);
    cout << "La somma e': " <<risultato << endl;
    cout << "La somma e': " <<secondoRisultato << endl;
    return 0;
}

/*scrivendo le funzioni in questo caso una volta per riutilizzarle
devo scrivere il nome della funzione sola e mandare i parametri giusti*/
//Funzione si anche in matematica ad esempio y=f(x)
//per inserire piu funzioni vanno scritte al disopra del main
