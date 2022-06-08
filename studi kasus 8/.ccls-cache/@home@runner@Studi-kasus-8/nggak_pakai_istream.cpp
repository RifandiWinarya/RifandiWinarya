#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <iomanip>

using namespace std;

class Matriks {
public:
	void baca_matriks();
	void cetak_matriks();
	void x();
private:	
	char A[10][10][100];
	int baris=5, kolom=3;
};

void Matriks::baca_matriks (){ 
	int i,j;
	for(i=0; i<baris; i++)
		for(j=0; j<3; j++) {
			if(j==0){
				cout<<"Masukkan Nama ke - "<<i+1<<" : ";
				cin >> A[i][j];
			} else if (j==1){
				cout<<"Masukkan Stok ke - "<<i+1<<" : ";
				cin >> A[i][j];
			} else if (j==2){
				cout<<"Masukkan Harga ke - "<<i+1<<" : ";
				cin >> A[i][j];
				cout<<endl;
			}
		}
}

void Matriks::cetak_matriks (){ 
	int i,j;
	for (i=0; i<baris; i++){ 
		for (j=0; j<kolom; j++)
		cout << setw(5) << A[i][j] << " ";
		cout << endl;
	}
}
void Matriks::x(){
	cout << "Masukkan data matriks\n";
	baca_matriks();
	cout << "\nNama \t Stok \t Harga satuan\n";
	cetak_matriks();
}

int main(){
	Matriks a;
	cout << "Memasukkan data matriks I \n";
	a.x();
	return 0;
}