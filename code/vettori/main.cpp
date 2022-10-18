#include <iostream>

using namespace std;

int main()
{
int valori[5];
int i;

do{
 cout << "Inserisci il "<<i+1 << "° valore "<< endl;
cin>> valori[i];
i=i+1;
}while(i<5);
//visualizzazione vettore
cout<<"I valori inseriti sono: ";
//12345
for(i=0;i<5;i=i+1)//con i++ crasha
{
cout<<valori[i]<<"  ";
}

//54321
cout<<endl<<"I valori adesso sono al contrario ";

for(i=4;i>=0;i=i-1)
{
cout<<valori[i]<<" ";
}




    return 0;
}
