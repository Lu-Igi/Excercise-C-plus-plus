/*Primo PRG sulle struct */
#include <iostream>

using namespace std;
struct Aula{
char cognome[40];
char nome [40];
int voto1, voto2;};
/*(i tipi) utilizzeremo type def struct come puntatori*/



int main()
{
/*Aula aul [n] (utilizzato come puntatore)*/
Aula aul[2];
int i;
cout<<"Informazione degli alunni da inserire: \n";
for(i=0;i<2;i++){
    cout << "Cognome: ";
    cin>>aul[i].cognome;
 cout << "Nome: ";
    cin>>aul[i].nome;
 cout << "Voto1: ";
    cin>>aul[i].voto1;
 cout << "Voto2: ";

    cin>>aul[i].voto2;
}
cout<<"Dati inseriti: \n";
for(i=0;i<2;i++)
{
cout<<"Cognome: "<<aul[i].cognome;
cout<<"\n";
cout<<"Nome: "<<aul[i].nome;
cout<<"\n";
cout<<"Voto1: "<<aul[i].voto1;
cout<<"\n";
cout<<"Voto2: "<<aul[i].voto2;
cout<<"\n";
}


    return 0;
}

