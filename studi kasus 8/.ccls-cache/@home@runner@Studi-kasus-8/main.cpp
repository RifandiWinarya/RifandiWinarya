/*
  NAMA ANGGOTA :
  ANUGRAH AKBAR PRIYOGO WIRATAMA (2100018373) 
  RIFANDI WINARYA (2100018376) 
  SATRIA DZAILAMI (2100018384) 

*/
#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <cstdlib>
#include <cstring>

using namespace std;

class Matriks {
	friend ostream& operator<<(ostream&, Matriks&);
	friend istream& operator>>(istream&, Matriks&);
public:
	void baca_matriks();
	void cetak_matriks();
	void convert_matriks();
	void total_matriks();
	void cetak_total();
private:	
	string A[10][10];
	int B[10][10];
	int C[10];
	int total;
};

void Matriks::baca_matriks (){ 
	int i,j;
	for(i=0; i<5; i++)
		for(j=0; j<3; j++) {
			if(j==0){
				cout<<"Masukkan Nama ke - "<<i<<" : ";
				cin >> A[i][j];
			} else if (j==1){
				cout<<"Masukkan Stok ke - "<<i<<" : ";
				cin >> A[i][j];
			} else if (j==2){
				cout<<"Masukkan Harga ke - "<<i<<" : ";
				cin >> A[i][j];
			}
		}
}

void Matriks::cetak_matriks (){ 
	int i,j;
	for (i=0; i<5; i++){ 
		for (j=0; j<3; j++)
		cout << setw(5) << A[i][j] << " ";
		cout << endl;
	}
}

void Matriks::convert_matriks (){ 
	int i,j;
	for (i=0; i<5; i++){ 
		for (j=1; j<3; j++)
		B[i][j]=atoi(A[i][j].c_str());
	}
}

void Matriks::total_matriks (){ 
	int i,j=1;
	for (i=0; i<5; i++){ 
		C[i]=B[i][j]*B[i][j+1];
	}
	total=C[0]+C[1]+C[2]+C[3]+C[4];
	cout<<"total : "<<total;
}

istream& operator>>(istream& in, Matriks& A) {
	cout << "Masukkan data matriks\n";
	A.baca_matriks();
	cout << "\nNama \t Stok   Harga satuan\n";
	A.cetak_matriks();
	A.convert_matriks();
	A.total_matriks();
	return in;
}


int main(){
	Matriks matriks1;
	cout << "Memasukkan data matriks I \n";
	cin >> matriks1;
	return 0;
}