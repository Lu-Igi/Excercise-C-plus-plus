/*LEGGENDA VARIABILI::
scon=scontrino *3 operatori
vet=vettore
tot_inc_op=TOtale incasso (per singolo) opearatore
tot_g=totale giornata
n_prod=numero prodotti
n_prod_op=numero prodotti operatori

n_const=0 è una variabile non utilizzata
*/
/*MIGLIORIE
Dettaglio dello scontrino modifica delle cout per dire l'inizio della giornata o il cambio operatore.
1)Inizio giornata; 2)Cambio cassa 3)Fine giornata*/

#include<iostream>
using namespace std;

int main (){

	float scon[3][10], vet[20],tot_inc_op[3],tot_g=0;
	int  i=0,j=0,k,l=0/*n_const=0*/,n_prod,n_prod_op[3],n=0,prg=0;
	char fg,fo;
cout<<"Market Mig M&KT\n";
cout <<"(Premi zero per terminare la spesa)\n";

	//azzaremento alla variabile scon
	for(i=0;i<3;i++)

	{for(j=0;j<10;j++)

	{
		scon[i][j]=0;
	}
	}

    for(i=0;i<3;i++)
    tot_inc_op[i]=0;

	for(i=0;i<3;i++)
    n_prod_op[i]=0;

        i=0;
        j=0;

        do{
        for(n=0;n<3;n++)
        vet[n]=0;

        do{
        //system ("CLS");

        n_prod=0;
        k=0;//azzeramento var
			cout<<"\nCassiere num: " <<i+1 <<"\n";

			do{
				 cout<<"Importo "<<k+1 <<"° Prodotto ";
				 cin>> vet[k];
				n_prod++;//incremento dei prodotti inseriti nello sconttrino con il prezzo
				scon[i][j]=scon[i][j]+vet[k];
				//cout<<"i= "<<i;  cout<<"j= "<<j  ;
				k++;

			}while(vet[k -1] != 0);//test per vedere l'importo precedente sia =0

			prg++;//incremento del progressivo
			tot_g=tot_g+scon[i][j];
			tot_inc_op[i]=tot_inc_op[i]+scon[i][j];//finchè non cambio operatore la posizione dell'operatore è la stessa
			n_prod_op[i]=n_prod_op[i]+n_prod;

        //for()aggiungere il dettaglio degli importi deve scorrere"vet"
            for(n=0;n<k-1;n++){
            cout<<"\nProdotto num: " <<n+1 <<" " <<vet[n];
            }

			cout<<"\nTotale da pagare "<<scon[i][j]<<endl;
			cout<<"Progresivo scontrino "<<prg<<endl;
			cout<<"Num° prodotti "<<n_prod-1<<endl;//inserito -1 per retrocedere di 1 posto
			j++;
			cout<<"Per cambiare operatore digita 'O' ";
    		cin>>fo;


		}while (fo !='O');
		//i indice delle righe operatore // j indice delle colonne della consumazione
		i++;
		j=0;
		//cout<<"fine della giornata\n";
		cout<<"Fine giornata\n";
		cout<<"Per chiudere la giornata digitare 'F' ";
		cin>>fg;

	}while(fg != 'F');


cout<<"\nTotali giornata\n "<<tot_g;
cout<<"\nTotale incasso \n "<<tot_g;
cout<<"\nNumero scontrino \n"<<prg;


	for(i=0;i<3;i++)
	cout<<"\nIncasso operatore "<< i+1 << "  "<< tot_inc_op[i];

		for(i=0;i<3;i++)
	cout<<"\nNumero prodotto venduti dagli operatori "<< i+1 << "  "<< n_prod_op[i];

	return 0;
	}

