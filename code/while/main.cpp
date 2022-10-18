#include <iostream>

using namespace std;

int main()
{
int contatore=100;//0;
while(contatore<100);

    {
    cout<<"Ripetuto per la " <<contatore +1 <<"° volta\e " <<endl;
      contatore++;// contatore=contatore+1;
    }
    return 0;
}

//La differenza con il cilco do-while è se cambiando il numero del contatore da 0 a 100
//Nel ciclo while non comparirà nessuna frase, perche il controllo verrà fatto subito
//Dando una condizione falsa così da non far partire il ciclo
//Il do-while ci servirà per ricevere un input per esempio se dobbiamo creare un programma con un certo range <10
//in quel caso dobbiamo far eseguire le istruioni di input
//una volta cioè far inserire il numero almeno una volta e poi controllare se è nel range mentre
//nel while non funzionerebbeperche come facciamo a controllare il numero se ancora non abbiamo fatto inserire
