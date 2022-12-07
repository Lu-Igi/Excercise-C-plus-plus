/*Le funziono in un linguaggio di programmazione sono pezzi di codice
utilizzati per richiamare il nome di quella funzioen or un sottoprogramma*/


#include <iostream>

using namespace std;
int somma(int a,int b){

int risultato;
risultato= a+b;
return risultato;

}


//funzione main esguita in automatica all'interno di se stessa
int main()
{
    cout << "La somma e': " <<somma(10,5) <<endl;
    return 0;
}
