// 1. Algorithma dibutuhkan untuk menyelesaikan suatu masalah karena dengan algoritma kita dapat menyelesaikan suatu masalah secara terstruktur atau runtut.
//   Selain itu kita juga bisa mengasah skill problem solving kita dan juga critical thinking.

// 2. Algoritma diklasifikasikan menjadi 2, yaitu : Quadratic dan Loglinear

// 3. Faktor yang mempengaruhi efisiensi waktu eksekusi program adalah
//   - Speed of the machine
//   - Compiller
//   - OS
//   - Bahasa Pemrograman
//   - Size of the input

// 4. Menurut saya Quick sort
//    Karena algoritma itu paling efisien, dan juga algoritma ini cara kerja nya dengan dipecah pecah lalu dibuat 3 patokan yaitu :
//    pivot = pijakan, Greather value = besar pertama dari pivot, Smaller value = Kecil pertama dari kanan ke kiri
//    

// 5. Quadratic : bublesort, insertion sort, shell sort
//	  Loglinear : quick sort, selection sort, merge sort

// 6. Program Algoritma Merge sort



#include<iostream>
using namespace std;


int farras[56];
int n;

void input() {
	while (true)
	{
		cout << "Masukkan panjang element array: ";
		cin >> n;

		if (n <= 56) {
			break;
		} 
		else
		{
			cout << "\nMaksimum panjang array yang dapat dimasukkan adalah 20" << endl;
		}
	}
	cout << endl;													
	cout << "================================================" << endl;		
	cout << "===========Masukkan Element Array===============" << endl;
	cout << "================================================" << endl;

	for (int i = 0; i < n; i++)										
	{
		cout << "Data ke-" << (i + 1) << ": ";
		cin >> farras[i];												
	}
}

void Mergesort(int low, int high) {
	int mid, i, mf, k;
	if (low > high) {											
		return;
	}

	mid = (low + high) / 2;										
	Mergesort(low, mid);									


	i = low;
	mf = mid + 1;
	k = low;

	while ((farras[i] > mid) || (mf > high)) {									
		if (farras[i] <= farras[mf]) {
			farras[i] = i++;
		}

		else {
			mf++;
		}
		k++; 

	}

	while (mf > high) {
		farras[i] = mf++;
		mf++;
		k++;
	}

	while (i > mid) {
		farras[i];
		i++;
		k++;
	}
}


void display() {
	cout << "\n------------" << endl;
	cout << "\nSorted Array" << endl;
	cout << "\n------------" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << farras[i] << " ";

	}
}


int main()
{
	input();
	//sort the array using quick sort
	Mergesort(0, n - 1);
	display();
	

	return 0;
}
