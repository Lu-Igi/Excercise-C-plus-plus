#include <iostream>

using namespace std;

int main()
{
//Calcolare media ore lezioni settimanali
int numerOreLezioniLunedi=4;
int numerOreLezioniMartedi=3;
int numerOreLezioniMercoledi=3;
int numerOreLezioniGiovedi=3;
int numerOreLezioniVenedi=5;
int numerOreLezioniSabato=0;
int numerOreLezioniDomenica=0;

int numeroGiorniSettimana=7;
//cin>> numerOreLezioniLunedi . . .
//Primo caso:Per inserirlo a mano dovrei inserire un cin per ogni numerOre della settimana

int giorniDellaSettimana [numeroGiorniSettimana];//modifichiamo la variabiele inserendo [numeroGiorniSettimana] [7];
/*giorniDellaSettimana [0]=4;
giorniDellaSettimana [1]=3;
giorniDellaSettimana [2]=3;
giorniDellaSettimana [3]=3;
giorniDellaSettimana [4]=5;
giorniDellaSettimana [5]=0;
giorniDellaSettimana [6]=0;*/

//Secondo caso utilizzando il ciclo for e i vettori
for(int i=0; i<7; i++){
cout<<"Quante ore nel " <<(i+1) <<"° giorno della settimana? ";
cin>> giorniDellaSettimana[i];
}

int sommaTotaleOre=0;

for(int i=0; i<7; i++){
sommaTotaleOre=sommaTotaleOre+giorniDellaSettimana[i];
//la [i] è un numero che va da 0 a 6 "selezionando" il numero indice automaticamente
}
float media= (float(sommaTotaleOre)) /  numeroGiorniSettimana;




    cout << "Calcolo medio delle lezioni " <<media << endl;
    return 0;
}





//Vettore o in Inglese Arrey
