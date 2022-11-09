#include <iostream>

using namespace std;

int main()
{
int vettore1[10], vettore2[10], vettore3[10];
/*VARIABILI*/
int a, b, c, risultato;
/*a,b,c;.variabile che identifichiamo come indice*/
/*risultato viene utilizzato come variabile di appoggio come contenitore*/
do{
cout<<"Inserisci dei valori compresi tra 1-10" <<endl;
cin>>vettore1[a];

if(vettore1[a]<=5)
{/*In questa istruzione viene fatto il controllo del range*/
risultato=0;
risultato = vettore1[a]*4;
cout<<"Il valore moltiplicato per 4 è " <<risultato<<endl;
vettore2[b]=risultato;
a++;
b++;
}
else if(vettore1[a] >= 6 && vettore1[a] <= 10)
{/*In questa istruzione viene fatto il controllo del range*/
risultato = 0;
risultato = vettore1[a]*3;
cout<<"Il valore moltiplicato per 3 è " << risultato<<endl;
vettore3[c]=risultato;
a++;
c++;
}
/*else-Il caso in cui un valore inserito è superiore al range che vogliamo gestire
darà un mess. di errore*/
else
{
cout<<"Attenzione il valore "<<vettore1[a]<<" non e' accettabile " <<endl;
}
/*L'indice a una doppia funzionalità
1.viene incrementato per non sovrascrivere i valori nel vettore
2.serve per uscire dal while*/

}
/*il while controlla se la condizionde della variabile che identifica l'indice
e minore di 10 in modo da terminare il ciclo do-while*/
while(a<10);

cout<<endl;
cout<<"1° Vettore originale"<<endl;

/*Inseriamo tre cicli for per visualizzare la
posizione dei tre vettori */

for(a=0;a<10;a++)
{
cout<<vettore1[a]<<" ";
}

cout<<endl;
cout<<"2° Vettore che motilica *4"<<endl;

for(b=0;b<10;b++)
{
cout<<vettore2[b]<<" ";
}

cout<<endl;
cout<<"3° Vettore che moltiplica *3"<<endl;

for(c=0;c<10;c++)
{
cout<<vettore3[c]<<" ";
}

cout<<endl;

return 0;
}
