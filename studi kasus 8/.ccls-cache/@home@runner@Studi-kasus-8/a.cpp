#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <iomanip>

using namespace std;

class Matriks {
	friend ostream& operator<<(ostream&, Matriks&);
	friend istream& operator>>(istream&, Matriks&);
public:
	void baca_matriks();
	void cetak_matriks();
private:	
	char A[100][100][100];
	int baris = 5, kolom = 3;
};

void Matriks::baca_matriks (){ 
	int i,j;
	for(i=0; i<baris; i++)
		for(j=0; j<kolom; j++) {
			if(j==0){
				cout<<"Masukkan Nama ke - "<<i+1<<" : ";
				cin >> A[i][j];
			} else if (j==1){
				cout<<"Masukkan Stok ke - "<<i+1<<" : ";
				cin >> A[i][j];
			} else if (j==2){
				cout<<"Masukkan Harga ke - "<<i+1<<" : ";
				cin >> A[i][j];
			}
		}
}

void Matriks::cetak_matriks (){ 
	int i,j;
	for (i=0; i<baris; i++){ 
		for (j=0; j<kolom; j++)
		cout << setw(5) << A.A[i][j] << " ";
		cout << endl;
	}
}

istream& operator>>(istream& in, Matriks& A) {
	cout << "Masukkan data matriks\n";
	A.baca_matriks();
  cout << "\nNama \t Stok   Harga satuan\n";
	A.cetak_matriks();
	return in;
}

ostream& operator<<(ostream& out, Matriks& A) {
	int i,j;
	for (i=0; i<A.baris; i++){ 
		for (j=0; j<A.kolom; j++)
		cout << setw(5) << A.A[i][j] << " ";
		cout << endl;
	}
	return out;
}

int main(){
	Matriks matriks1;
	cin >> matriks1;
	cout << 
	getch();
	return 0;
}