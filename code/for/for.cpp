#include <iostream>

using namespace std;

int main()
{
    int contatore=100;
    //for(inizializzazione contatore;condizione;incremento del contatore a ogni giro)
    for(contatore=0;contatore<100;contatore=contatore+1)//(i=0;i<100;i++)
    {
        //Istruzioni da ripetere
        cout<<"Ripetuto per la " <<contatore +1 <<"° volta\e " <<endl;
    }

    return 0;
}
