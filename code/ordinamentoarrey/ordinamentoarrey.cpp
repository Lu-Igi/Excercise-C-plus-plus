#include <iostream>

using namespace std;

int main(){//1
int vettore[10];
int numero;
int i;
int j;
int contenitore;
cout<<"Quanti elementi vuoi inserire? ";
cin>>numero;

for(i=0;i<numero;i++){//2
cout<<"Inserisci il "<<i+1<<"° elemento: ";
cin>>vettore[i];
}//2 //Ordinamento per selezione abbiamo u vettore di tot nuemeri che si confroteranno
 //con tutti gli altri elementi scambiandosi le posizio

/*5 6 7 2 3
  2 6 7 5 3
  2 5 7 6 3
  2 3 7 6 5
  2 3 5 7 6
  2 3 5 6 7*/
for(i=0;i<numero-1;i++)
//la-1 andiamo a confrontare il numero successivo che non esiste quindi si fermerà due volte per i una per l j.
{//3
for (j=i+1;j=numero;j++){ //4
if (vettore[i]>vettore[j])
{ //5

contenitore=vettore[i];
vettore[i]=vettore[j];
vettore[j]=contenitore;}
//{//6
//cout<<"Inserisci il "<<i+1<<"elemento: ";
//cin>>vettore[i];
//}//6


}//5
}//4
//3

for (i=0;i<numero;i++){//7
cout<<vettore[i]<<endl;
}//7

    return 0;
}//1

