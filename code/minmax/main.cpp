//#include <iostream>
#include <time.h>
#include <iostream>
#define VT 10
using namespace std;

int main()
{//1

//int vettore[50], max,min,i,numero,a,b;
srand(unsigned (time(NULL)));
int vettore [VT];
//int i; //inserire i oppure no non cambia

cout << "Valore minimo e valore massimo di un vettore" << endl;
    for(int i=0;i<VT;i++)
    {//2
    vettore [i]=rand()%100;
    cout<<vettore[i]<<endl;
    }//2
//Ricerca del minimo
int min=vettore[0];
for(int i=1;i<VT;i++)
{//3
if(min>vettore[i])/*(continue;)*/
{//4
min=vettore [i];

}//4
}//3
int max=vettore[0];
for(int i=1;i<VT;i++)
{//5
if(max<vettore[i])
{
max=vettore[i];
}

}//5
cout<<"Il numero minore del vettore e' "<<min <<"\n";
cout<<"Il numero maggiore del vettore  e' "<<max <<"\n";


  return 0;
}//1
