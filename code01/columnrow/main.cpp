#include<iostream>
using namespace std;
int main ()
{
//int n;
int a[5][5],i,j;
int stamp;
cout<<"Prg C++: Matrice (5x5) che in output faccia la somma delle righe e colonne."<<endl;
cout<<"\n";
//cin>>a[i][j];

//inserimento matrice
    for (i=0;i<5;i++) {
        for (j=0;j<5;j++) {
            cout<<"matrici["<<i<<"]["<<j<<"]= ";
                cin>>a[i][j]; }}

//stampa matrice
    cout<<endl;
        for (i=0;i<5;i++) {
            for (j=0;j<5;j++) {
                cout<<a[i][j]<<"  "; }
                    cout<<endl; }

//stampa della somma di ogni riga
    for (i=0;i<5;i++) {
        stamp=0;
            for (j=0;j<5;j++) {
                stamp=stamp+a[i][j]; }
                    cout<<"somma riga "<<i<<" = "<<stamp<<endl; }
                        cout<<endl;

//stampa della somma di ogni colonna
    for (i=0;i<5;i++) {
        stamp=0;
            for (j=0;j<5;j++) {
                stamp=stamp+a[j][i]; }
                    cout<<"somma colonna "<<i<<" = "<<stamp<<endl; }
    return (0); }


