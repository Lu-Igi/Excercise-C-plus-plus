#include <iostream>
//do=esegui while=mentre
using namespace std;

int main()
{
    int contatore=0;

    do{//istruzione da ripetere
        cout<<"Ripetuto per la " <<contatore +1 <<"° volta\e " <<endl;
        contatore=contatore+1;

        }while(contatore<10); //(condizione)



    return 0;
}

//che cos'è un ciclo?
//un ciclo è un istruzione che permette di ripetere un altro gruppo di istruzioni fino a quando una condizione è vera.
//Se vogliammo far partire il contatore da 1 invece di 0 inserendo al punto 11. (...+1) che è temporaneo


//Abbiamo delle istruzioni che sicuramente verranno eseguite almeno una volta perchè non c'è nessun controllo 9.all'inizio
//a ben si alla 13.fine quindi si avvia c'è l'incrmento 11. e siccome la condizione ha che fare con contatore 11.
//Quando questa condizione è falsa non vengono più ripetute
//Quando invece risulterà vere si ritornerà alla prima istruzione del cout inserita nelle graffe 10.
