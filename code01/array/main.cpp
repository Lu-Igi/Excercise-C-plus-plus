/*programma di amir sugli array*/
#include <iostream>
using namespace std;
int main() {

	int arr[20], vet1[100], vet2[100], vet3[100], i, m = 0, a = 0, p = 0, multVet1, addVet2 = 0, multVet3;

	cout<< "Devi inserire 20 valori tra 1-10\n";

	for (i = 0; i < 20; i++) {
		do {
			cout << "\nInserire il [" << i + 1 << "]valore : ";
			cin >> arr[i];
			if (arr[i] < 1 || arr[i]>10) {
				cout << "\nAttenzione! Inserisce un valore tra 1-10\n";
			}
			if (arr[i] < 5) {
				vet1[m] = arr[i];
				m++;
			}
			else if (arr[i] < 9) {
				vet2[a] = arr[i];
				a++;
			}
			else {
				vet3[p] = arr[i];
				p++;
			}
		} while (arr[i] < 1 || arr[i]>10);
	}
	cout << "\nIl primo vettore ------> ";
	for (i = 0; i < m; i++) {
		multVet1 = vet1[i] * 3;
		cout << multVet1 << " ";
	}

	cout << "\nIl secondo vettore ------> ";
	for (i = 0; i < a; i++) {
		addVet2 = vet2[i] + 2;
		cout << addVet2 << " ";
	}

	cout << "\nIl terzo vettore ------> ";
	for (i = 0; i < p; i++) {
		multVet3 = vet3[i] * 6;
		cout << multVet3 << " ";
	}

	cout << endl;
	return 0;
}
