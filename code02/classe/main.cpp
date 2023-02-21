#include <iostream>

using namespace std;
    struct Aula
    {
char cognome[40];
char nome[40];
char sezione[40];
char indirizzoStudente[40];
float votoIta, votoSto, votoIng, votoMat, votoInfo, votoSis, votoTpsi, votoTlc;
int id;
};


    int main()
{
Aula aul[5];
int i;
int numeroStud;
/*n inseriemnto di alunni per classe da mettere come variabile nel ciclo for*/
cout<<"PRG C++ -Archivio anagrafico di una classe.\n \n";
cout<<"Numero di studenti da inserire: ";
cin>>numeroStud;
cout<<"\nInformazioni degli studenti: \n";

        for(i=0;i<numeroStud;i++){

            cout<<"\nInserire la classe e sezione: ";
            cin>>aul[i].sezione;
        /*cout<<"La matricola sara' anche l'ID dato in progressivo dal "<<i+1 <<" numero ";*/
            cout<<"\nLo/a studente come matricola avra' l'ID: "<<i+1;
            cout<<"\n";

                cout << "\nCognome: ";
                cin>>aul[i].cognome;
                cout<<"\n";

                    cout << "Nome: ";
                    cin>>aul[i].nome;
                    cout<<"\n";

                        cout << "Indirizzo dell'abitazione: ";
                        cin>>aul[i].indirizzoStudente;
                        cout<<"\n";

                            cout<<"Voti per materia dello/a studende: "<<aul[i].cognome<<"  "<<aul[i].nome; /*<<" ID:" <<aul[i].id<<i+1;*/
                            cout<<"\n";

                            cout << "\nVoto di Italiano: ";
                            cin>>aul[i].votoIta;
                            cout<<"\n";

                                cout << "Voto di Storia: ";
                                cin>>aul[i].votoSto;
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

                    cout<<" - - - - - - - - - - - - - - - - - - - - - - - - - - - - ";
                    cout<<"\n";
                    cout<<"Dati inseriti: \n";

for(i=0;i<numeroStud;i++)
{

                cout<<"Voti per materia dello/a studende: "<<aul[i].cognome<<"  "<<aul[i].nome;

                         /*cout << "Cognome: " <<aul[i].cognome;
                         cout<<"\n";

                            cout << "Nome: " <<aul[i].nome;
                            cout<<"\n";*/

                                cout << "\nVoto di Italiano: "<<aul[i].votoIta;
                                cout<<"\n";

                                    cout << "Voto di Storia: "<<aul[i].votoSto;
                                    cout<<"\n";

                                        cout << "Voto di Informatica: "<<aul[i].votoInfo;
                                        cout<<"\n";

                                            cout << "Voto di Sistemi: "<<aul[i].votoSis;
                                            cout<<"\n";

                                                cout << "Voto di Tpisit: "<<aul[i].votoTpsi;
                                                cout<<"\n";

                                                    cout << "Voto di Ttc: "<<aul[i].votoTlc;
                                                    cout<<"\n \n";

}



    return 0;
}
