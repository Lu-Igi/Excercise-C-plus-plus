#include <iostream>

using namespace std;

int main()
{
int vettore[10];
int numero;
int i;
int j;
int contenitore;
cout<<"Quanti elementi vuoi inserire? ";
cin>>numero;
for (i=0;i<numero;i++)
{
cout<<"Inserisci il "<<i+1 <<"° elemento: ";
cin>>vettore[i];
}

for(i=0;i<numero-1;i++)
{
for(j=i+1;j<numero;j++)
{
if(vettore[i]>vettore[j])
{
contenitore=vettore[i];
vettore[i]=vettore[j];
vettore[j]=contenitore;
}
}
}
for(i=0;i<numero;i++)
{
cout<<vettore[i]<<endl;
}

    return 0;
}
