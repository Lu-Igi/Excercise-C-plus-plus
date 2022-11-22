#include <iostream>
using namespace std;

int main()
{
    int n, somma = 0, somma2 = 0, arr[100], vet1[100], vet2[100], j, i, l;
    float media;
    j = 0;
i = 0;

    cout << "Quanti numeri vuoi inserire ? ";
    cin >> n;

    for (l = 0; l < n; l++) {
        do {
            cout << "\nInserire un valore tra (0-10) : ";
            cin >> arr[l];
            if (arr[l] < 0 || arr[l]>10) {
                cout << "\nAttenzione! Un valore tra 0-10\n";   //&&
            }
        } while (arr[l] < 0 || arr[l]>10);

       // (arr[l] < 6) ? vet1[i] = arr[l], i++ : vet2[j] = arr[l], j++;   //?=if, :=else
if(arr[l]<6){
vet1[i]=arr[l];
i++;}
else{
vet2[j]=arr[l];
j++;
}
   }cout << endl;
    for (l= 0; l < i; l++) {
        somma = somma + vet1[l];
    }
    for (l = 0; l < j; l++) {
        somma2 = somma2 + vet2[l];
    }

    media =  (float) (somma2)/j ;

    cout << "\nLa somma del primo vetttore ---->" << somma << endl;
    cout<<somma2<<endl;
    cout << "\nLa media del secondo vettore ---> " << media;


        cout << endl;
        return 0;
}
