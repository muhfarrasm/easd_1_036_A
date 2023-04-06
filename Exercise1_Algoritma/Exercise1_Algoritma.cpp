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
	cout << endl;															// Membuat jarak per baris program
	cout << "================================================" << endl;		// Membuat tampilan susunan data element array
	cout << "===========Masukkan Element Array===============" << endl;
	cout << "================================================" << endl;

	for (int i = 0; i < n; i++)										// Menggunakan perulangan for untuk menyimpan  data pada array
	{
		cout << "Data ke-" << (i + 1) << ": ";
		cin >> farras[i];												// Menyimpan nilai data n kedalam array arr
	}
}


