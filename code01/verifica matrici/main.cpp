/*Verifica sulle matrici*/
#include <iostream>

using namespace std;

int main()
{
int i,j,k,l,m,mat[5][5],v1[25], v2[25], v3[25];

cout<<"Prova per la verifica sulle matrici"<<endl;

for (i=0;i<5;i++)
{
  for (j=0;j<5;j++){

   do{
      cout<<"Inserisci il valore della  "<<i+1 <<"° riga" <<" della "<<j+1 <<"° colonna"<<endl;
      /*cin inserimento manuale degli indici 5*5 */
      cin>>mat[i][j];
      /*inser. dell'istruzione*/
      if ((mat[i][j]<0) || (mat[i][j]>100)){

        cout<<"Attenzione errore nell'inserimento del valore digita un num tra 0-100 "<<endl;
        cout<<"\n";
            }
        }  while((mat[i][j]<0)||(mat[i][j]>100));

    }
}
k=0; l=0; m=0;
for (i=0;i<5;i++){

    for (j=0;j<5;j++){

       if((mat[i][j]<=0)||(mat[i][j]<31)){
        v1[k]=mat[i][j]*2;
        k++;}

else {
    if ((mat[i][j]>30)&(mat[i][j]<60))
    {
    v2[l]=mat[i][j]+20;
    l++;
}

    else{
    v3[m]=mat[i][j]+5;
    m++;
    }}

}}
cout<<"Valori Matrice\n ";
for (i=0;i<5;i++){
/*In questo modo visualizzeremo a schermo i valori delle matrici inserite */
for (j=0;j<5;j++){

cout<<mat[i][j]<<"  ";
}

cout<<"\n \n";

}
/*Questi cout serviranno per la visualizzazione dei vettori divisi
in gruppi che sono stati inserti dall'utente*/
cout<<"\nPrimo gruppo di vettori ";
for(i=0;i<k;i++){

cout<<v1[i]<<" ";
}

cout<<"\nSecondo gruppo di vettori ";

for(i=0;i<l;i++){

cout<<v2[i]<<" ";

}

cout<<"\nTerzo gruppo di vettori ";

for(i=0;i<m;i++){

cout<<v3[i]<<"  ";
}
    return 0;
}
