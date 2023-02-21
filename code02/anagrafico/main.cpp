#include <iostream>

using namespace std;
typedef struct Aula
    {
char cognome[40];
char nome[40];
//char sezione[3];
char indirizzoStudente[40];
float votoIta, votoSto, votoIng, votoMat, votoInfo, votoSis, votoTpsi, votoTlc;
float media;
/*assegnando il valore zero alla varibile avremo il progressivo dell'ID CON <<i+1*/
int id=0;
};


    int main()
    /*Qui ha inizio l'inserimento da parte dell'utente*/
{
Aula aul[5];
int i;
int numeroStud;

/*numeroStudenti per classe da mettere come variabile nel ciclo for*/
cout<<"PRG C++ -Archivio anagrafico di uno/a studente.\n \n";
cout<<"Numero di studenti da inserire: ";
cin>>numeroStud;
        /*il ciclo while(1) permette di ciclare il prg senza fine*/
       //while (1) {
       for(i=0;i<numeroStud;i++){
            /*progressivo dell'id 01.02 etc*/
            cout<<"\nLo/a studente avrà come matricola l'ID: "<<aul[i].id<<i+1;
            cout<<"\n \n";

            /*cout<<"\nInserire la classe e sezione: ";
            cin>>aul[i].sezione;
            cout<<"\n";*/

                cout << "Cognome: ";
                cin>>aul[i].cognome;
                cout<<"\n";

                    cout << "Nome: ";
                    cin>>aul[i].nome;
                    cout<<"\n";

                        cout << "Indirizzo della residenza: ";
                        cin>>aul[i].indirizzoStudente;
                        cout<<"\n";

                            cout<<"Voti per materia dello/a studende: "<<aul[i].cognome <<" " <<aul[i].nome;
                            cout<<"\n \n";

                                cout << "Voto di Italiano: ";
                                cin>>aul[i].votoIta;
                                cout<<"\n";

                                    cout << "Voto di Storia: ";
                                    cin>>aul[i].votoSto;
                                    cout<<"\n";

                                        cout << "Voto di Inglese: ";
                                        cin>>aul[i].votoIng;
                                        cout<<"\n";

                                            cout << "Voto di Matematica: ";
                                            cin>>aul[i].votoMat;
                                            cout<<"\n";

                                                cout << "Voto di Informatica: ";
                                                cin>>aul[i].votoInfo;
                                                cout<<"\n";

                                                    cout << "Voto di Sistemi: ";
                                                    cin>>aul[i].votoSis;
                                                    cout<<"\n";

                                                        cout << "Voto di Tpisit: ";
                                                        cin>>aul[i].votoTpsi;
                                                        cout<<"\n";

                                                            cout << "Voto di Tlc: ";
                                                            cin>>aul[i].votoTlc;
                                                            cout<<"\n";
                   }
/*Qui mostreremo a schermo i dati inseriti più la media aritmentica*/
                    cout<<" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -";
                    cout<<"\n";
                    cout<<"Dati inseriti dello/a studente. \n";

for(i=0;i<numeroStud;i++)
{

                cout<<"\nPagella e voto della media finale dello/a studente: \n" <<"\n" <<"Cognome: "<<aul[i].cognome <<"  Nome: "<<aul[i].nome <<" ID: "<<aul[i].id<<i+1 <<" Indirizzo della residenza: "<<aul[i].indirizzoStudente;
                 cout<<"\n \n";
                            /*il commento del cogn. nome e unaltro modo per visulaizzare i dati ma quello che ci viene richiesto e il puntamento alu[i].nomevariabile*/
                         /*cout << "Cognome: " <<aul[i].cognome;
                         cout<<"\n";

                            cout << "Nome: " <<aul[i].nome;
                            cout<<"\n";*/

                                cout << "\nVoto di Italiano: "<<aul[i].votoIta;
                                cout<<"\n";

                                    cout << "\nVoto di Storia: "<<aul[i].votoSto;
                                    cout<<"\n";

                                      cout << "\nVoto di Matematica: "<<aul[i].votoMat;
                                      cout<<"\n";

                                        cout << "\nVoto di Inglese: "<<aul[i].votoIng;
                                        cout<<"\n";

                                            cout << "\nVoto di Informatica: "<<aul[i].votoInfo;
                                            cout<<"\n";

                                                cout << "\nVoto di Sistemi: "<<aul[i].votoSis;
                                                cout<<"\n";

                                                    cout << "\nVoto di Tpisit: "<<aul[i].votoTpsi;
                                                    cout<<"\n";

                                                        cout << "\nVoto di Ttc: "<<aul[i].votoTlc;
                                                        cout<<"\n";

                                                        aul[i].media=(aul[i].votoIta+aul[i].votoSto+aul[i].votoIng+aul[i].votoMat+aul[i].votoInfo+aul[i].votoSis+aul[i].votoTpsi+aul[i].votoTlc)/8.0;
                                                        cout<<"\nLa media delle 8 materie e': " <<aul[i].media<<"\n";
                                                        /*nell'aasegnazione e consigliato mettere le parentesi tonde per avere una media esatta e non som,mata alle altre variabili*/

}//}

cout<<"\ncreate by Luigi Guernelli 2023\n";

    return 0;
}
