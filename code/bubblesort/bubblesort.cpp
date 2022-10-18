/*Abbiamo un vettore di 5 elementi che verrà scambiato dall'ultimo
al minore e fanno uno scambio
5 9 2 3 1<-Partendo dall'uno                1 5 3 2 9<-Ordinamento
5 9 2 1 3<-Continuiamo con l'uno            1 3 5 2 9
5 9 1 2 3                                   1 3 2 5 9
5 1 9 2 3                                   1 2 3 5 9
1 5 9 2 3                                               */

#include <iostream>

using namespace std;
void bublesort (int vettore[],int n)
//int main()
{
int temporaneo;
int i;
int limite;
int ultimoScambio;
int scambio;

limite=0;
do
{
scambio=0;
for(i=n-1;i<limite;i--)
{
if (vettore[i]<vettore[i-1])
{
temporaneo=vettore[i];
vettore[i]=vettore[i-1];
vettore[i-1]=temporaneo;
scambio=1;
ultimoScambio=i;
}
}
limite=ultimoScambio;

}while(scambio !=0);
//Finchè ci sono scambi.

int main()
{
int index
int vettore [10];
int numeri=5;
for (index=0;index<numeri;index++)
{
cout<<"inserisci i numeri "<<numeri;
cin>>vettore[index];
}
bubblesort (vettore,numeri);
return 0;

}
}
/*{
int vettore[10];
int temporaneo;
int n;
int i;
int limite;
int ultimoScambio;
int scambio;
cout<<"Quanti  nunumeri? ";
cin>> n;
for (i=0;i<n;i++)
{
cin>>vettore[i];
cout<<endl;
}

limite=0;
do
{
scambio=0;
for(i=n-1;i<limite;i--)
{
if (vettore[i]<vettore[i-1])
{
temporaneo=vettore[i];
vettore[i]=vettore[i-1];
vettore[i-1]=temporaneo;
scambio=1;
ultimoScambio=i;
}
}
limite=ultimoScambio;

}while(scambio !=0);
//Finchè ci sono scambi.

for(i=0;i<n;i++)
{
cout<<vettore[i]<<endl;
}







return 0;
}*/
