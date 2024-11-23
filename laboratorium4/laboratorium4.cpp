
#include <iostream>

using namespace std;

void zadanie1() {
	int nDlugosc;

	cout << "Podaj dlugosc tablicy: ";
		cin >> nDlugosc;
	cout << endl;
	int* tab = new int[nDlugosc];

	for (int i = 0; i < nDlugosc;i++) {
		int a;
		cout << "Podaj liczbe do dodania: ";
			cin >> a;
		cout << endl;
		tab[i] = a;
	}

	int nMax = tab[0];
	for (int i = 1; i < nDlugosc; i++) {
		if (tab[i]>nMax) {
			nMax = tab[i];
		}
	}
	cout << endl << "Najwieksza to " << nMax << endl;
}

void zadanie2() {
	//deklaracja
	int nDlugosc;
	cout << "Podaj dlugosc tablicy: ";
	cin >> nDlugosc;
	cout << endl;
	int* aLiczby = new int[nDlugosc];

	//dodaj wartości do tablicy
	for (int i = 0; i < nDlugosc;i++) {
		int a;
		cout << "Podaj liczbe do dodania: ";
		cin >> a;
		cout << endl;
		while (a < 0) {
			cout << "Liczba powinna być dodatnia: ";
			cin >> a;
			cout << endl;
		}
		aLiczby[i] = a;
	}

	//ustaw licznik na zero
	int nMax = aLiczby[0];
	int nMin = aLiczby[0];
	for (int i = 1; i < nDlugosc; i++) {
		if (aLiczby[i] > nMax) {
			nMax = aLiczby[i];
		}
	}
	int* aLicznikIndex = new int[nMax - 1];

	//licz
	for (int i = 0; i < nDlugosc;i++) {
		aLicznikIndex[aLiczby[i]] = aLicznikIndex[aLiczby[i]] + 1;
	}

	//znajdź max
	int nMaxW = aLicznikIndex[0];
	int nIndex = 0;
	for (int i = 0; i < nDlugosc; i++) {
		if (aLicznikIndex[i] > nMaxW) {
			nMaxW = aLicznikIndex[i];
			nIndex = i;
		}
	}
	cout << endl << "Najczesciej wystepujaca to " << nIndex << endl;
}

void zadanie3() {
	int aTablica[10][10] = {};

	for (int iRow = 0;iRow < 10;iRow++) {
		aTablica[iRow][0] = iRow;
		aTablica[iRow][1] = iRow + iRow;
		aTablica[iRow][2] = iRow * iRow;
		aTablica[iRow][3] = iRow + 4;
		aTablica[iRow][4] = iRow - 5;
		aTablica[iRow][5] = 0;
		aTablica[iRow][6] = 0;
		aTablica[iRow][7] = 0;
		aTablica[iRow][8] = 0;
		aTablica[iRow][9] = 0;
	}
	
	for (int iRow = 0; iRow < 10; iRow++) {
		for (int iCol = 0; iCol < 10; iCol++) {
			cout << aTablica[iRow][iCol] << '\t';
		}
		cout << endl;
	}
}

int main()
{
	zadanie1();
		cout << endl << endl;
	zadanie2();
		cout << endl << endl;
	zadanie3();
}
