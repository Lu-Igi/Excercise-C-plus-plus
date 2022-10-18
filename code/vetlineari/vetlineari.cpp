#include <iostream>

using namespace std;

int main()
{
//
int numeri[20];
int i;
int tasto;
//11.15.numero di valori d'acquisiti
int n;
int esci=0;
do
{
cout<<"Quanti valori vuoi inserire? " <<endl;
cin>>n;
} while(n<2 or n>20);
// il ciclo va eseguito finchè n e minore di due OR n e maggiore di 20
cout<<"Inserisci " <<n <<" valori" <<endl;
for(i=0;i<n;i=i+1)
{
cout<<"inserisici  il " <<i+1 <<" valore"<<endl;
cin>>numeri [i];
}
cout<<"Quale numero vuoi cercare? ";
cin>> tasto;
i=0;
while (i<n && esci==0)
{
if(numeri[i]==tasto)
{
esci=1;
}
else
{
i=i+1;
}
}
if(esci==1)
{
cout<<"Il numero e' stato trovato "<< endl;
}
else
{
cout<<"Il numero non e' stato trovato "<< endl;
}

    return 0;
}



