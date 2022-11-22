//Prova Switch
#include <iostream>

using namespace std;
int a;
int b;
int somma;
int main()

{
do
{
cout<<"inserisci il numero: ";
cin>>a;
}
while (a<0 or a>5);
do
{
cout<<"Inserisci il numero: ";
cin>>b;
}
while (b<0 or b>5);
somma=a+b;

switch(somma)
{
case 6:
cout<<"la somma e' 6 ";
break;
case 10:
cout<<"la somma e' 10 ";
break;

default:
cout<<"la somma non e' ne' 6 ne' 10";
}
    return 0;
}
