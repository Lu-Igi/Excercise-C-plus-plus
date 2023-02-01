#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
	int indiceDelleRighe, indiceDelleColonne,n,m;

    //Facciamo ciclare numeri randomici
        srand (time(NULL));

            int stampaSomma;

        cout<<"PRG:[n]<--index row/index columns-->[m]"<<endl;
            cout<<"\n";

    cout<<"Inserisci da quante righe è composta la matrice "<<endl;
        cin>>indiceDelleRighe;

     cout<<"Inserisci da quante colonne è composta la matrice "<<endl;
        cin>>indiceDelleColonne;

            /*Dopo aver dichiarato le variabili e detto all'utente quante c\r vuole inserire
            il prg mostrerà quale valore e in quale posizione viene messo*/
            int matrice[indiceDelleRighe][indiceDelleColonne];

	//inserimento matrice
    for (n=0;n<indiceDelleRighe;n++) {
        for (m=0;m<indiceDelleColonne;m++) {
            /*l'uitlizzo di rand e basso per accertarci l'esito positivo del prg*/
            matrice[n][m]=rand()%8+1;

            cout<<"La matrice["<<n<<"]["<<m<<"]= " <<matrice[n][m] <<endl;
                cout<<"QUI LA STAMPA DELLA MATRICE: "<<matrice[n][m]<<" <------- "<<endl;
                      cout<<"\n";          }
                                     }

	for (n=0;n<indiceDelleRighe;n++) {
            stampaSomma=0;
		for (m=0;m<indiceDelleColonne;m++) {
            stampaSomma=stampaSomma+matrice[n][m];
                                           }
		cout<<"La somma della riga numero "<<n << " è = "<<stampaSomma<<endl;
            cout<<"\n";
                                     }

	for (m=0;m<indiceDelleColonne;m++) {
		stampaSomma=0;
            for (n=0;n<indiceDelleRighe;n++) {
                stampaSomma=stampaSomma+matrice[n][m];
                                             }
		cout<<"La somma della colonna numero "<< m <<" è = "<<stampaSomma<<endl;
            cout<<"\n";
                                        }
	return (0);
}
