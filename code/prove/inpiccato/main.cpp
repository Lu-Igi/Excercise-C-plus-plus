#include <stdio.h>
#include <iostream>
#include <cstdlib>

using namespace std;
int menu;
char parola[]={'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-'};
char controllo[]={'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-'};

int main(){

      int num;
      int cond=0;
      int ugual=0;
      int i,f;
      int tentativi=5;
      int errori=0;
      char risp;
      char lettera;
      cout<<"L'IMPICCATO\n";

      cout<<"==1. GIOCA \n";
      cout<<"==2.CREDITI \n";

      cout<<"COSA VUOI FARE? 1 o 2? = ";
      cin>>menu;
      if (menu==2) {
                   system ("cls");

                   cout<<"system 32 copyright \n";

                   system ("pause");
                   system ("cls");
                   return main();
                   }
     if ( menu==1) {



      do{
              system ("cls");
              cout<<"QUANTE LETTERE HA LA PAROLA CHE VUOI INSERIRE?(max 16): ";
              cin>>num;
              system ("cls");
              cout<<"INSERISCI LA PAROLA : ";
              cin>>parola;
              system("cls");
              cout<<"SICURO CHE LA PAROLA SIA: ";
              for(i=0;i<num;i++)
              {
                      cout<<parola[i];
              }
              cout<<" ?(s/n) ";
              cin>>risp;
              system("cls");
      }while(risp=='n' || risp=='N');
      for(i=0;i<num;i++){
              cout<<"-";
      }
      cout<<"\n\n\n\n Inizia il gioco.\n Tentativi: "<<tentativi<<"\n";
      do{
              cout<<"CHE LETTERA VUOI INSERIRE? ";
              cin>>lettera;
              for(f=0;f<num;f++){
                      if(parola[f]==lettera){
                              controllo[f]=lettera;
                              ugual++;
                              system("cls");
                      }
                      else if(parola[f]!=lettera){
                              errori++;
                              }
              }
              if(errori==num){
                      system ("cls");
                      cout<<"HAI SBAGLIATO!\n\n";
                      system ("pause");
                      tentativi--;
                      system("cls");
                      cout<<"\n\n\n\n Tentativi rimasti: "<<tentativi<<"\n\n\n";
              }
              for(f=0;f<num;f++)
                      cout<<controllo[f];
              cout<<"\n\n\n";
              errori=0;
              if(tentativi==0){
                      system("cls");
                      cout<<"HAI PERSO!\n\n\n";
                      cond=1;
                      system ("pause");

              }
              else if(ugual==num){
                      cout<<"HAI VINTO!!!\n\n\n";
                      cond=1;
                      system ("pause");

              }
      }while(cond==0);

      return 0;
      }}
