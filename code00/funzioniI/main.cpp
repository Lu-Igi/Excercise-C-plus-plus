/*Le funziono in un linguaggio di programmazione sono pezzi di codice
utilizzati per richiamare il nome di quella funzioen or un sottoprogramma*/
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
//Funzioni //due funzioni distinte
//funzione main esguita in automatica all'interno di se stessa
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
/*passaggio per valore sono i parametri già inseriti nella funzione, per riferimento  nvece di passare il valore si passa la cella di memoria
modificando quello che ce nella (cella) &davanit alle variabiòo*/
