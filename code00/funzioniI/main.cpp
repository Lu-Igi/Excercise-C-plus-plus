#include <iostream>

using namespace std;
int somma (int a,int b);
int main()
{

    int risultato=somma (10,5);

    int primoNumero=20;
    int secondoNumero=30;
    int secondoRisultato=somma(primoNumero,secondoNumero);
    cout << "La somma e': " <<risultato << endl;
    cout << "La somma e': " <<secondoRisultato << endl;
    return 0;
}
//Funzioni
int somma (int a, int b)
{

int risultato;
risultato=a+b;
return risultato;
}



/*PROVA CON LA SOMMA CHE SI MODIFICA*/
using namespace std;
int somma (int a,int b);
int main()
{

    int risultato=somma (10,5);

    int primoNumero=20;
    int secondoNumero=30;
    int secondoRisultato=somma(primoNumero,secondoNumero);
    cout << "La somma e': " <<risultato << endl;
    cout << "La somma e': " <<secondoRisultato << endl;
    return 0;
}

int somma (int a, int b)
{

int risultato;
risultato=a+b;
return risultato;
}

