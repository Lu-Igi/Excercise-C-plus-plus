//L'utilizzo del Floar e Cast
// È un esempio non vanno inseriti tutti gli int dipende da come si vuol scrivere il programma
#include <iostream>

using namespace std;

int main()
{
int numero;
float numeroConLaVirgola;
/*char carattere;
string parola; QUESTE SONO ALTRI TIPI DI VARIABILI*/
numeroConLaVirgola=4.7;
numeroConLaVirgola=10.2;
    cout << (numeroConLaVirgola+numeroConLaVirgola) <<"\n";


//Inseriamo delle variabili int in sequenza con un valore già predefinito-->
int numeroUno=5; //numeri interi
int numeroDue=5;
int numeroTre=5;
int numeroQuattro=6;
//Vogliamo calcolare la media di queste variabili già inserite che andiamo a sommare e dividerlo per il tot varibili inserite
float media =/*((float)*/ (numeroUno+numeroDue+numeroTre+numeroQuattro)/*castin)*/ / 4.0;
//possiamo fare un casting ((float)(numeroUno+...)) / 4 oppure inserire la media e mettere /4.0 o altri numeri dipnde dal caso;

//Per rimediare d alcuni problemi del float possiamo inserire un altro metodo
media=(media*10)/10;


if((int)media==5)
cout<<"Media: " <<media<<"\n";
    return 0;
}

/*il float si usano numeri con la virgola
Per inizializzarlo possiamo inserire noi un numero
variabili float non si usa quando si usano cifre con i calcoli scientifii*/
