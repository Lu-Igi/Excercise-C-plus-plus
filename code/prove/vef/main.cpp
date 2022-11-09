#include <iostream>

using namespace std;

int main()
{
int gruppo[10], gruppo1[10], gruppo2[10];
int a, b, c, risultato;

do{
cout<<"Inserisci dei valori compresi tra 1-10" <<endl;
cin>>gruppo[a];

if(gruppo[a]<=5)
{
risultato=0;
risultato = gruppo[a]*4;
cout<<"Il valore moltiplicato per 4 è " <<risultato<<endl;
gruppo1[b]=risultato;
b++;
}
else if(gruppo[a] >= 6 && gruppo[a] <= 10)
{
risultato = 0;
risultato = gruppo[a]*3;
cout<<"Il valore moltiplicato per 3 è " << risultato<<endl;
gruppo2[c]=risultato;
c++;
}
else
{
cout<<"Attenzione il valore "<<gruppo[a]<<" non e' accettabile " <<endl;
}
a++;
}
while(a<10);

cout<<endl;
cout<<"Vettore originale 1 "<<endl;

for(a=0;a<10;a++)
{
cout<<gruppo[a]<<" ";
}

cout<<endl;
cout<<"Vettore originale 2"<<endl;

for(b=0;b<10;b++)
{
cout<<gruppo1[b]<<" ";
}

cout<<endl;
cout<<"Vettore originale 3"<<endl;

for(c=0;c<10;c++)
{
cout<<gruppo2[c]<<" ";
}

cout<<endl;

return 0;
}
