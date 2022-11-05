#include <iostream>

using namespace std;

int main()
{//1
 int a;
 int vettore[21];
cout<<"Inserisci 20 numeri compresi tra 1 e 10"<<endl ;
//apriamo il ciclo for facendo partire il primo valore da uno
for(a=1;a<21;a++)
{//2
cin>>vettore[a];
if(vettore[a]>=1 && vettore[a]<=10)
{//3
cout<<"Acquisito il valore " <<vettore[a] << " nella posizione "<<a <<endl ;
if(vettore[a]<5)
{//4
cout<<"Moltiplica per 3 i valori compresi tra 1 - 4 " <<endl <<"il valore del vettore e' "<<vettore[a]*3 <<endl;
}//4
else if(vettore[a]>=5 && vettore[a]<=8)
{//5
	cout<<"Addizione di 2 dei valori compresi tra 5 - 8 " << endl <<"il valore del vettore e' "<<vettore[a]+2<<endl;
}//5

else if(vettore[a]>=9 && vettore[a]<=10)
{//6
	cout<<"Moltiplica per 6 dei valori compresi tra 9 - 10 " << endl <<"il valore del vettore e' "<<vettore[a]*6<<endl;
}//6

}//3
else 
{//7valore inserito nel vettore
cout<<"Attenzione il valore "<<vettore[a] <<" non e' accettabile, deve essere compreso tra 1 - 10 " <<endl ;
a--; 
}//7	
}//2

    return 0;
}//1














/*#include <iostream>

using namespace std;

int main()
{
 int a,b=0,c=0,d=0,e=0,f=0;
 int vettore[21];

cout<<"Inserisci 20 numeri compresi tra 1 e 10"<<endl ;

for(a=1;a<21;a++)
{
cin>>vettore[a];
if(vettore[a]>=1 && vettore[a]<=10)
{
cout<<"Acquisito il valore " <<vettore[a] << " nella posizione "<<a <<endl ;	
}
else if(vettore[a].find())
{
cout<<"Attenzione il valore "<<vettore[a] <<" non e' accettabile, deve essere un valore compreso tra 1 e 10 " <<endl ;
a--;
vettore[a];
}
	
}
    return 0;
}
*/
