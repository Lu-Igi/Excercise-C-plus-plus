#include <iostream>

using namespace std;

int main() {
int vet [10], somma=0, i;
float media;
cout<< "Il programma calcola l'eta media di dieci studenti ";
for(i=0;i<10;i++){
cout <<"Inserisci il " <<i+1 <<"numero ";
cin >>vet[i];
}
for (i=0;i<10;i++){
somma=somma+vet[i];
}
cout<<" La somma dell'eta dei studenti e " <<somma;
media=somma/10.0;
//media=somma/2 o i valori che sono stai inseriti
cout <<" La media dell'età degli studenti e " << media;

for (i=0;i<10;i++)
{
cout <<" I dati inseriti all'interno de vettore sono " <<vet [i];
}
return 0;
}

