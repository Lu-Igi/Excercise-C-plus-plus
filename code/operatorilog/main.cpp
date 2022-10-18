//OPERATORI LOGICI AND,OR,NOT
/*Servono a unire più condizioni tra loro usando
L'algebra Booleana controllando piu di due condizioni siano
vere o false*/

#include <iostream>

using namespace std;

int main()

{

int numero=10;
if (numero>5)
//AND &&
//Se il risultato della 1-2 condizione e' vera allora tutta la parentesi sarà vera
if((numero>5)&&(numero<15))
{
cout<< "il numero deve essere compreso tra 5 e 15 "<<endl;
}
//OR controlla almeno una condizione se è vera
if((numero>5)||(numero<15))
{
cout<< "il numero è maggiore di 5 o minore di 15 "<<endl;
}
/*NOT ! Inverte le condizioni se una vera diventa falsa
*/ e viceversa
if (numero!=0)
{
cout<< "Numero diverso da 0 "<<endl;
}
return 0;
}












