/*scrivere una "funzione" che legge da tastiera una letterae le converte in maiuscaola
(se minuscila) e viceversa */

#include <iostream>

using namespace std;

char converteCarattere(char c);


char converteCarattere(char c){

char ris;

if (c >= 'A' && c <='Z')
ris=c+32;

else if (c >= 'a' && c <='z')
ris=c-32;

return ris;
}

int main (){

char inp;//parametro attuale
char val;//variabile per il risultato della funzione
cout<<"Inserisci una lettere minuscola o maiscola "<<endl;
cin>>inp;

val=converteCarattere(inp);

cout<<"Il carattere ottenuto e': "<<val;

return 0;

}

/*la funzione accetterà un parametro di tipo char e restituirà ugualmente una funzione char*/
