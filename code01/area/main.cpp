#include <iostream>
#include <cstdlib>
using namespace std;

void areaR (int &al, int &ba)
{
int area;
cout<<"Inserisci l'altezza ";
cin>>al;
cout<<"Inserisci la base ";
cin>>ba;
area=al*ba;
cout<<"\n L'area del rettangolo e' "<<area;

}

int main()
{
int altezza,base;
areaR (altezza,base);

    return 0;
}
