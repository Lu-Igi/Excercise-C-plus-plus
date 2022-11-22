/*Il programma dovrà:
1)Richiedere i valori all'utente uno dopo l'atro con dei messaggi
2)A partire dal secondo valore consentire di terminare il processo di acquisizione.
3)Al termine dell'acquisizione dei valori comunicare il numero dei valori immessi, riproporre tutti i valori digitali, comunicare
il valore calcolato della media aritmetica. */


#include <iostream>

using namespace std;

int main()
{
int vet [100],i,x; //somma come variabile int non mi permette di calcolare la media
float somma,media;/*1°.soluzione e il cast media=((float)somma+i)/x
                    2°.soluzione ho spostato somma nel float e da la media con (5 + 4 = 4.5 esempio) */
char risposta;
i=0;
cout<< "Inserisci il 1° valore " <<"\n";
cin >>vet[i];
somma=vet[i];
i++;

do
{
cout<< "Inserisci il " <<i+1 <<"° valore " <<"\n";
cin >>vet [i];
somma=somma+vet[i];
i++;
cout<< "Per terminare digita 'X' " <<"\n";
cin >>risposta;

}while (risposta!='X');

media=somma/i;
cout<<"La media calcola: "<< media << "\n";
x=i; // assegnazione del valore i

for(i=0;i<x;i++) // Possiamo visualizzare a schermo quali valori abbiamo inserito
{
cout<<" Il "<<i+1<<" valore "<< vet[i] <<"\n";
}

return 0;
}

/*Variabili
1.vet: Il vettore viene utilizzato con una [dimensione]
inserendo un tot numero di elementi in questo caso 100.

2.Somma: calcolerà le varibili intere, con un valore inizale uguale a zero.
3.i: contatore indice per il ciclo for
4.x: un valore inserito da tastiera.
-------------------------------------------------------------------------------
Variabili
2.float: la utiliziamo per il calcolo della media
media= somma /(diviso)  gli elementi [inseritiDall'Utente] i

3Char (Carattere): lo utilizziamo per determinare la chiusura all'inserimento
del secondo valore all'interno del ciclo do-while
scrivendo che con la condizione di'X' Maiuscola terminaremo il programma
*/

/*
Ciclo
(do-Esegui)(al suo interno viene inserita l'istruzione che verrà ripetuta in base alla condizone)
(while-Mentre) (La condizione ciclerà finchè l'struzione inserita darà un risultato 'vero' al contrario 'falso' il ciclo terminerà)

for:serve per far girare le istruzioni un tot di volte già prestabilite
contatore condizione incremento
i=0 i<x i++
*/
